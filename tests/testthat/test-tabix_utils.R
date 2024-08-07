test_that("Importing nanopolish works", {
    # setup
    methy_calls <- system.file(package = "NanoMethViz",
        c("sample1_nanopolish.tsv.gz", "sample2_nanopolish.tsv.gz"))
    temp_file <- paste0(tempfile(), ".tsv.bgz")
    withr::defer(file.remove(temp_file))

    # test
    expect_message(create_tabix_file(methy_calls, temp_file))
    expect_s4_class(methy_to_bsseq(temp_file), "BSseq")
})

test_that("Importing megalodon works", {
    # setup
    methy_calls <- system.file(package = "NanoMethViz",
       "megalodon_calls.txt.gz")
    temp_file <- paste0(tempfile(), ".tsv.bgz")
    withr::defer(file.remove(temp_file))

    # test
    expect_message(create_tabix_file(methy_calls, temp_file))
})
