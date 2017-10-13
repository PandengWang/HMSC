#ifndef mcmcBinomialLogitXTr_h
#define mcmcBinomialLogitXTr_h
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "sampleYlatentBinomialLogit.h"
#include "updateParamX.h"
#include "updatePrecXTr.h"
#include "updateParamTr.h"

RcppExport SEXP mcmcBinomialLogitXTr(arma::mat& Y,
							  arma::mat& Ylatent,
							  arma::mat& X,
							  arma::mat& Tr,
							  arma::mat& paramX,
							  arma::mat& paramTr,
							  arma::mat& precX,
							  arma::vec& residVar,
							  arma::mat& priorParamTr,
							  arma::mat& priorVarTr,
							  arma::mat& priorVarXScaleMat,
							  double priorVarXDf,
							  double priorResidVarScale,
							  double priorResidVarShape,
							  double nsp,
							  int nsite,
							  int nparamX,
							  int nTr,
							  int niter,
							  int nburn,
							  int thin,
								double ncount,
							  int verbose);

#endif
