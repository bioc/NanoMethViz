// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// convert_methy_to_dss_cpp
std::vector<std::string> convert_methy_to_dss_cpp(std::string input, std::string output_dir);
RcppExport SEXP _NanoMethViz_convert_methy_to_dss_cpp(SEXP inputSEXP, SEXP output_dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_dir(output_dirSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_methy_to_dss_cpp(input, output_dir));
    return rcpp_result_gen;
END_RCPP
}
// get_char_pos_cpp
NumericVector get_char_pos_cpp(CharacterVector x, CharacterVector c);
RcppExport SEXP _NanoMethViz_get_char_pos_cpp(SEXP xSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(get_char_pos_cpp(x, c));
    return rcpp_result_gen;
END_RCPP
}
// cigar_tokeniser_cpp
DataFrame cigar_tokeniser_cpp(CharacterVector x);
RcppExport SEXP _NanoMethViz_cigar_tokeniser_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cigar_tokeniser_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// cigar_tokeniser_cpp2
DataFrame cigar_tokeniser_cpp2(CharacterVector x);
RcppExport SEXP _NanoMethViz_cigar_tokeniser_cpp2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cigar_tokeniser_cpp2(x));
    return rcpp_result_gen;
END_RCPP
}
// mod_tokeniser_cpp
DataFrame mod_tokeniser_cpp(std::string string, std::string scores);
RcppExport SEXP _NanoMethViz_mod_tokeniser_cpp(SEXP stringSEXP, SEXP scoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type string(stringSEXP);
    Rcpp::traits::input_parameter< std::string >::type scores(scoresSEXP);
    rcpp_result_gen = Rcpp::wrap(mod_tokeniser_cpp(string, scores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NanoMethViz_convert_methy_to_dss_cpp", (DL_FUNC) &_NanoMethViz_convert_methy_to_dss_cpp, 2},
    {"_NanoMethViz_get_char_pos_cpp", (DL_FUNC) &_NanoMethViz_get_char_pos_cpp, 2},
    {"_NanoMethViz_cigar_tokeniser_cpp", (DL_FUNC) &_NanoMethViz_cigar_tokeniser_cpp, 1},
    {"_NanoMethViz_cigar_tokeniser_cpp2", (DL_FUNC) &_NanoMethViz_cigar_tokeniser_cpp2, 1},
    {"_NanoMethViz_mod_tokeniser_cpp", (DL_FUNC) &_NanoMethViz_mod_tokeniser_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_NanoMethViz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
