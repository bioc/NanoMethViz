#' Create BSSeq object from methylation tabix file
#'
#' @param methy the NanoMethResult object or path to the methylation tabix file.
#' @param out_folder the folder to store intermediate files. One file is created
#'   for each sample and contains columns "chr", "pos", "total" and
#'   "methylated".
#' @param verbose TRUE if progress messages are to be printed
#'
#' @return a BSSeq object.
#' @export
#'
#' @examples
#' nmr <- load_example_nanomethresult()
#' bsseq <- methy_to_bsseq(nmr)
methy_to_bsseq <- function(
    methy,
    out_folder = tempdir(),
    verbose = TRUE
) {
    if (is(methy, "NanoMethResult")) {
        methy_path <- NanoMethViz::methy(methy)
    } else {
        methy_path <- methy
        assert_that(fs::file_exists(methy_path))
    }

    timed_log("creating intermediate files...", verbose = verbose)

    files <- convert_methy_to_dss(methy_path, out_folder)

    if (is(methy, "NanoMethResult")) {
        sample_anno <- NanoMethViz::samples(methy)
    } else {
        sample_anno <- tibble::tibble(sample = files$sample)
    }

    if (verbose) {
        timed_log("creating bsseq object...")
    }

    out <- create_bsseq_from_files(files$file_path, sample_anno, verbose = verbose)

    if (verbose) {
        timed_log("done")
    }

    out
}

convert_methy_to_dss <- function(
    methy,
    out_folder
) {
    assert_that(
        fs::file_exists(methy)
    )

    if (!fs::dir_exists(out_folder)) {
        fs::dir_create(out_folder, recurse = TRUE)
    }

    samples <- convert_methy_to_dss_cpp(
        fs::path_expand(methy),
        fs::path_expand(out_folder)
    )

    data.frame(
        sample = samples,
        file_path = path(out_folder, paste0(samples, ".txt"))
    )
}

#' @importFrom S4Vectors DataFrame
#' @importFrom SummarizedExperiment colData
#' @importFrom purrr map
#' @importFrom dplyr select distinct arrange mutate
#' @importFrom bsseq BSseq
create_bsseq_from_files <- function(paths, sample_anno, verbose = TRUE) {
    readr::local_edition(1) # temporary fix for vroom bad value
    read_dss <- purrr::partial(
        read_tsv,
        col_types = cols(
            chr = col_character(),
            pos = col_double(),
            total = col_double(),
            methylated = col_double()
        )
    )

    samples <- sample_anno$sample

    if (verbose) {
        timed_log("reading in parsed data...")
    }
    # read in data
    dat <- purrr::map(paths, read_dss)

    if (verbose) {
        timed_log("constructing matrices...")
    }
    # get unique positions
    combine_distinct_gpos <- function(x, y) {
        rbind(
            dplyr::select(x, "chr", "pos"),
            dplyr::select(y, "chr", "pos")
        ) %>%
            dplyr::distinct()
    }

    unique_pos_df <- purrr::reduce(
            dat,
            combine_distinct_gpos) %>%
        dplyr::arrange(.data$chr, .data$pos) %>%
        dplyr::mutate(id = paste(.data$chr, .data$pos))

    # create methylation matrix
    methylation_mat <- matrix(
        0,
        nrow = nrow(unique_pos_df),
        ncol = length(dat),
        dimnames = list(NULL, samples))

    for (i in seq_along(dat)) {
        row_inds <- paste(dat[[i]]$chr, dat[[i]]$pos) %>%
            factor(levels = unique_pos_df$id)

        methylation_mat[row_inds, i] <- dat[[i]]$methylated
    }

    # create coverage matrix
    cov_mat <- matrix(
        0,
        nrow = nrow(unique_pos_df),
        ncol = length(dat),
        dimnames = list(NULL, samples))

    for (i in seq_along(dat)) {
        row_inds <- paste(dat[[i]]$chr, dat[[i]]$pos) %>%
            factor(levels = unique_pos_df$id)

        cov_mat[row_inds, i] <- dat[[i]]$total
    }

    # create BSseq object
    result <- bsseq::BSseq(
        chr = unique_pos_df$chr,
        pos = unique_pos_df$pos,
        M = methylation_mat,
        Cov = cov_mat,
        sampleNames = samples
    )

    SummarizedExperiment::colData(result) <- S4Vectors::DataFrame(sample_anno)

    rownames(SummarizedExperiment::colData(result)) <- samples

    result
}
