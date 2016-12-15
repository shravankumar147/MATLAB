#ifndef __r5cGeKo98ybkLIRW3mgHRE_h__
#define __r5cGeKo98ybkLIRW3mgHRE_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_md23427238d35cbfa38316beb44264ba5
#define struct_md23427238d35cbfa38316beb44264ba5

struct md23427238d35cbfa38316beb44264ba5
{
  int32_T S0_isInitialized;
  real_T W0_AccFreqNorm;
  real_T P0_Amplitude;
  real_T P1_Frequency;
  real_T P2_Phase;
};

#endif                                 /*struct_md23427238d35cbfa38316beb44264ba5*/

#ifndef typedef_dsp_SineWave_4
#define typedef_dsp_SineWave_4

typedef struct md23427238d35cbfa38316beb44264ba5 dsp_SineWave_4;

#endif                                 /*typedef_dsp_SineWave_4*/

#ifndef struct_mdFSzTRsHxS8SXPiR4YBBlE
#define struct_mdFSzTRsHxS8SXPiR4YBBlE

struct mdFSzTRsHxS8SXPiR4YBBlE
{
  int32_T isInitialized;
  dsp_SineWave_4 cSFunObject;
  boolean_T NoTuningBeforeLockingCodeGenError;
};

#endif                                 /*struct_mdFSzTRsHxS8SXPiR4YBBlE*/

#ifndef typedef_dspcodegen_SineWave
#define typedef_dspcodegen_SineWave

typedef struct mdFSzTRsHxS8SXPiR4YBBlE dspcodegen_SineWave;

#endif                                 /*typedef_dspcodegen_SineWave*/

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  char_T f0[6];
} struct_T;

#endif                                 /*typedef_struct_T*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  char_T f0[3];
  char_T f1[8];
  char_T f2[7];
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[8];
  char_T f2[4];
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef typedef_d_struct_T
#define typedef_d_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[4];
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
  char_T f0[4];
  char_T f1[6];
  char_T f2[8];
  char_T f3[6];
} f_struct_T;

#endif                                 /*typedef_f_struct_T*/

#ifndef struct_md668b5e0a318d2efa1cbd39eb2eb580b7
#define struct_md668b5e0a318d2efa1cbd39eb2eb580b7

struct md668b5e0a318d2efa1cbd39eb2eb580b7
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  creal_T W1_Sums;
  int32_T W2_CoeffIdx;
  creal_T W3_StatesBuff[22];
  int32_T W4_TapDelayIndex;
  int32_T W5_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILT[24];
  creal_T O0_Y0[6250];
};

#endif                                 /*struct_md668b5e0a318d2efa1cbd39eb2eb580b7*/

#ifndef typedef_dsp_FIRDecimator_2
#define typedef_dsp_FIRDecimator_2

typedef struct md668b5e0a318d2efa1cbd39eb2eb580b7 dsp_FIRDecimator_2;

#endif                                 /*typedef_dsp_FIRDecimator_2*/

#ifndef struct_mdjaXksOBObriaVUVDW5NAsD
#define struct_mdjaXksOBObriaVUVDW5NAsD

struct mdjaXksOBObriaVUVDW5NAsD
{
  int32_T isInitialized;
  dsp_FIRDecimator_2 cSFunObject;
};

#endif                                 /*struct_mdjaXksOBObriaVUVDW5NAsD*/

#ifndef typedef_dspcodegen_FIRDecimator
#define typedef_dspcodegen_FIRDecimator

typedef struct mdjaXksOBObriaVUVDW5NAsD dspcodegen_FIRDecimator;

#endif                                 /*typedef_dspcodegen_FIRDecimator*/

#ifndef struct_md23aa1047476e29e2e09d97d02ddbd613
#define struct_md23aa1047476e29e2e09d97d02ddbd613

struct md23aa1047476e29e2e09d97d02ddbd613
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  creal_T W1_Sums;
  int32_T W2_CoeffIdx;
  creal_T W3_StatesBuff[20];
  int32_T W4_TapDelayIndex;
  int32_T W5_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILT[30];
  creal_T O0_Y0[25000];
};

#endif                                 /*struct_md23aa1047476e29e2e09d97d02ddbd613*/

#ifndef typedef_dsp_FIRDecimator_0
#define typedef_dsp_FIRDecimator_0

typedef struct md23aa1047476e29e2e09d97d02ddbd613 dsp_FIRDecimator_0;

#endif                                 /*typedef_dsp_FIRDecimator_0*/

#ifndef struct_mdkISebarhZ2aAA4K12n8nXD
#define struct_mdkISebarhZ2aAA4K12n8nXD

struct mdkISebarhZ2aAA4K12n8nXD
{
  int32_T isInitialized;
  dsp_FIRDecimator_0 cSFunObject;
};

#endif                                 /*struct_mdkISebarhZ2aAA4K12n8nXD*/

#ifndef typedef_dspcodegen_FIRDecimator_1
#define typedef_dspcodegen_FIRDecimator_1

typedef struct mdkISebarhZ2aAA4K12n8nXD dspcodegen_FIRDecimator_1;

#endif                                 /*typedef_dspcodegen_FIRDecimator_1*/

#ifndef struct_mde43c789fe3f75bfc8b1c9f03cc5639f5
#define struct_mde43c789fe3f75bfc8b1c9f03cc5639f5

struct mde43c789fe3f75bfc8b1c9f03cc5639f5
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  creal_T W1_Sums;
  int32_T W2_CoeffIdx;
  creal_T W3_StatesBuff[6];
  int32_T W4_TapDelayIndex;
  int32_T W5_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILT[8];
  creal_T O0_Y0[12500];
};

#endif                                 /*struct_mde43c789fe3f75bfc8b1c9f03cc5639f5*/

#ifndef typedef_dsp_FIRDecimator_1
#define typedef_dsp_FIRDecimator_1

typedef struct mde43c789fe3f75bfc8b1c9f03cc5639f5 dsp_FIRDecimator_1;

#endif                                 /*typedef_dsp_FIRDecimator_1*/

#ifndef struct_mdsUK9QHBttB48Ms42FDhUTF
#define struct_mdsUK9QHBttB48Ms42FDhUTF

struct mdsUK9QHBttB48Ms42FDhUTF
{
  int32_T isInitialized;
  dsp_FIRDecimator_1 cSFunObject;
};

#endif                                 /*struct_mdsUK9QHBttB48Ms42FDhUTF*/

#ifndef typedef_dspcodegen_FIRDecimator_2
#define typedef_dspcodegen_FIRDecimator_2

typedef struct mdsUK9QHBttB48Ms42FDhUTF dspcodegen_FIRDecimator_2;

#endif                                 /*typedef_dspcodegen_FIRDecimator_2*/

#ifndef struct_mdor0vdBZx4eww2q7nLuEYOC
#define struct_mdor0vdBZx4eww2q7nLuEYOC

struct mdor0vdBZx4eww2q7nLuEYOC
{
  int32_T isInitialized;
  dspcodegen_FIRDecimator_1 *CICFilterSysObj;
  dspcodegen_FIRDecimator_2 *CICCompFilterSysObj;
  dspcodegen_FIRDecimator *Stage3FilterSysObj;
};

#endif                                 /*struct_mdor0vdBZx4eww2q7nLuEYOC*/

#ifndef typedef_dsp_private_DownConverterFilterDesigner_2
#define typedef_dsp_private_DownConverterFilterDesigner_2

typedef struct mdor0vdBZx4eww2q7nLuEYOC
  dsp_private_DownConverterFilterDesigner_2;

#endif                                 /*typedef_dsp_private_DownConverterFilterDesigner_2*/

#ifndef struct_mdYvxQb2HrqV6T8bLc6BFxOD
#define struct_mdYvxQb2HrqV6T8bLc6BFxOD

struct mdYvxQb2HrqV6T8bLc6BFxOD
{
  int32_T isInitialized;
  real_T pSampleRateInherit;
  dspcodegen_FIRDecimator_1 *pCIC;
  dspcodegen_FIRDecimator_2 *pCICComp;
  dspcodegen_SineWave *pOscillator;
  creal_T pInitOscillatorOutput[250000];
  creal_T pInitMixerOutput[250000];
  creal_T pInitCICNormOutput[25000];
  dsp_private_DownConverterFilterDesigner_2 *pFilterDesigner;
  boolean_T pIsOscillatorDesigned;
  dspcodegen_FIRDecimator *pStage3;
};

#endif                                 /*struct_mdYvxQb2HrqV6T8bLc6BFxOD*/

#ifndef typedef_dsp_DigitalDownConverter_2
#define typedef_dsp_DigitalDownConverter_2

typedef struct mdYvxQb2HrqV6T8bLc6BFxOD dsp_DigitalDownConverter_2;

#endif                                 /*typedef_dsp_DigitalDownConverter_2*/

#ifndef typedef_InstanceStruct_r5cGeKo98ybkLIRW3mgHRE
#define typedef_InstanceStruct_r5cGeKo98ybkLIRW3mgHRE

typedef struct {
  dspcodegen_FIRDecimator gobj_11;
  dspcodegen_FIRDecimator gobj_10;
  dsp_private_DownConverterFilterDesigner_2 gobj_9;
  dsp_private_DownConverterFilterDesigner_2 gobj_8;
  dsp_private_DownConverterFilterDesigner_2 gobj_7;
  dsp_private_DownConverterFilterDesigner_2 gobj_6;
  dspcodegen_SineWave gobj_5;
  dspcodegen_SineWave gobj_4;
  dspcodegen_FIRDecimator_2 gobj_3;
  dspcodegen_FIRDecimator_2 gobj_2;
  dspcodegen_FIRDecimator_1 gobj_1;
  dspcodegen_FIRDecimator_1 gobj_0;
  SimStruct *S;
  dsp_DigitalDownConverter_2 sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  boolean_T c_isInitialized;
  boolean_T d_isInitialized;
  creal_T w[250000];
  creal_T s1[250000];
  creal_T bv[250000];
  creal_T b[250000];
  real_T varargin_14[250000];
  creal_T s2[25000];
  creal_T b_s2[25000];
  creal_T s4[12500];
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T (*u0)[250000];
  creal_T (*b_y0)[6250];
} InstanceStruct_r5cGeKo98ybkLIRW3mgHRE;

#endif                                 /*typedef_InstanceStruct_r5cGeKo98ybkLIRW3mgHRE*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_r5cGeKo98ybkLIRW3mgHRE(SimStruct *S, int_T method,
  void* data);

#endif
