#ifndef mcmcBinomialLogitLatent_h
#define mcmcBinomialLogitLatent_h
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "sampleYlatentBinomialLogit.h"
#include "updateParamLatent.h"
#include "updateLatent.h"
#include "updateShrinkLocal.h"
#include "updateParamShrinkGlobal.h"
#include "adaptVar.h"

RcppExport SEXP mcmcBinomialLogitLatent(arma::mat& Y,
								 arma::mat& Ylatent,
								 arma::umat& Random,
								 arma::vec& residVar,
								 arma::field< arma::mat >& latent,
								 arma::field< arma::mat >& paramLatent,
								 arma::field< arma::mat >& shrinkLocal,
								 arma::field< arma::vec >& paramShrinkGlobal,
								 double priorResidVarScale,
								 double priorResidVarShape,
								 double priorShrinkLocal,
								 double priorShrinkOverallShape,
								 double priorShrinkOverallScale,
								 double priorShrinkSpeedShape,
								 double priorShrinkSpeedScale,
								 arma::vec& adapt,
								 arma::vec& redund,
								 int nRandom,
								 arma::vec& nRandomLev,
								 arma::vec& nLatent,
								 double nsp,
								 int nsite,
								 int niter,
								 int nburn,
								 int thin,
								 double ncount,
								 int verbose);

#endif
