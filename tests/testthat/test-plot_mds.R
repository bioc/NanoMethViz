test_that("Plot MDS works", {
    nmr <- load_example_nanomethresult()
    bss <- methy_to_bsseq(nmr)
    lmr <- bsseq_to_log_methy_ratio(bss)

    expect_no_warning(plot_mds(lmr))

    expect_no_warning(plot_mds(lmr, plot_dims = c(2, 3)))
    expect_no_warning(plot_mds(lmr, labels = paste0("samples", 1:6)))
    expect_no_warning(plot_mds(lmr, labels = paste0("samples", 1:6), groups = rep(c("A", "B"), 3)))

    expect_no_warning(plot_mds(lmr, groups = rep(c("A", "B"), 3)))
    expect_no_warning(plot_mds(lmr, groups = rep(c("A", "B"), 3), legend_name = "group_name"))

    expect_message(plot_mds(lmr, groups = 1:6), "Ignoring labels as groups is numeric. Set `labels=NULL` to suppress this message.")
    expect_no_warning(plot_mds(lmr, groups = 1:6, labels = NULL))
})
