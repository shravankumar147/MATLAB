/*
 * HelperUnpackUDP.h
 *
 * Code generation for function 'HelperUnpackUDP'
 *
 */

#ifndef __HELPERUNPACKUDP_H__
#define __HELPERUNPACKUDP_H__

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
extern void HelperUnpackUDP(const emlrtStack *sp, real_T paramNew_data[],
  int32_T paramNew_size[2], boolean_T *simControlFlags_resetObj, boolean_T
  *simControlFlags_pauseSim, boolean_T *simControlFlags_stopSim);
extern void HelperUnpackUDP_free(void);
extern void HelperUnpackUDP_init(void);
extern void pauseSwitch_not_empty_init(void);
extern void resetSwitch_not_empty_init(void);

#endif

/* End of code generation (HelperUnpackUDP.h) */
