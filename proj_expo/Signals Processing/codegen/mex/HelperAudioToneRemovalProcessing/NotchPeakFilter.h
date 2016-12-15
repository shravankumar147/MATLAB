/*
 * NotchPeakFilter.h
 *
 * Code generation for function 'NotchPeakFilter'
 *
 */

#ifndef __NOTCHPEAKFILTER_H__
#define __NOTCHPEAKFILTER_H__

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
extern dsp_NotchPeakFilter *NotchPeakFilter_NotchPeakFilter(const emlrtStack *sp,
  dsp_NotchPeakFilter *obj, real_T varargin_4, real_T varargin_6);
extern void NotchPeakFilter_set_Bandwidth(const emlrtStack *sp,
  dsp_NotchPeakFilter *obj, real_T bw);
extern void NotchPeakFilter_stepImpl(dsp_NotchPeakFilter *obj, const real_T u
  [3072], real_T y_notch[3072]);
extern void c_NotchPeakFilter_processTunedP(dsp_NotchPeakFilter *obj);
extern void c_NotchPeakFilter_set_CenterFre(const emlrtStack *sp,
  dsp_NotchPeakFilter *obj, real_T cf);
extern void c_NotchPeakFilter_validatePrope(const emlrtStack *sp,
  dsp_NotchPeakFilter *obj);

#endif

/* End of code generation (NotchPeakFilter.h) */
