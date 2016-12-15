#ifndef __26GO2F3UHHGfEdPxOZc7uH_h__
#define __26GO2F3UHHGfEdPxOZc7uH_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_md2c9d6da8c12bc2eba45679c052e07282
#define struct_md2c9d6da8c12bc2eba45679c052e07282

struct md2c9d6da8c12bc2eba45679c052e07282
{
  int32_T S0_isInitialized;
  real_T W0_InBuf[24];
  int32_T W1_InBufIdx;
  real_T P0_FILTER[120];
  int32_T P1_PolyphaseSelector[5];
  int32_T P2_StartIdx[4];
  int32_T P3_StopIdx[4];
};

#endif                                 /*struct_md2c9d6da8c12bc2eba45679c052e07282*/

#ifndef typedef_dsp_FIRRateConverter_0
#define typedef_dsp_FIRRateConverter_0

typedef struct md2c9d6da8c12bc2eba45679c052e07282 dsp_FIRRateConverter_0;

#endif                                 /*typedef_dsp_FIRRateConverter_0*/

#ifndef struct_md320321efde7f32c584fbb1c5a83bb3ea
#define struct_md320321efde7f32c584fbb1c5a83bb3ea

struct md320321efde7f32c584fbb1c5a83bb3ea
{
  int32_T S0_isInitialized;
  real_T W0_TapDelayBuff[29];
  int32_T W1_PrevNumChan;
  real_T P0_IC;
  real_T P1_FILTER_COEFF[150];
};

#endif                                 /*struct_md320321efde7f32c584fbb1c5a83bb3ea*/

#ifndef typedef_dsp_FIRInterpolator_1
#define typedef_dsp_FIRInterpolator_1

typedef struct md320321efde7f32c584fbb1c5a83bb3ea dsp_FIRInterpolator_1;

#endif                                 /*typedef_dsp_FIRInterpolator_1*/

#ifndef struct_mdYr1N60v13dL3AVcXNPTSkG
#define struct_mdYr1N60v13dL3AVcXNPTSkG

struct mdYr1N60v13dL3AVcXNPTSkG
{
  int32_T isInitialized;
  dsp_FIRInterpolator_1 cSFunObject;
};

#endif                                 /*struct_mdYr1N60v13dL3AVcXNPTSkG*/

#ifndef typedef_dspcodegen_FIRInterpolator
#define typedef_dspcodegen_FIRInterpolator

typedef struct mdYr1N60v13dL3AVcXNPTSkG dspcodegen_FIRInterpolator;

#endif                                 /*typedef_dspcodegen_FIRInterpolator*/

#ifndef struct_mdUIPAIBDfZC0IOpQh2asIRG
#define struct_mdUIPAIBDfZC0IOpQh2asIRG

struct mdUIPAIBDfZC0IOpQh2asIRG
{
  int32_T isInitialized;
  dsp_FIRRateConverter_0 cSFunObject;
};

#endif                                 /*struct_mdUIPAIBDfZC0IOpQh2asIRG*/

#ifndef typedef_dspcodegen_FIRRateConverter
#define typedef_dspcodegen_FIRRateConverter

typedef struct mdUIPAIBDfZC0IOpQh2asIRG dspcodegen_FIRRateConverter;

#endif                                 /*typedef_dspcodegen_FIRRateConverter*/

#ifndef struct_mdgeIDohpQdX8vEZvvkRjQdG
#define struct_mdgeIDohpQdX8vEZvvkRjQdG

struct mdgeIDohpQdX8vEZvvkRjQdG
{
  int32_T isInitialized;
  uint32_T inputVarSize1[8];
  real_T NumChannels;
  dspcodegen_FIRRateConverter *filt1;
  dspcodegen_FIRInterpolator *filt2;
};

#endif                                 /*struct_mdgeIDohpQdX8vEZvvkRjQdG*/

#ifndef typedef_dsp_SampleRateConverter_2
#define typedef_dsp_SampleRateConverter_2

typedef struct mdgeIDohpQdX8vEZvvkRjQdG dsp_SampleRateConverter_2;

#endif                                 /*typedef_dsp_SampleRateConverter_2*/

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  char_T f0[7];
} struct_T;

#endif                                 /*typedef_struct_T*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
  char_T f2[4];
  char_T f3;
  real_T f4;
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
  char_T f2[4];
  char_T f3[2];
  real_T f4;
  char_T f5[2];
  real_T f6;
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef typedef_d_struct_T
#define typedef_d_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
  char_T f2[4];
  char_T f3;
  real_T f4;
  char_T f5[2];
  real_T f6;
} d_struct_T;

#endif                                 /*typedef_d_struct_T*/

#ifndef typedef_e_struct_T
#define typedef_e_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
} e_struct_T;

#endif                                 /*typedef_e_struct_T*/

#ifndef typedef_f_struct_T
#define typedef_f_struct_T

typedef struct {
  char_T f0[2];
} f_struct_T;

#endif                                 /*typedef_f_struct_T*/

#ifndef struct_tag_sLB0h5kJX2Nn6KbX6aGH6MG
#define struct_tag_sLB0h5kJX2Nn6KbX6aGH6MG

struct tag_sLB0h5kJX2Nn6KbX6aGH6MG
{
  real_T coeffs1[119];
  real_T rcf1[2];
  real_T coeffs2[147];
  real_T rcf2[2];
};

#endif                                 /*struct_tag_sLB0h5kJX2Nn6KbX6aGH6MG*/

#ifndef typedef_sLB0h5kJX2Nn6KbX6aGH6MG
#define typedef_sLB0h5kJX2Nn6KbX6aGH6MG

typedef struct tag_sLB0h5kJX2Nn6KbX6aGH6MG sLB0h5kJX2Nn6KbX6aGH6MG;

#endif                                 /*typedef_sLB0h5kJX2Nn6KbX6aGH6MG*/

#ifndef typedef_InstanceStruct_26GO2F3UHHGfEdPxOZc7uH
#define typedef_InstanceStruct_26GO2F3UHHGfEdPxOZc7uH

typedef struct {
  dspcodegen_FIRInterpolator gobj_3;
  dspcodegen_FIRInterpolator gobj_2;
  dspcodegen_FIRRateConverter gobj_1;
  dspcodegen_FIRRateConverter gobj_0;
  SimStruct *S;
  dsp_SampleRateConverter_2 sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T (*u0)[1000];
  real_T (*b_y0)[6250];
} InstanceStruct_26GO2F3UHHGfEdPxOZc7uH;

#endif                                 /*typedef_InstanceStruct_26GO2F3UHHGfEdPxOZc7uH*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_26GO2F3UHHGfEdPxOZc7uH(SimStruct *S, int_T method,
  void* data);

#endif
