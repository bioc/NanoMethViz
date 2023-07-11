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
// count_cg_cpp
int count_cg_cpp(std::string str);
RcppExport SEXP _NanoMethViz_count_cg_cpp(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(count_cg_cpp(str));
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
// get_coord_map_cpp
IntegerVector get_coord_map_cpp(std::string cigar);
RcppExport SEXP _NanoMethViz_get_coord_map_cpp(SEXP cigarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type cigar(cigarSEXP);
    rcpp_result_gen = Rcpp::wrap(get_coord_map_cpp(cigar));
    return rcpp_result_gen;
END_RCPP
}
// get_coord_map_cpp2
IntegerVector get_coord_map_cpp2(std::string cigar);
RcppExport SEXP _NanoMethViz_get_coord_map_cpp2(SEXP cigarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type cigar(cigarSEXP);
    rcpp_result_gen = Rcpp::wrap(get_coord_map_cpp2(cigar));
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
// parse_bam_cpp
DataFrame parse_bam_cpp(std::string const& seq, std::string const& cigar, std::string const& mm_string, std::string const& ml_string, int const map_pos, std::string const& strand, char mod_code);
RcppExport SEXP _NanoMethViz_parse_bam_cpp(SEXP seqSEXP, SEXP cigarSEXP, SEXP mm_stringSEXP, SEXP ml_stringSEXP, SEXP map_posSEXP, SEXP strandSEXP, SEXP mod_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type cigar(cigarSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type mm_string(mm_stringSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type ml_string(ml_stringSEXP);
    Rcpp::traits::input_parameter< int const >::type map_pos(map_posSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type strand(strandSEXP);
    Rcpp::traits::input_parameter< char >::type mod_code(mod_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_bam_cpp(seq, cigar, mm_string, ml_string, map_pos, strand, mod_code));
    return rcpp_result_gen;
END_RCPP
}
// parse_bam_list_cpp
List parse_bam_list_cpp(std::vector<std::string> const& seq, std::vector<std::string> const& cigar, std::vector<std::string> const& mm_string, std::vector<std::string> const& ml_string, std::vector<int> const& map_pos, std::vector<std::string> const& strand, char mod_code);
RcppExport SEXP _NanoMethViz_parse_bam_list_cpp(SEXP seqSEXP, SEXP cigarSEXP, SEXP mm_stringSEXP, SEXP ml_stringSEXP, SEXP map_posSEXP, SEXP strandSEXP, SEXP mod_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type cigar(cigarSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type mm_string(mm_stringSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type ml_string(ml_stringSEXP);
    Rcpp::traits::input_parameter< std::vector<int> const& >::type map_pos(map_posSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type strand(strandSEXP);
    Rcpp::traits::input_parameter< char >::type mod_code(mod_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_bam_list_cpp(seq, cigar, mm_string, ml_string, map_pos, strand, mod_code));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NanoMethViz_convert_methy_to_dss_cpp", (DL_FUNC) &_NanoMethViz_convert_methy_to_dss_cpp, 2},
    {"_NanoMethViz_count_cg_cpp", (DL_FUNC) &_NanoMethViz_count_cg_cpp, 1},
    {"_NanoMethViz_get_char_pos_cpp", (DL_FUNC) &_NanoMethViz_get_char_pos_cpp, 2},
    {"_NanoMethViz_cigar_tokeniser_cpp", (DL_FUNC) &_NanoMethViz_cigar_tokeniser_cpp, 1},
    {"_NanoMethViz_get_coord_map_cpp", (DL_FUNC) &_NanoMethViz_get_coord_map_cpp, 1},
    {"_NanoMethViz_get_coord_map_cpp2", (DL_FUNC) &_NanoMethViz_get_coord_map_cpp2, 1},
    {"_NanoMethViz_mod_tokeniser_cpp", (DL_FUNC) &_NanoMethViz_mod_tokeniser_cpp, 2},
    {"_NanoMethViz_parse_bam_cpp", (DL_FUNC) &_NanoMethViz_parse_bam_cpp, 7},
    {"_NanoMethViz_parse_bam_list_cpp", (DL_FUNC) &_NanoMethViz_parse_bam_list_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_NanoMethViz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
