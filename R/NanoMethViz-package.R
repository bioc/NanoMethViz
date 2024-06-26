#' @details The main plotting functions in this package are [plot_gene()] and [plot_region()].
#'
#'   * See \code{vignette("UserGuide", package = "NanoMethViz")} for documentation of how to use this package.
#'
#'
#' @docType package
#'
#' @importFrom dplyr %>%
#' @importFrom methods new .valueClassTest is
#' @importFrom rlang .data
#' @importFrom readr read_tsv local_edition
#' @importFrom ggplot2 aes geom_rect geom_segment geom_text ggplot theme_void
#'   xlim ylim ggplot_build rel unit geom_vline
#' @importFrom dplyr filter group_by ungroup inner_join mutate n select summarise case_when
#' @importFrom tidyr unnest
#' @importFrom glue glue
#' @importFrom assertthat assert_that is.readable is.writeable is.dir is.string
#' @importFrom stringr str_extract
#' @importFrom scales label_number cut_si
#' @importFrom readr cols col_character col_integer col_logical col_double
#' @importFrom tibble tibble as_tibble add_column
#' @importFrom withr defer
#' @importFrom R.utils gunzip
#' @importFrom utils read.delim
#' @import cpp11
#' @import patchwork
#' @import assertthat
#' @import fs
#' @import zlibbioc
#' @import Rcpp
#' @useDynLib NanoMethViz
#' @keywords internal
"_PACKAGE"

# The following block is used by usethis to automatically manage
# roxygen namespace tags. Modify with care!
## usethis namespace: start
## usethis namespace: end
NULL
