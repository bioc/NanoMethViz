test_that("Plotting region methylation heatmap works", {
    # setup
    nmr <- load_example_nanomethresult()

    # test
    expect_no_warning(p <- plot_region_heatmap(nmr, "chr7", 6703892, 6730431))
    expect_s3_class(p, "ggplot")

    expect_no_warning(p <- plot_region_heatmap(nmr, "chr7", 6703892, 6730431, pos_style = "compact"))
    expect_s3_class(p, "ggplot")
})

test_that("Plotting works with GRanges",  {
    nmr <- load_example_nanomethresult()
    gr <- GenomicRanges::GRanges(
        seqnames = "chr7",
        ranges = IRanges::IRanges(start = 6703892, end = 6730431),
        strand = "*"
    )

    expect_no_warning(p <- plot_grange_heatmap(nmr, gr))
    expect_s3_class(p, "ggplot")

    expect_no_warning(p <- plot_grange_heatmap(nmr, gr, pos_style = "compact"))
    expect_s3_class(p, "ggplot")
})

test_that("Plotting region methylation works without exons", {
    # setup
    nmr <- load_example_nanomethresult()
    nmr@exons <- tibble(
        gene_id = character(0),
        chr = character(0),
        strand = character(0),
        start = integer(0),
        end = integer(0),
        transcript_id = character(0),
        symbol = character(0))

    expect_no_warning(p <- plot_region_heatmap(nmr, "chr7", 6703892, 6730431))
})
