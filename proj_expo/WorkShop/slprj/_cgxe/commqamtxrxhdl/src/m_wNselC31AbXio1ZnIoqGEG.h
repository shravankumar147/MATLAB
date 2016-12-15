#ifndef __wNselC31AbXio1ZnIoqGEG_h__
#define __wNselC31AbXio1ZnIoqGEG_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_tag_sSowLTsTotFyJ7siSdApBMF
#define struct_tag_sSowLTsTotFyJ7siSdApBMF

struct tag_sSowLTsTotFyJ7siSdApBMF
{
  real_T WordLength;
  real_T FractionLength;
};

#endif                                 /*struct_tag_sSowLTsTotFyJ7siSdApBMF*/

#ifndef typedef_sSowLTsTotFyJ7siSdApBMF
#define typedef_sSowLTsTotFyJ7siSdApBMF

typedef struct tag_sSowLTsTotFyJ7siSdApBMF sSowLTsTotFyJ7siSdApBMF;

#endif                                 /*typedef_sSowLTsTotFyJ7siSdApBMF*/

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
  char_T f2;
  real_T f3;
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
  char_T f2[11];
  char_T f3[5];
  char_T f4[4];
  char_T f5[6];
  char_T f6[5];
  char_T f7[6];
  char_T f8[5];
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef typedef_d_struct_T
#define typedef_d_struct_T

typedef struct {
  char_T f0[6];
} d_struct_T;

#endif                                 /*typedef_d_struct_T*/

#ifndef struct_tag_s6xF7vwkgwLiNewwIizhAIF
#define struct_tag_s6xF7vwkgwLiNewwIizhAIF

struct tag_s6xF7vwkgwLiNewwIizhAIF
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  int32_T xPipeline[7];
  int32_T yPipeline[7];
  int32_T zPipeline[7];
  boolean_T validPipeline[8];
  uint8_T pQuadrantIn[7];
  uint8_T pXYReversed[7];
  int32_T pQuadrantOut;
  int32_T pPipeout;
  int32_T pXAbsolute;
  int32_T pYAbsolute;
};

#endif                                 /*struct_tag_s6xF7vwkgwLiNewwIizhAIF*/

#ifndef typedef_dsp_HDLComplexToMagnitudeAngle
#define typedef_dsp_HDLComplexToMagnitudeAngle

typedef struct tag_s6xF7vwkgwLiNewwIizhAIF dsp_HDLComplexToMagnitudeAngle;

#endif                                 /*typedef_dsp_HDLComplexToMagnitudeAngle*/

#ifndef typedef_InstanceStruct_wNselC31AbXio1ZnIoqGEG
#define typedef_InstanceStruct_wNselC31AbXio1ZnIoqGEG

typedef struct {
  SimStruct *S;
  dsp_HDLComplexToMagnitudeAngle sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  cint16_T *u0;
  boolean_T *u1;
  int32_T *b_y0;
  boolean_T *b_y1;
  int32_T (*xPipeline)[7];
  int32_T (*yPipeline)[7];
  int32_T (*zPipeline)[7];
  boolean_T (*validPipeline)[8];
} InstanceStruct_wNselC31AbXio1ZnIoqGEG;

#endif                                 /*typedef_InstanceStruct_wNselC31AbXio1ZnIoqGEG*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_wNselC31AbXio1ZnIoqGEG(SimStruct *S, int_T method,
  void* data);

#endif
