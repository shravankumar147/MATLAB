/*
 * HelperAudioToneRemovalProcessing_terminate.c
 *
 * Code generation for function 'HelperAudioToneRemovalProcessing_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "HelperAudioToneRemovalProcessing_terminate.h"
#include "HelperUnpackUDP.h"
#include "_coder_HelperAudioToneRemovalProcessing_mex.h"
#include "HelperAudioToneRemovalProcessing_data.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void HelperAudioToneRemovalProcessing_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  HelperUnpackUDP_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void HelperAudioToneRemovalProcessing_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (HelperAudioToneRemovalProcessing_terminate.c) */
