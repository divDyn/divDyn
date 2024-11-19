// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Counts
NumericMatrix Counts(NumericVector tax, NumericVector bin);
RcppExport SEXP _divDyn_Counts(SEXP taxSEXP, SEXP binSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tax(taxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bin(binSEXP);
    rcpp_result_gen = Rcpp::wrap(Counts(tax, bin));
    return rcpp_result_gen;
END_RCPP
}
// CRbinwise
NumericMatrix CRbinwise(NumericVector binVar, int quota, int seed);
RcppExport SEXP _divDyn_CRbinwise(SEXP binVarSEXP, SEXP quotaSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type binVar(binVarSEXP);
    Rcpp::traits::input_parameter< int >::type quota(quotaSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(CRbinwise(binVar, quota, seed));
    return rcpp_result_gen;
END_RCPP
}
// seqduplicated
LogicalVector seqduplicated(NumericVector vect);
RcppExport SEXP _divDyn_seqduplicated(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(seqduplicated(vect));
    return rcpp_result_gen;
END_RCPP
}
// fillLogical
LogicalVector fillLogical(LogicalVector logic, bool dir);
RcppExport SEXP _divDyn_fillLogical(SEXP logicSEXP, SEXP dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type logic(logicSEXP);
    Rcpp::traits::input_parameter< bool >::type dir(dirSEXP);
    rcpp_result_gen = Rcpp::wrap(fillLogical(logic, dir));
    return rcpp_result_gen;
END_RCPP
}
// fillCharacter
StringVector fillCharacter(StringVector stri, bool dir);
RcppExport SEXP _divDyn_fillCharacter(SEXP striSEXP, SEXP dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type stri(striSEXP);
    Rcpp::traits::input_parameter< bool >::type dir(dirSEXP);
    rcpp_result_gen = Rcpp::wrap(fillCharacter(stri, dir));
    return rcpp_result_gen;
END_RCPP
}
// fillNumeric
NumericVector fillNumeric(NumericVector num, bool dir, NumericVector inc);
RcppExport SEXP _divDyn_fillNumeric(SEXP numSEXP, SEXP dirSEXP, SEXP incSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type num(numSEXP);
    Rcpp::traits::input_parameter< bool >::type dir(dirSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type inc(incSEXP);
    rcpp_result_gen = Rcpp::wrap(fillNumeric(num, dir, inc));
    return rcpp_result_gen;
END_RCPP
}
