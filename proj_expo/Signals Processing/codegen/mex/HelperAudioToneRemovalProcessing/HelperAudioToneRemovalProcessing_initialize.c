/*
 * HelperAudioToneRemovalProcessing_initialize.c
 *
 * Code generation for function 'HelperAudioToneRemovalProcessing_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "HelperAudioToneRemovalProcessing_initialize.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "eml_rand_shr3cong_stateful.h"
#include "eml_rand_mcg16807_stateful.h"
#include "eml_rand.h"
#include "eml_randn.h"
#include "HelperUnpackUDP.h"
#include "_coder_HelperAudioToneRemovalProcessing_mex.h"
#include "HelperAudioToneRemovalProcessing_data.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Declarations */
static void c_HelperAudioToneRemovalProcess(void);

/* Function Definitions */
static void c_HelperAudioToneRemovalProcess(void)
{
  d_state_not_empty_init();
  c_state_not_empty_init();
  b_state_not_empty_init();
  b_method_not_empty_init();
  state_not_empty_init();
  method_not_empty_init();
  pauseSwitch_not_empty_init();
  resetSwitch_not_empty_init();
  hn_not_empty_init();
  HelperUnpackUDP_init();
  eml_randn_init();
  eml_rand_init();
  eml_rand_mcg16807_stateful_init();
  eml_rand_shr3cong_stateful_init();
  c_eml_rand_mt19937ar_stateful_i();
}

void HelperAudioToneRemovalProcessing_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Signal_Blocks", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_HelperAudioToneRemovalProcess();
  }
}

/* End of code generation (HelperAudioToneRemovalProcessing_initialize.c) */
