#ifndef __J7aWBDqExLqAyGE5Qpg8zG_h__
#define __J7aWBDqExLqAyGE5Qpg8zG_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  char_T f0[7];
} struct_T;

#endif                                 /*typedef_struct_T*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  char_T f0[7];
  char_T f1[6];
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  char_T f0[7];
  char_T f1[6];
  char_T f2;
  real_T f3;
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef typedef_d_struct_T
#define typedef_d_struct_T

typedef struct {
  char_T f0[5];
  char_T f1[6];
  char_T f2[6];
  char_T f3[6];
  char_T f4[4];
  char_T f5[5];
  char_T f6[5];
  char_T f7[5];
  char_T f8[11];
  char_T f9[6];
  char_T f10[6];
} d_struct_T;

#endif                                 /*typedef_d_struct_T*/

#ifndef typedef_e_struct_T
#define typedef_e_struct_T

typedef struct {
  char_T f0[6];
} e_struct_T;

#endif                                 /*typedef_e_struct_T*/

#ifndef struct_tag_splVuPVv6X2LV1eC7GoBMdB
#define struct_tag_splVuPVv6X2LV1eC7GoBMdB

struct tag_splVuPVv6X2LV1eC7GoBMdB
{
  int32_T isInitialized;
  int16_T acc;
  int16_T phaseReg[6];
  boolean_T validReg[6];
  int16_T sineReg[6];
  int16_T cosReg[6];
  real_T pn_reg[19];
  int16_T phaseInc;
  int16_T phaseOff;
  int16_T tmpAcc;
  int16_T tmpAcc2;
  uint8_T dither;
  int16_T phaseQuant;
};

#endif                                 /*struct_tag_splVuPVv6X2LV1eC7GoBMdB*/

#ifndef typedef_dsp_HDLNCO
#define typedef_dsp_HDLNCO

typedef struct tag_splVuPVv6X2LV1eC7GoBMdB dsp_HDLNCO;

#endif                                 /*typedef_dsp_HDLNCO*/

#ifndef typedef_InstanceStruct_J7aWBDqExLqAyGE5Qpg8zG
#define typedef_InstanceStruct_J7aWBDqExLqAyGE5Qpg8zG

typedef struct {
  SimStruct *S;
  dsp_HDLNCO sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  int16_T *u0;
  boolean_T *u1;
  cint16_T *b_y0;
  boolean_T *b_y1;
  int16_T *acc;
  int16_T (*phaseReg)[6];
  boolean_T (*validReg)[6];
  int16_T (*sineReg)[6];
  int16_T (*cosReg)[6];
  real_T (*pn_reg)[19];
} InstanceStruct_J7aWBDqExLqAyGE5Qpg8zG;

#endif                                 /*typedef_InstanceStruct_J7aWBDqExLqAyGE5Qpg8zG*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_J7aWBDqExLqAyGE5Qpg8zG(SimStruct *S, int_T method,
  void* data);

#endif
