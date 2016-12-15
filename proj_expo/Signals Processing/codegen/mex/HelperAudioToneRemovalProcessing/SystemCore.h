/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "HelperAudioToneRemovalProcessing_types.h"

/* Function Declarations */
extern void SystemCore_reset(const emlrtStack *sp, dsp_NotchPeakFilter *obj);
extern void SystemCore_step(const emlrtStack *sp, dsp_NotchPeakFilter *obj,
  const real_T varargin_1[3072], real_T varargout_1[3072]);

#endif

/* End of code generation (SystemCore.h) */
