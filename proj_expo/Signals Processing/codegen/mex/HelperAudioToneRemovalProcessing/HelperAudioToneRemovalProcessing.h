/*
 * HelperAudioToneRemovalProcessing.h
 *
 * Code generation for function 'HelperAudioToneRemovalProcessing'
 *
 */

#ifndef __HELPERAUDIOTONEREMOVALPROCESSING_H__
#define __HELPERAUDIOTONEREMOVALPROCESSING_H__

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
extern void HelperAudioToneRemovalProcessing(const emlrtStack *sp, const real_T
  x[2048], const struct1_T param[2], real_T y_data[], int32_T y_size[2],
  boolean_T *pauseSim, boolean_T *stopSim);
extern void hn_not_empty_init(void);

#endif

/* End of code generation (HelperAudioToneRemovalProcessing.h) */
