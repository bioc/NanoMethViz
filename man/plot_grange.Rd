% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_grange.R
\name{plot_grange}
\alias{plot_grange}
\title{Plot GRanges}
\usage{
plot_grange(
  x,
  grange,
  anno_regions = NULL,
  binary_threshold = NULL,
  avg_method = c("mean", "median"),
  spaghetti = FALSE,
  heatmap = TRUE,
  heatmap_subsample = 50,
  gene_anno = TRUE,
  smoothing_window = 2000,
  window_prop = 0,
  palette = ggplot2::scale_colour_brewer(palette = "Set1"),
  line_size = 1,
  span = NULL
)
}
\arguments{
\item{x}{the NanoMethResult object.}

\item{grange}{the GRanges object with one entry.}

\item{anno_regions}{the data.frame of regions to be annotated.}

\item{binary_threshold}{the modification probability such that calls with
modification probability above the threshold are set to 1 and probabilities
equal to or below the threshold are set to 0.}

\item{avg_method}{the average method for pre-smoothing at each genomic position.
Data is pre-smoothed at each genomic position before the smoothed aggregate line
is generated for performance reasons. The default is "mean" which corresponds
to the average methylation fraction. The alternative "median" option is
closer to an average within the more common methylation state.}

\item{spaghetti}{whether or not individual reads should be shown.}

\item{heatmap}{whether or not read-methylation heatmap should be shown.}

\item{heatmap_subsample}{how many packed rows of reads to subsample to.}

\item{gene_anno}{whether to show gene annotation.}

\item{smoothing_window}{the window size for smoothing the trend line.}

\item{window_prop}{the size of flanking region to plot. Can be a vector of two
values for left and right window size. Values indicate proportion of gene
length.}

\item{palette}{the ggplot colour palette used for groups.}

\item{line_size}{the size of the lines.}

\item{span}{DEPRECATED, use smoothing_window instead. Will be removed in next version.}
}
\value{
a patchwork plot containing the methylation profile in the specified
region.
}
\description{
Plot GRanges
}
\examples{
nmr <- load_example_nanomethresult()
plot_grange(nmr, GenomicRanges::GRanges("chr7:6703892-6730431"))

}
