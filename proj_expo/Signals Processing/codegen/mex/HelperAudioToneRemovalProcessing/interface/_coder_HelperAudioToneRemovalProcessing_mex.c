/*
 * _coder_HelperAudioToneRemovalProcessing_mex.c
 *
 * Code generation for function '_coder_HelperAudioToneRemovalProcessing_mex'
 *
 */

/* Include files */
#include "HelperAudioToneRemovalProcessing.h"
#include "_coder_HelperAudioToneRemovalProcessing_mex.h"
#include "HelperAudioToneRemovalProcessing_terminate.h"
#include "_coder_HelperAudioToneRemovalProcessing_api.h"
#include "HelperAudioToneRemovalProcessing_initialize.h"
#include "HelperAudioToneRemovalProcessing_data.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Declarations */
static void d_HelperAudioToneRemovalProcess(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void d_HelperAudioToneRemovalProcess(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[3])
{
  int32_T n;
  const mxArray *inputs[3];
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 32,
                        "HelperAudioToneRemovalProcessing", 4, 32,
                        "HelperAudioToneRemovalProcessing", 4, 32,
                        "HelperAudioToneRemovalProcessing");
  }

  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        32, "HelperAudioToneRemovalProcessing");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 32,
                        "HelperAudioToneRemovalProcessing");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  HelperAudioToneRemovalProcessing_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  HelperAudioToneRemovalProcessing_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(HelperAudioToneRemovalProcessing_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  HelperAudioToneRemovalProcessing_initialize();

  /* Dispatch the entry-point. */
  d_HelperAudioToneRemovalProcess(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_HelperAudioToneRemovalProcessing_mex.c) */
