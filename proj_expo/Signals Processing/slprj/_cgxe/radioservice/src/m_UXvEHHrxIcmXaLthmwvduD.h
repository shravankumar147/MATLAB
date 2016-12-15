#ifndef __UXvEHHrxIcmXaLthmwvduD_h__
#define __UXvEHHrxIcmXaLthmwvduD_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_mdfa6cf496ecdea6a4e6ab835e35eec828
#define struct_mdfa6cf496ecdea6a4e6ab835e35eec828

struct mdfa6cf496ecdea6a4e6ab835e35eec828
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  real_T W1_Sums;
  int32_T W2_CoeffIdx;
  real_T W3_StatesBuff[60];
  int32_T W4_TapDelayIndex;
  int32_T W5_PrevNumChan;
  real_T P0_IC;
  real_T P1_FILT[65];
  real_T O0_Y0[1250];
};

#endif                                 /*struct_mdfa6cf496ecdea6a4e6ab835e35eec828*/

#ifndef typedef_dsp_FIRDecimator_0
#define typedef_dsp_FIRDecimator_0

typedef struct mdfa6cf496ecdea6a4e6ab835e35eec828 dsp_FIRDecimator_0;

#endif                                 /*typedef_dsp_FIRDecimator_0*/

#ifndef struct_mdcfb42f7845c6d2c68f5daa173dcff461
#define struct_mdcfb42f7845c6d2c68f5daa173dcff461

struct mdcfb42f7845c6d2c68f5daa173dcff461
{
  int32_T S0_isInitialized;
  real_T W0_InBuf[30];
  int32_T W1_InBufIdx;
  real_T P0_FILTER[120];
  int32_T P1_PolyphaseSelector[4];
  int32_T P2_StartIdx[5];
  int32_T P3_StopIdx[5];
};

#endif                                 /*struct_mdcfb42f7845c6d2c68f5daa173dcff461*/

#ifndef typedef_dsp_FIRRateConverter_1
#define typedef_dsp_FIRRateConverter_1

typedef struct mdcfb42f7845c6d2c68f5daa173dcff461 dsp_FIRRateConverter_1;

#endif                                 /*typedef_dsp_FIRRateConverter_1*/

#ifndef struct_mdYwvKKl4dpVY9fQg7bcJvu
#define struct_mdYwvKKl4dpVY9fQg7bcJvu

struct mdYwvKKl4dpVY9fQg7bcJvu
{
  int32_T isInitialized;
  dsp_FIRRateConverter_1 cSFunObject;
};

#endif                                 /*struct_mdYwvKKl4dpVY9fQg7bcJvu*/

#ifndef typedef_dspcodegen_FIRRateConverter
#define typedef_dspcodegen_FIRRateConverter

typedef struct mdYwvKKl4dpVY9fQg7bcJvu dspcodegen_FIRRateConverter;

#endif                                 /*typedef_dspcodegen_FIRRateConverter*/

#ifndef struct_md0puwNBqKRc3byp5zp9I57E
#define struct_md0puwNBqKRc3byp5zp9I57E

struct md0puwNBqKRc3byp5zp9I57E
{
  int32_T isInitialized;
  dsp_FIRDecimator_0 cSFunObject;
};

#endif                                 /*struct_md0puwNBqKRc3byp5zp9I57E*/

#ifndef typedef_dspcodegen_FIRDecimator
#define typedef_dspcodegen_FIRDecimator

typedef struct md0puwNBqKRc3byp5zp9I57E dspcodegen_FIRDecimator;

#endif                                 /*typedef_dspcodegen_FIRDecimator*/

#ifndef struct_mdZDhCHjW34EnUI9ITgFAU1C
#define struct_mdZDhCHjW34EnUI9ITgFAU1C

struct mdZDhCHjW34EnUI9ITgFAU1C
{
  int32_T isInitialized;
  uint32_T inputVarSize1[8];
  real_T NumChannels;
  dspcodegen_FIRDecimator *filt1;
  dspcodegen_FIRRateConverter *filt2;
};

#endif                                 /*struct_mdZDhCHjW34EnUI9ITgFAU1C*/

#ifndef typedef_dsp_SampleRateConverter_2
#define typedef_dsp_SampleRateConverter_2

typedef struct mdZDhCHjW34EnUI9ITgFAU1C dsp_SampleRateConverter_2;

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

#ifndef struct_tag_sm9XrAlYT8l6o5sKwsJWJqE
#define struct_tag_sm9XrAlYT8l6o5sKwsJWJqE

struct tag_sm9XrAlYT8l6o5sKwsJWJqE
{
  real_T coeffs1[65];
  real_T rcf1[2];
  real_T coeffs2[119];
  real_T rcf2[2];
};

#endif                                 /*struct_tag_sm9XrAlYT8l6o5sKwsJWJqE*/

#ifndef typedef_sm9XrAlYT8l6o5sKwsJWJqE
#define typedef_sm9XrAlYT8l6o5sKwsJWJqE

typedef struct tag_sm9XrAlYT8l6o5sKwsJWJqE sm9XrAlYT8l6o5sKwsJWJqE;

#endif                                 /*typedef_sm9XrAlYT8l6o5sKwsJWJqE*/

#ifndef typedef_InstanceStruct_UXvEHHrxIcmXaLthmwvduD
#define typedef_InstanceStruct_UXvEHHrxIcmXaLthmwvduD

typedef struct {
  dspcodegen_FIRRateConverter gobj_3;
  dspcodegen_FIRRateConverter gobj_2;
  dspcodegen_FIRDecimator gobj_1;
  dspcodegen_FIRDecimator gobj_0;
  SimStruct *S;
  dsp_SampleRateConverter_2 sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T (*u0)[6250];
  real_T (*b_y0)[1000];
} InstanceStruct_UXvEHHrxIcmXaLthmwvduD;

#endif                                 /*typedef_InstanceStruct_UXvEHHrxIcmXaLthmwvduD*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_UXvEHHrxIcmXaLthmwvduD(SimStruct *S, int_T method,
  void* data);

#endif
