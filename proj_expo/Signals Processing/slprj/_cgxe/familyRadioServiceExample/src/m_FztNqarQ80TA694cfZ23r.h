#ifndef __FztNqarQ80TA694cfZ23r_h__
#define __FztNqarQ80TA694cfZ23r_h__

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
  char_T f1[6];
} d_struct_T;

#endif                                 /*typedef_d_struct_T*/

#ifndef typedef_e_struct_T
#define typedef_e_struct_T

typedef struct {
  char_T f0[4];
  char_T f1[6];
  char_T f2[8];
  char_T f3[6];
} e_struct_T;

#endif                                 /*typedef_e_struct_T*/

#ifndef struct_md1cb006dbde96bab87504f16fb903e04e
#define struct_md1cb006dbde96bab87504f16fb903e04e

struct md1cb006dbde96bab87504f16fb903e04e
{
  int32_T S0_isInitialized;
  creal_T W0_TapDelayBuff[11];
  int32_T W1_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILTER_COEFF[24];
};

#endif                                 /*struct_md1cb006dbde96bab87504f16fb903e04e*/

#ifndef typedef_dsp_FIRInterpolator_1
#define typedef_dsp_FIRInterpolator_1

typedef struct md1cb006dbde96bab87504f16fb903e04e dsp_FIRInterpolator_1;

#endif                                 /*typedef_dsp_FIRInterpolator_1*/

#ifndef struct_mdLaWX000S8Eqb3qrl5UHPwB
#define struct_mdLaWX000S8Eqb3qrl5UHPwB

struct mdLaWX000S8Eqb3qrl5UHPwB
{
  int32_T isInitialized;
  dsp_FIRInterpolator_1 cSFunObject;
};

#endif                                 /*struct_mdLaWX000S8Eqb3qrl5UHPwB*/

#ifndef typedef_dspcodegen_FIRInterpolator
#define typedef_dspcodegen_FIRInterpolator

typedef struct mdLaWX000S8Eqb3qrl5UHPwB dspcodegen_FIRInterpolator;

#endif                                 /*typedef_dspcodegen_FIRInterpolator*/

#ifndef struct_md3d423556cbeaeb097feb6065ffb4f71
#define struct_md3d423556cbeaeb097feb6065ffb4f71

struct md3d423556cbeaeb097feb6065ffb4f71
{
  int32_T S0_isInitialized;
  creal_T W0_TapDelayBuff[2];
  int32_T W1_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILTER_COEFF[30];
};

#endif                                 /*struct_md3d423556cbeaeb097feb6065ffb4f71*/

#ifndef typedef_dsp_FIRInterpolator_0
#define typedef_dsp_FIRInterpolator_0

typedef struct md3d423556cbeaeb097feb6065ffb4f71 dsp_FIRInterpolator_0;

#endif                                 /*typedef_dsp_FIRInterpolator_0*/

#ifndef struct_mdUFN9PVLlWCU1e59Rhy3x1C
#define struct_mdUFN9PVLlWCU1e59Rhy3x1C

struct mdUFN9PVLlWCU1e59Rhy3x1C
{
  int32_T isInitialized;
  dsp_FIRInterpolator_0 cSFunObject;
};

#endif                                 /*struct_mdUFN9PVLlWCU1e59Rhy3x1C*/

#ifndef typedef_dspcodegen_FIRInterpolator_1
#define typedef_dspcodegen_FIRInterpolator_1

typedef struct mdUFN9PVLlWCU1e59Rhy3x1C dspcodegen_FIRInterpolator_1;

#endif                                 /*typedef_dspcodegen_FIRInterpolator_1*/

#ifndef struct_md4d9f993a39a7521de83959a23eb3da49
#define struct_md4d9f993a39a7521de83959a23eb3da49

struct md4d9f993a39a7521de83959a23eb3da49
{
  int32_T S0_isInitialized;
  creal_T W0_TapDelayBuff[3];
  int32_T W1_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILTER_COEFF[8];
};

#endif                                 /*struct_md4d9f993a39a7521de83959a23eb3da49*/

#ifndef typedef_dsp_FIRInterpolator_2
#define typedef_dsp_FIRInterpolator_2

typedef struct md4d9f993a39a7521de83959a23eb3da49 dsp_FIRInterpolator_2;

#endif                                 /*typedef_dsp_FIRInterpolator_2*/

#ifndef struct_mdLkNscsqlPcKXMEr3OVYG1D
#define struct_mdLkNscsqlPcKXMEr3OVYG1D

struct mdLkNscsqlPcKXMEr3OVYG1D
{
  int32_T isInitialized;
  dsp_FIRInterpolator_2 cSFunObject;
};

#endif                                 /*struct_mdLkNscsqlPcKXMEr3OVYG1D*/

#ifndef typedef_dspcodegen_FIRInterpolator_2
#define typedef_dspcodegen_FIRInterpolator_2

typedef struct mdLkNscsqlPcKXMEr3OVYG1D dspcodegen_FIRInterpolator_2;

#endif                                 /*typedef_dspcodegen_FIRInterpolator_2*/

#ifndef struct_mdT52yiulS3ZFysHZUXFyE3G
#define struct_mdT52yiulS3ZFysHZUXFyE3G

struct mdT52yiulS3ZFysHZUXFyE3G
{
  int32_T isInitialized;
  dspcodegen_FIRInterpolator_1 *CICFilterSysObj;
  dspcodegen_FIRInterpolator_2 *CICCompFilterSysObj;
  dspcodegen_FIRInterpolator *Stage1FilterSysObj;
};

#endif                                 /*struct_mdT52yiulS3ZFysHZUXFyE3G*/

#ifndef typedef_dsp_private_UpConverterFilterDesigner_2
#define typedef_dsp_private_UpConverterFilterDesigner_2

typedef struct mdT52yiulS3ZFysHZUXFyE3G dsp_private_UpConverterFilterDesigner_2;

#endif                                 /*typedef_dsp_private_UpConverterFilterDesigner_2*/

#ifndef struct_mdMkuKadDt43qqDHvPcS7ffF
#define struct_mdMkuKadDt43qqDHvPcS7ffF

struct mdMkuKadDt43qqDHvPcS7ffF
{
  int32_T isInitialized;
  real_T pSampleRateInherit;
  dspcodegen_FIRInterpolator_1 *pCIC;
  dspcodegen_FIRInterpolator_2 *pCICComp;
  dspcodegen_SineWave *pOscillator;
  creal_T pInitOscillatorOutput[250000];
  real_T pInitMixerOutput[250000];
  creal_T pInitCICNormOutput[250000];
  dsp_private_UpConverterFilterDesigner_2 *pFilterDesigner;
  boolean_T pIsOscillatorDesigned;
  dspcodegen_FIRInterpolator *pStage1;
};

#endif                                 /*struct_mdMkuKadDt43qqDHvPcS7ffF*/

#ifndef typedef_dsp_DigitalUpConverter_2
#define typedef_dsp_DigitalUpConverter_2

typedef struct mdMkuKadDt43qqDHvPcS7ffF dsp_DigitalUpConverter_2;

#endif                                 /*typedef_dsp_DigitalUpConverter_2*/

#ifndef typedef_InstanceStruct_FztNqarQ80TA694cfZ23r
#define typedef_InstanceStruct_FztNqarQ80TA694cfZ23r

typedef struct {
  dspcodegen_FIRInterpolator gobj_11;
  dspcodegen_FIRInterpolator gobj_10;
  dsp_private_UpConverterFilterDesigner_2 gobj_9;
  dsp_private_UpConverterFilterDesigner_2 gobj_8;
  dsp_private_UpConverterFilterDesigner_2 gobj_7;
  dsp_private_UpConverterFilterDesigner_2 gobj_6;
  dspcodegen_SineWave gobj_5;
  dspcodegen_SineWave gobj_4;
  dspcodegen_FIRInterpolator_2 gobj_3;
  dspcodegen_FIRInterpolator_2 gobj_2;
  dspcodegen_FIRInterpolator_1 gobj_1;
  dspcodegen_FIRInterpolator_1 gobj_0;
  SimStruct *S;
  dsp_DigitalUpConverter_2 sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  boolean_T c_isInitialized;
  boolean_T d_isInitialized;
  creal_T s3[250000];
  creal_T w[250000];
  real_T varargout_1[250000];
  creal_T s2[25000];
  creal_T s1[12500];
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  creal_T (*u0)[6250];
  real_T (*b_y0)[250000];
} InstanceStruct_FztNqarQ80TA694cfZ23r;

#endif                                 /*typedef_InstanceStruct_FztNqarQ80TA694cfZ23r*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_FztNqarQ80TA694cfZ23r(SimStruct *S, int_T method,
  void* data);

#endif
