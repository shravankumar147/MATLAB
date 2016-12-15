/*
 * randn.c
 *
 * Code generation for function 'randn'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "randn.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void randn(real_T r[1024])
{
  emlrtRandn(r, 1024);
}

/* End of code generation (randn.c) */
