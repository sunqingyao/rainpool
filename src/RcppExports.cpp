// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// set_seed_rainpool
void set_seed_rainpool(Rcpp::IntegerVector seed);
RcppExport SEXP _rainpool_set_seed_rainpool(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type seed(seedSEXP);
    set_seed_rainpool(seed);
    return R_NilValue;
END_RCPP
}
// rbinom_rainpool
NumericVector rbinom_rainpool(NumericVector n, NumericVector size, NumericVector prob);
RcppExport SEXP _rainpool_rbinom_rainpool(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(rbinom_rainpool(n, size, prob));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rainpool_set_seed_rainpool", (DL_FUNC) &_rainpool_set_seed_rainpool, 1},
    {"_rainpool_rbinom_rainpool", (DL_FUNC) &_rainpool_rbinom_rainpool, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rainpool(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}