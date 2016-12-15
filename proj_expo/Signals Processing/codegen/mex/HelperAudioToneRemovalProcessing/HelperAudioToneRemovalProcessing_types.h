/*
 * HelperAudioToneRemovalProcessing_types.h
 *
 * Code generation for function 'HelperAudioToneRemovalProcessing'
 *
 */

#ifndef __HELPERAUDIOTONEREMOVALPROCESSING_TYPES_H__
#define __HELPERAUDIOTONEREMOVALPROCESSING_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_dsp_NotchPeakFilter
#define typedef_dsp_NotchPeakFilter

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T pSampleRateDialog;
  real_T Bandwidth;
  real_T CenterFrequency;
  real_T States[6];
  real_T privBandwidthCoefficient;
  real_T privCenterFrequencyCoefficient;
  real_T NumChannels;
} dsp_NotchPeakFilter;

#endif                                 /*typedef_dsp_NotchPeakFilter*/

#ifndef struct_emxArray_real_T_255x1
#define struct_emxArray_real_T_255x1

struct emxArray_real_T_255x1
{
  real_T data[255];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_255x1*/

#ifndef typedef_emxArray_real_T_255x1
#define typedef_emxArray_real_T_255x1

typedef struct emxArray_real_T_255x1 emxArray_real_T_255x1;

#endif                                 /*typedef_emxArray_real_T_255x1*/

#ifndef struct_dsp_UDPReceiver_0
#define struct_dsp_UDPReceiver_0

struct dsp_UDPReceiver_0
{
  int32_T S0_isInitialized;
  real_T W0_NetworkLib[137];
  emxArray_real_T_255x1 O0_Y0;
};

#endif                                 /*struct_dsp_UDPReceiver_0*/

#ifndef typedef_dsp_UDPReceiver_0
#define typedef_dsp_UDPReceiver_0

typedef struct dsp_UDPReceiver_0 dsp_UDPReceiver_0;

#endif                                 /*typedef_dsp_UDPReceiver_0*/

#ifndef struct_emxArray_char_T_1x16
#define struct_emxArray_char_T_1x16

struct emxArray_char_T_1x16
{
  char_T data[16];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x16*/

#ifndef typedef_emxArray_char_T_1x16
#define typedef_emxArray_char_T_1x16

typedef struct emxArray_char_T_1x16 emxArray_char_T_1x16;

#endif                                 /*typedef_emxArray_char_T_1x16*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_char_T_1x16 Name;
  real_T InitialValue;
  real_T Limits[2];
} struct1_T;

#endif                                 /*typedef_struct1_T*/
#endif

/* End of code generation (HelperAudioToneRemovalProcessing_types.h) */
