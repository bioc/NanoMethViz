test_that("ModBamResults getters and setters work", {
    # setup
    mbr <- load_example_modbamresult()

    # test
    expect_s4_class(NanoMethViz::methy(mbr), "ModBamFiles")
    expect_s3_class(NanoMethViz::exons(mbr), "data.frame")
    expect_s3_class(NanoMethViz::samples(mbr), "data.frame")

    expect_no_warning(
        ModBamResult(
            NanoMethViz::methy(mbr),
            NanoMethViz::samples(mbr)
        )
    )

    expect_no_warning(methy(mbr) <- methy(mbr))
    expect_no_warning(samples(mbr) <- samples(mbr))
    expect_no_warning(exons(mbr) <- exons(mbr))
    expect_error(methy(mbr) <- "invalid_path")
    expect_error(exons(mbr) <- exons(mbr)[, -"strand"])

    expect_error(
        ModBamFiles(
            paths = system.file(package = "NanoMethViz", "missing.bam"),
            samples = "sample1"
        ),
        regex = "Path .+ does not exist"
    )

    expect_error(
        ModBamFiles(
            paths = system.file(package = "NanoMethViz", "no_index.bam"),
            samples = "sample1"
        ),
        regex = ".+ does not have bam index"
    )
})
