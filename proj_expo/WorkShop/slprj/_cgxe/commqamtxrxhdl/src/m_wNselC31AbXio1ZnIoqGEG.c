/* Include files */

#include "modelInterface.h"
#include "m_wNselC31AbXio1ZnIoqGEG.h"

/* Type Definitions */

/* Named Constants */
#define NumIterations                  (5.0)
#define ScaleOutput                    (true)

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static const mxArray *c_eml_mx;
static const mxArray *d_eml_mx;
static const mxArray *e_eml_mx;
static const mxArray *f_eml_mx;
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemProp",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"
};

static emlrtMCInfo b_emlrtMCI = { 14, 25, "warning",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 14, 9, "warning",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo d_emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo e_emlrtMCI = { -1, -1, "", "" };

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_validPipeline, const char_T *identifier,
  boolean_T y[8]);
static void b_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  boolean_T y[8]);
static void c_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_xPipeline, const char_T *identifier, int32_T
  y[7]);
static void d_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7]);
static void e_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_zPipeline, const char_T *identifier, int32_T
  y[7]);
static void f_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7]);
static void g_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier,
  dsp_HDLComplexToMagnitudeAngle *y);
static void h_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  dsp_HDLComplexToMagnitudeAngle *y);
static int32_T i_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T j_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void k_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7]);
static void l_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, uint8_T
  y[7]);
static void m_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, uint8_T
  y[7]);
static int32_T n_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T o_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T p_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *st);
static const mxArray *message(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b, emlrtMCInfo *location);
static const mxArray *fimath(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, char * c, char * d, char * e, char * f, char * g,
  char * h, char * i, char * j, char * k, char * l, real_T m, char * n, real_T o,
  char * p, real_T q, char * r, real_T s, char * t, real_T u, char * v, real_T w,
  char * x, real_T y, char * ab, char * bb, char * cb, real_T db, char * eb,
  real_T fb, char * gb, real_T hb, char * ib, real_T jb, char * kb, real_T lb,
  char * mb, real_T nb, char * ob, real_T pb, char * qb, boolean_T rb,
  emlrtMCInfo *location);
static const mxArray *numerictype(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, real_T c, char * d, real_T e, char * f, real_T g,
  char * h, real_T i, char * j, real_T k, emlrtMCInfo *location);
static const mxArray *b_numerictype(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, boolean_T c, char * d, char * e, char * f, real_T g,
  char * h, real_T i, char * j, real_T k, char * l, real_T m, char * n, real_T o,
  emlrtMCInfo *location);
static void q_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId,
  boolean_T ret[8]);
static void r_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7]);
static void s_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7]);
static int32_T t_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static boolean_T u_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7]);
static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint8_T ret[7]);
static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint8_T ret[7]);
static int32_T y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static int32_T ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId);
static void init_simulink_io_address(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance)
{
  boolean_T flag;
  dsp_HDLComplexToMagnitudeAngle *obj;
  int32_T i0;
  static char_T cv0[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 51 };

  const mxArray *m0;
  static char_T cv1[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 5 };

  static char_T cv2[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T c_u[44];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 44 };

  init_simulink_io_address(moduleInstance);
  emlrtAssignP(&f_eml_mx, numerictype(moduleInstance, "WordLength", 18.0,
    "FractionLength", 13.0, "BinaryPoint", 13.0, "Slope", 0.0001220703125,
    "FixedExponent", -13.0, &e_emlrtMCI));
  emlrtAssignP(&e_eml_mx, b_numerictype(moduleInstance, "SignednessBool", false,
    "Signedness", "Unsigned", "WordLength", 1.0, "FractionLength", 0.0,
    "BinaryPoint", 0.0, "Slope", 1.0, "FixedExponent", 0.0, &e_emlrtMCI));
  emlrtAssignP(&d_eml_mx, b_numerictype(moduleInstance, "SignednessBool", false,
    "Signedness", "Unsigned", "WordLength", 2.0, "FractionLength", 0.0,
    "BinaryPoint", 0.0, "Slope", 1.0, "FixedExponent", 0.0, &e_emlrtMCI));
  emlrtAssignP(&c_eml_mx, numerictype(moduleInstance, "WordLength", 19.0,
    "FractionLength", 18.0, "BinaryPoint", 18.0, "Slope", 3.814697265625E-6,
    "FixedExponent", -18.0, &e_emlrtMCI));
  emlrtAssignP(&b_eml_mx, numerictype(moduleInstance, "WordLength", 17.0,
    "FractionLength", 13.0, "BinaryPoint", 13.0, "Slope", 0.0001220703125,
    "FixedExponent", -13.0, &e_emlrtMCI));
  emlrtAssignP(&eml_mx, fimath(moduleInstance, "RoundMode", "nearest",
    "RoundingMethod", "Nearest", "OverflowMode", "saturate", "OverflowAction",
    "Saturate", "ProductMode", "FullPrecision", "ProductWordLength", 32.0,
    "MaxProductWordLength", 65535.0, "ProductFractionLength", 30.0,
    "ProductFixedExponent", -30.0, "ProductSlope", 9.3132257461547852E-10,
    "ProductSlopeAdjustmentFactor", 1.0, "ProductBias", 0.0, "SumMode",
    "FullPrecision", "SumWordLength", 32.0, "MaxSumWordLength", 65535.0,
    "SumFractionLength", 30.0, "SumFixedExponent", -30.0, "SumSlope",
    9.3132257461547852E-10, "SumSlopeAdjustmentFactor", 1.0, "SumBias", 0.0,
    "CastBeforeSum", true, &e_emlrtMCI));
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(moduleInstance, message(moduleInstance, y, b_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  obj->isInitialized = 1;
  for (i0 = 0; i0 < 7; i0++) {
    obj->xPipeline[i0] = 0;
  }

  for (i0 = 0; i0 < 7; i0++) {
    obj->yPipeline[i0] = 0;
  }

  obj->pXAbsolute = 0;
  obj->pYAbsolute = 0;
  for (i0 = 0; i0 < 7; i0++) {
    obj->zPipeline[i0] = 0;
  }

  obj->pQuadrantOut = 0;
  obj->pPipeout = 0;
  for (i0 = 0; i0 < 7; i0++) {
    obj->pXYReversed[i0] = 0U;
  }

  for (i0 = 0; i0 < 8; i0++) {
    obj->validPipeline[i0] = false;
  }

  for (i0 = 0; i0 < 7; i0++) {
    obj->pQuadrantIn[i0] = 0U;
  }

  if (obj->TunablePropsChanged) {
    for (i0 = 0; i0 < 44; i0++) {
      c_u[i0] = cv2[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    error(moduleInstance, b_message(moduleInstance, c_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  obj->TunablePropsChanged = false;
  for (i0 = 0; i0 < 7; i0++) {
    (*moduleInstance->xPipeline)[i0] = moduleInstance->sysobj.xPipeline[i0];
  }

  for (i0 = 0; i0 < 7; i0++) {
    (*moduleInstance->yPipeline)[i0] = moduleInstance->sysobj.yPipeline[i0];
  }

  for (i0 = 0; i0 < 7; i0++) {
    (*moduleInstance->zPipeline)[i0] = moduleInstance->sysobj.zPipeline[i0];
  }

  for (i0 = 0; i0 < 8; i0++) {
    (*moduleInstance->validPipeline)[i0] = moduleInstance->
      sysobj.validPipeline[i0];
  }
}

static void cgxe_mdl_initialize(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance)
{
  boolean_T tunablePropChangedBeforeResetImpl;
  dsp_HDLComplexToMagnitudeAngle *obj;
  int32_T i1;
  static char_T cv3[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 45 };

  const mxArray *m1;
  static char_T cv4[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 45 };

  static char_T cv5[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv6[2] = { 1, 5 };

  static char_T cv6[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T e_u[44];
  const mxArray *e_y;
  static const int32_T iv7[2] = { 1, 44 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv3[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 8; i1++) {
      b_u[i1] = cv4[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(moduleInstance, message(moduleInstance, y, b_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = (obj->isInitialized == 1);
  if (tunablePropChangedBeforeResetImpl) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i1 = 0; i1 < 45; i1++) {
        c_u[i1] = cv3[i1];
      }

      c_y = NULL;
      m1 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &c_u
        [0]);
      emlrtAssign(&c_y, m1);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv5[i1];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &d_u[0]);
      emlrtAssign(&d_y, m1);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
    if (obj->isInitialized == 1) {
      for (i1 = 0; i1 < 7; i1++) {
        obj->xPipeline[i1] = 0;
      }

      for (i1 = 0; i1 < 7; i1++) {
        obj->yPipeline[i1] = 0;
      }

      for (i1 = 0; i1 < 7; i1++) {
        obj->zPipeline[i1] = 0;
      }

      for (i1 = 0; i1 < 8; i1++) {
        obj->validPipeline[i1] = false;
      }

      for (i1 = 0; i1 < 7; i1++) {
        obj->pQuadrantIn[i1] = 0U;
      }

      for (i1 = 0; i1 < 7; i1++) {
        obj->pXYReversed[i1] = 0U;
      }

      obj->pQuadrantOut = 0;
      obj->pPipeout = 0;
      obj->pXAbsolute = 0;
      obj->pYAbsolute = 0;
    }

    if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
        obj->TunablePropsChanged) {
      for (i1 = 0; i1 < 44; i1++) {
        e_u[i1] = cv6[i1];
      }

      e_y = NULL;
      m1 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m1, &e_u
        [0]);
      emlrtAssign(&e_y, m1);
      error(moduleInstance, b_message(moduleInstance, e_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }
  }

  for (i1 = 0; i1 < 7; i1++) {
    (*moduleInstance->xPipeline)[i1] = moduleInstance->sysobj.xPipeline[i1];
  }

  for (i1 = 0; i1 < 7; i1++) {
    (*moduleInstance->yPipeline)[i1] = moduleInstance->sysobj.yPipeline[i1];
  }

  for (i1 = 0; i1 < 7; i1++) {
    (*moduleInstance->zPipeline)[i1] = moduleInstance->sysobj.zPipeline[i1];
  }

  for (i1 = 0; i1 < 8; i1++) {
    (*moduleInstance->validPipeline)[i1] = moduleInstance->
      sysobj.validPipeline[i1];
  }
}

static void cgxe_mdl_outputs(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance)
{
  int32_T i2;
  boolean_T flag;
  dsp_HDLComplexToMagnitudeAngle *obj;
  static char_T cv7[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m2;
  static char_T cv8[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 4 };

  static char_T cv9[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 51 };

  static char_T cv10[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 5 };

  static char_T cv11[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T e_u[44];
  const mxArray *e_y;
  static const int32_T iv12[2] = { 1, 44 };

  uint8_T b_obj[6];
  boolean_T c_obj[7];
  int32_T d_obj[6];
  int32_T c;
  int32_T a0;
  int32_T ii;
  int32_T b_c;
  int32_T b_a0;
  int32_T c_c;
  int32_T c_a0;
  int32_T d_c;
  static uint16_T uv0[5] = { 38688U, 20442U, 10377U, 5208U, 2607U };

  int32_T d_a0;
  int32_T i3;
  int32_T e_a0;
  int32_T e_c;
  int32_T f_a0;
  int32_T f_c;
  int32_T g_a0;
  int32_T i4;
  uint8_T h_a0;
  int32_T g_c;
  int32_T h_c;
  int32_T i_c;
  char_T f_u[44];
  const mxArray *f_y;
  static const int32_T iv13[2] = { 1, 44 };

  for (i2 = 0; i2 < 7; i2++) {
    moduleInstance->sysobj.xPipeline[i2] = (*moduleInstance->xPipeline)[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    moduleInstance->sysobj.yPipeline[i2] = (*moduleInstance->yPipeline)[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    moduleInstance->sysobj.zPipeline[i2] = (*moduleInstance->zPipeline)[i2];
  }

  for (i2 = 0; i2 < 8; i2++) {
    moduleInstance->sysobj.validPipeline[i2] = (*moduleInstance->validPipeline)
      [i2];
  }

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv7[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 4; i2++) {
      b_u[i2] = cv8[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(moduleInstance, message(moduleInstance, y, b_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (i2 = 0; i2 < 51; i2++) {
        c_u[i2] = cv9[i2];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv10);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m2, &c_u
        [0]);
      emlrtAssign(&c_y, m2);
      for (i2 = 0; i2 < 5; i2++) {
        d_u[i2] = cv10[i2];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    obj->isInitialized = 1;
    for (i2 = 0; i2 < 7; i2++) {
      obj->xPipeline[i2] = 0;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->yPipeline[i2] = 0;
    }

    obj->pXAbsolute = 0;
    obj->pYAbsolute = 0;
    for (i2 = 0; i2 < 7; i2++) {
      obj->zPipeline[i2] = 0;
    }

    obj->pQuadrantOut = 0;
    obj->pPipeout = 0;
    for (i2 = 0; i2 < 7; i2++) {
      obj->pXYReversed[i2] = 0U;
    }

    for (i2 = 0; i2 < 8; i2++) {
      obj->validPipeline[i2] = false;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->pQuadrantIn[i2] = 0U;
    }

    if (obj->TunablePropsChanged) {
      for (i2 = 0; i2 < 44; i2++) {
        e_u[i2] = cv11[i2];
      }

      e_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m2, &e_u
        [0]);
      emlrtAssign(&e_y, m2);
      error(moduleInstance, b_message(moduleInstance, e_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    obj->TunablePropsChanged = false;
    for (i2 = 0; i2 < 7; i2++) {
      obj->xPipeline[i2] = 0;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->yPipeline[i2] = 0;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->zPipeline[i2] = 0;
    }

    for (i2 = 0; i2 < 8; i2++) {
      obj->validPipeline[i2] = false;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->pQuadrantIn[i2] = 0U;
    }

    for (i2 = 0; i2 < 7; i2++) {
      obj->pXYReversed[i2] = 0U;
    }

    obj->pQuadrantOut = 0;
    obj->pPipeout = 0;
    obj->pXAbsolute = 0;
    obj->pYAbsolute = 0;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  obj->validPipeline[0] = *moduleInstance->u1;
  *moduleInstance->b_y0 = obj->pQuadrantOut;
  *moduleInstance->b_y1 = obj->validPipeline[7];
  for (i2 = 0; i2 < 6; i2++) {
    b_obj[i2] = obj->pQuadrantIn[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->pQuadrantIn[1 + i2] = b_obj[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    b_obj[i2] = obj->pXYReversed[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->pXYReversed[1 + i2] = b_obj[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    c_obj[i2] = obj->validPipeline[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    obj->validPipeline[1 + i2] = c_obj[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    d_obj[i2] = obj->xPipeline[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->xPipeline[1 + i2] = d_obj[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    d_obj[i2] = obj->yPipeline[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->yPipeline[1 + i2] = d_obj[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    d_obj[i2] = obj->zPipeline[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->zPipeline[1 + i2] = d_obj[i2];
  }

  i2 = moduleInstance->u0->re;
  if ((i2 & 131072) != 0) {
    obj->pXAbsolute = i2 | -131072;
  } else {
    obj->pXAbsolute = i2 & 131071;
  }

  c = obj->pXAbsolute;
  i2 = -c;
  if (c < 0) {
    if ((i2 & 131072) != 0) {
      obj->pXAbsolute = i2 | -131072;
    } else {
      obj->pXAbsolute = i2 & 131071;
    }
  } else {
    obj->pXAbsolute = c;
  }

  i2 = moduleInstance->u0->im;
  if ((i2 & 131072) != 0) {
    obj->pYAbsolute = i2 | -131072;
  } else {
    obj->pYAbsolute = i2 & 131071;
  }

  c = obj->pYAbsolute;
  i2 = -c;
  if (c < 0) {
    if ((i2 & 131072) != 0) {
      obj->pYAbsolute = i2 | -131072;
    } else {
      obj->pYAbsolute = i2 & 131071;
    }
  } else {
    obj->pYAbsolute = c;
  }

  if ((moduleInstance->u0->re < 0) && (moduleInstance->u0->im < 0)) {
    obj->pQuadrantIn[0] = 2U;
  } else if ((moduleInstance->u0->re >= 0) && (moduleInstance->u0->im < 0)) {
    obj->pQuadrantIn[0] = 1U;
  } else if ((moduleInstance->u0->re < 0) && (moduleInstance->u0->im >= 0)) {
    obj->pQuadrantIn[0] = 3U;
  } else if ((moduleInstance->u0->re >= 0) && (moduleInstance->u0->im >= 0)) {
    obj->pQuadrantIn[0] = 0U;
  } else {
    obj->pQuadrantIn[0] = 0U;
  }

  a0 = obj->pXAbsolute;
  c = obj->pYAbsolute;
  if (a0 > c) {
    obj->pXYReversed[0] = 0U;
    i2 = obj->pXAbsolute;
    if ((i2 & 65536) != 0) {
      obj->xPipeline[0] = i2 | -65536;
    } else {
      obj->xPipeline[0] = i2 & 65535;
    }

    i2 = obj->pYAbsolute;
    if ((i2 & 65536) != 0) {
      obj->yPipeline[0] = i2 | -65536;
    } else {
      obj->yPipeline[0] = i2 & 65535;
    }
  } else {
    obj->pXYReversed[0] = 1U;
    i2 = obj->pYAbsolute;
    if ((i2 & 65536) != 0) {
      obj->xPipeline[0] = i2 | -65536;
    } else {
      obj->xPipeline[0] = i2 & 65535;
    }

    i2 = obj->pXAbsolute;
    if ((i2 & 65536) != 0) {
      obj->yPipeline[0] = i2 | -65536;
    } else {
      obj->yPipeline[0] = i2 & 65535;
    }
  }

  obj->zPipeline[0] = 0;
  for (ii = 0; ii < 5; ii++) {
    c = obj->yPipeline[ii + 1];
    i2 = c >> (ii + 1);
    if ((i2 & 65536) != 0) {
      b_c = i2 | -65536;
    } else {
      b_c = i2 & 65535;
    }

    c = obj->xPipeline[ii + 1];
    i2 = c >> (ii + 1);
    if ((i2 & 65536) != 0) {
      c = i2 | -65536;
    } else {
      c = i2 & 65535;
    }

    a0 = obj->yPipeline[ii + 1];
    if (a0 < 0) {
      a0 = obj->xPipeline[ii + 1];
      if ((a0 & 131072) != 0) {
        b_a0 = a0 | -131072;
      } else {
        b_a0 = a0 & 131071;
      }

      if ((b_c & 131072) != 0) {
        c_c = b_c | -131072;
      } else {
        c_c = b_c & 131071;
      }

      i2 = b_a0 - c_c;
      if ((i2 & 131072) != 0) {
        i2 |= -131072;
      } else {
        i2 &= 131071;
      }

      if ((i2 & 65536) != 0) {
        obj->xPipeline[ii + 1] = i2 | -65536;
      } else {
        obj->xPipeline[ii + 1] = i2 & 65535;
      }

      a0 = obj->yPipeline[ii + 1];
      if ((a0 & 131072) != 0) {
        c_a0 = a0 | -131072;
      } else {
        c_a0 = a0 & 131071;
      }

      if ((c & 131072) != 0) {
        d_c = c | -131072;
      } else {
        d_c = c & 131071;
      }

      i2 = c_a0 + d_c;
      if ((i2 & 131072) != 0) {
        i2 |= -131072;
      } else {
        i2 &= 131071;
      }

      if ((i2 & 65536) != 0) {
        obj->yPipeline[ii + 1] = i2 | -65536;
      } else {
        obj->yPipeline[ii + 1] = i2 & 65535;
      }

      a0 = obj->zPipeline[ii + 1];
      i2 = uv0[ii];
      if ((a0 & 524288) != 0) {
        d_a0 = a0 | -524288;
      } else {
        d_a0 = a0 & 524287;
      }

      if ((i2 & 524288) != 0) {
        i3 = i2 | -524288;
      } else {
        i3 = i2;
      }

      i2 = d_a0 - i3;
      if ((i2 & 524288) != 0) {
        i2 |= -524288;
      } else {
        i2 &= 524287;
      }

      if ((i2 & 262144) != 0) {
        obj->zPipeline[ii + 1] = i2 | -262144;
      } else {
        obj->zPipeline[ii + 1] = i2 & 262143;
      }
    } else {
      a0 = obj->xPipeline[ii + 1];
      if ((a0 & 131072) != 0) {
        e_a0 = a0 | -131072;
      } else {
        e_a0 = a0 & 131071;
      }

      if ((b_c & 131072) != 0) {
        e_c = b_c | -131072;
      } else {
        e_c = b_c & 131071;
      }

      i2 = e_a0 + e_c;
      if ((i2 & 131072) != 0) {
        i2 |= -131072;
      } else {
        i2 &= 131071;
      }

      if ((i2 & 65536) != 0) {
        obj->xPipeline[ii + 1] = i2 | -65536;
      } else {
        obj->xPipeline[ii + 1] = i2 & 65535;
      }

      a0 = obj->yPipeline[ii + 1];
      if ((a0 & 131072) != 0) {
        f_a0 = a0 | -131072;
      } else {
        f_a0 = a0 & 131071;
      }

      if ((c & 131072) != 0) {
        f_c = c | -131072;
      } else {
        f_c = c & 131071;
      }

      i2 = f_a0 - f_c;
      if ((i2 & 131072) != 0) {
        i2 |= -131072;
      } else {
        i2 &= 131071;
      }

      if ((i2 & 65536) != 0) {
        obj->yPipeline[ii + 1] = i2 | -65536;
      } else {
        obj->yPipeline[ii + 1] = i2 & 65535;
      }

      a0 = obj->zPipeline[ii + 1];
      i2 = uv0[ii];
      if ((a0 & 524288) != 0) {
        g_a0 = a0 | -524288;
      } else {
        g_a0 = a0 & 524287;
      }

      if ((i2 & 524288) != 0) {
        i4 = i2 | -524288;
      } else {
        i4 = i2;
      }

      i2 = g_a0 + i4;
      if ((i2 & 524288) != 0) {
        i2 |= -524288;
      } else {
        i2 &= 524287;
      }

      if ((i2 & 262144) != 0) {
        obj->zPipeline[ii + 1] = i2 | -262144;
      } else {
        obj->zPipeline[ii + 1] = i2 & 262143;
      }
    }
  }

  obj->pPipeout = obj->zPipeline[6];
  h_a0 = obj->pXYReversed[6];
  if (h_a0 == 1) {
    c = obj->pPipeout;
    if ((c & 524288) != 0) {
      g_c = c | -524288;
    } else {
      g_c = c & 524287;
    }

    i2 = 131072 - g_c;
    if ((i2 & 524288) != 0) {
      i2 |= -524288;
    } else {
      i2 &= 524287;
    }

    if ((i2 & 262144) != 0) {
      obj->pQuadrantOut = i2 | -262144;
    } else {
      obj->pQuadrantOut = i2 & 262143;
    }
  } else {
    obj->pQuadrantOut = obj->pPipeout;
  }

  h_a0 = obj->pQuadrantIn[6];
  if (h_a0 == 1) {
    c = obj->pQuadrantOut;
    i2 = -c;
    if ((i2 & 262144) != 0) {
      obj->pQuadrantOut = i2 | -262144;
    } else {
      obj->pQuadrantOut = i2 & 262143;
    }
  } else {
    h_a0 = obj->pQuadrantIn[6];
    if (h_a0 == 2) {
      c = obj->pQuadrantOut;
      if ((c & 524288) != 0) {
        h_c = c | -524288;
      } else {
        h_c = c & 524287;
      }

      i2 = -262144 + h_c;
      if ((i2 & 524288) != 0) {
        i2 |= -524288;
      } else {
        i2 &= 524287;
      }

      if ((i2 & 262144) != 0) {
        obj->pQuadrantOut = i2 | -262144;
      } else {
        obj->pQuadrantOut = i2 & 262143;
      }
    } else {
      h_a0 = obj->pQuadrantIn[6];
      if (h_a0 == 3) {
        c = obj->pQuadrantOut;
        if ((c & 524288) != 0) {
          i_c = c | -524288;
        } else {
          i_c = c & 524287;
        }

        i2 = 262143 - i_c;
        if ((i2 & 524288) != 0) {
          i2 |= -524288;
        } else {
          i2 &= 524287;
        }

        if ((i2 & 262144) != 0) {
          obj->pQuadrantOut = i2 | -262144;
        } else {
          obj->pQuadrantOut = i2 & 262143;
        }
      }
    }
  }

  if (!obj->validPipeline[7]) {
    obj->zPipeline[6] = 0;
    obj->pQuadrantOut = 0;
  }

  if (obj->TunablePropsChanged) {
    for (i2 = 0; i2 < 44; i2++) {
      f_u[i2] = cv11[i2];
    }

    f_y = NULL;
    m2 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m2, &f_u[0]);
    emlrtAssign(&f_y, m2);
    error(moduleInstance, b_message(moduleInstance, f_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  for (i2 = 0; i2 < 7; i2++) {
    (*moduleInstance->xPipeline)[i2] = moduleInstance->sysobj.xPipeline[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    (*moduleInstance->yPipeline)[i2] = moduleInstance->sysobj.yPipeline[i2];
  }

  for (i2 = 0; i2 < 7; i2++) {
    (*moduleInstance->zPipeline)[i2] = moduleInstance->sysobj.zPipeline[i2];
  }

  for (i2 = 0; i2 < 8; i2++) {
    (*moduleInstance->validPipeline)[i2] = moduleInstance->
      sysobj.validPipeline[i2];
  }
}

static void cgxe_mdl_update(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance)
{
  int32_T i5;
  for (i5 = 0; i5 < 7; i5++) {
    (*moduleInstance->xPipeline)[i5] = moduleInstance->sysobj.xPipeline[i5];
    (*moduleInstance->yPipeline)[i5] = moduleInstance->sysobj.yPipeline[i5];
    (*moduleInstance->zPipeline)[i5] = moduleInstance->sysobj.zPipeline[i5];
  }

  for (i5 = 0; i5 < 8; i5++) {
    (*moduleInstance->validPipeline)[i5] = moduleInstance->
      sysobj.validPipeline[i5];
  }
}

static void cgxe_mdl_terminate(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance)
{
  boolean_T flag;
  dsp_HDLComplexToMagnitudeAngle *obj;
  int32_T i6;
  static char_T cv12[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *m3;
  static char_T cv13[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv16[2] = { 1, 45 };

  static char_T cv14[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 7 };

  emlrtDestroyArray(&f_eml_mx);
  emlrtDestroyArray(&e_eml_mx);
  emlrtDestroyArray(&d_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i6 = 0; i6 < 45; i6++) {
      u[i6] = cv12[i6];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i6 = 0; i6 < 8; i6++) {
      b_u[i6] = cv13[i6];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    error(moduleInstance, message(moduleInstance, y, b_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        c_u[i6] = cv12[i6];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &c_u
        [0]);
      emlrtAssign(&c_y, m3);
      for (i6 = 0; i6 < 7; i6++) {
        d_u[i6] = cv14[i6];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  for (i6 = 0; i6 < 7; i6++) {
    (*moduleInstance->xPipeline)[i6] = moduleInstance->sysobj.xPipeline[i6];
  }

  for (i6 = 0; i6 < 7; i6++) {
    (*moduleInstance->yPipeline)[i6] = moduleInstance->sysobj.yPipeline[i6];
  }

  for (i6 = 0; i6 < 7; i6++) {
    (*moduleInstance->zPipeline)[i6] = moduleInstance->sysobj.zPipeline[i6];
  }

  for (i6 = 0; i6 < 8; i6++) {
    (*moduleInstance->validPipeline)[i6] = moduleInstance->
      sysobj.validPipeline[i6];
  }
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  int32_T i;
  boolean_T u[8];
  const mxArray *b_y;
  static const int32_T iv18[1] = { 8 };

  const mxArray *m4;
  const mxArray *c_y;
  void *hoistedGlobal;
  int32_T b_u[7];
  const mxArray *d_y;
  static const int32_T iv19[1] = { 7 };

  int32_T *pData;
  const mxArray *e_y;
  const mxArray *f_y;
  static const int32_T iv20[1] = { 7 };

  const mxArray *g_y;
  const mxArray *h_y;
  static const int32_T iv21[1] = { 7 };

  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  static const int32_T iv22[1] = { 7 };

  const mxArray *n_y;
  const mxArray *o_y;
  static const int32_T iv23[1] = { 7 };

  const mxArray *p_y;
  const mxArray *q_y;
  static const int32_T iv24[1] = { 7 };

  boolean_T c_u[8];
  const mxArray *r_y;
  static const int32_T iv25[1] = { 8 };

  const mxArray *s_y;
  const mxArray *t_y;
  static const int32_T iv26[1] = { 7 };

  uint8_T *b_pData;
  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv27[1] = { 7 };

  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y_y;
  const mxArray *ab_y;
  const mxArray *bb_y;
  const mxArray *cb_y;
  const mxArray *db_y;
  const mxArray *eb_y;
  const mxArray *fb_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(6, 1));
  for (i = 0; i < 8; i++) {
    u[i] = (*moduleInstance->validPipeline)[i];
  }

  b_y = NULL;
  m4 = emlrtCreateLogicalArray(1, iv18);
  emlrtInitLogicalArray(8, m4, (boolean_T *)&u);
  emlrtAssign(&b_y, m4);
  emlrtSetCell(y, 0, b_y);
  c_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  for (i = 0; i < 7; i++) {
    b_u[i] = (*moduleInstance->xPipeline)[i];
  }

  d_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv19, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = b_u[i];
  }

  emlrtAssign(&d_y, m4);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, b_eml_mx,
    "simulinkarray", d_y, false, false));
  emlrtSetCell(y, 1, c_y);
  e_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  for (i = 0; i < 7; i++) {
    b_u[i] = (*moduleInstance->yPipeline)[i];
  }

  f_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv20, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = b_u[i];
  }

  emlrtAssign(&f_y, m4);
  emlrtAssign(&e_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, b_eml_mx,
    "simulinkarray", f_y, false, false));
  emlrtSetCell(y, 2, e_y);
  g_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  for (i = 0; i < 7; i++) {
    b_u[i] = (*moduleInstance->zPipeline)[i];
  }

  h_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv21, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = b_u[i];
  }

  emlrtAssign(&h_y, m4);
  emlrtAssign(&g_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, c_eml_mx,
    "simulinkarray", h_y, false, false));
  emlrtSetCell(y, 3, g_y);
  i_y = NULL;
  emlrtAssign(&i_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  j_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&j_y, m4);
  emlrtAddField(i_y, j_y, "isInitialized", 0);
  k_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&k_y, m4);
  emlrtAddField(i_y, k_y, "TunablePropsChanged", 0);
  l_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  m_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv22, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = moduleInstance->sysobj.xPipeline[i];
  }

  emlrtAssign(&m_y, m4);
  emlrtAssign(&l_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, b_eml_mx,
    "simulinkarray", m_y, false, false));
  emlrtAddField(i_y, l_y, "xPipeline", 0);
  n_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  o_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv23, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = moduleInstance->sysobj.yPipeline[i];
  }

  emlrtAssign(&o_y, m4);
  emlrtAssign(&n_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, b_eml_mx,
    "simulinkarray", o_y, false, false));
  emlrtAddField(i_y, n_y, "yPipeline", 0);
  p_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  q_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv24, mxINT32_CLASS, mxREAL);
  pData = (int32_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    pData[i] = moduleInstance->sysobj.zPipeline[i];
  }

  emlrtAssign(&q_y, m4);
  emlrtAssign(&p_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, c_eml_mx,
    "simulinkarray", q_y, false, false));
  emlrtAddField(i_y, p_y, "zPipeline", 0);
  for (i = 0; i < 8; i++) {
    c_u[i] = moduleInstance->sysobj.validPipeline[i];
  }

  r_y = NULL;
  m4 = emlrtCreateLogicalArray(1, iv25);
  emlrtInitLogicalArray(8, m4, (boolean_T *)&c_u);
  emlrtAssign(&r_y, m4);
  emlrtAddField(i_y, r_y, "validPipeline", 0);
  s_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  t_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv26, mxUINT8_CLASS, mxREAL);
  b_pData = (uint8_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    b_pData[i] = moduleInstance->sysobj.pQuadrantIn[i];
  }

  emlrtAssign(&t_y, m4);
  emlrtAssign(&s_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, d_eml_mx,
    "simulinkarray", t_y, false, false));
  emlrtAddField(i_y, s_y, "pQuadrantIn", 0);
  u_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  v_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv27, mxUINT8_CLASS, mxREAL);
  b_pData = (uint8_T *)mxGetData(m4);
  for (i = 0; i < 7; i++) {
    b_pData[i] = moduleInstance->sysobj.pXYReversed[i];
  }

  emlrtAssign(&v_y, m4);
  emlrtAssign(&u_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, e_eml_mx,
    "simulinkarray", v_y, false, false));
  emlrtAddField(i_y, u_y, "pXYReversed", 0);
  w_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  x_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.pQuadrantOut;
  emlrtAssign(&x_y, m4);
  emlrtAssign(&w_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, c_eml_mx,
    "simulinkarray", x_y, false, false));
  emlrtAddField(i_y, w_y, "pQuadrantOut", 0);
  y_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  ab_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.pPipeout;
  emlrtAssign(&ab_y, m4);
  emlrtAssign(&y_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, c_eml_mx,
    "simulinkarray", ab_y, false, false));
  emlrtAddField(i_y, y_y, "pPipeout", 0);
  bb_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  cb_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.pXAbsolute;
  emlrtAssign(&cb_y, m4);
  emlrtAssign(&bb_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, f_eml_mx,
    "simulinkarray", cb_y, false, false));
  emlrtAddField(i_y, bb_y, "pXAbsolute", 0);
  db_y = NULL;
  hoistedGlobal = moduleInstance->emlrtRootTLSGlobal;
  eb_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.pYAbsolute;
  emlrtAssign(&eb_y, m4);
  emlrtAssign(&db_y, emlrtCreateFIR2013b(hoistedGlobal, eml_mx, f_eml_mx,
    "simulinkarray", eb_y, false, false));
  emlrtAddField(i_y, db_y, "pYAbsolute", 0);
  emlrtSetCell(y, 4, i_y);
  fb_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&fb_y, m4);
  emlrtSetCell(y, 5, fb_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_validPipeline, const char_T *identifier,
  boolean_T y[8])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(moduleInstance, emlrtAlias(b_validPipeline), &thisId, y);
  emlrtDestroyArray(&b_validPipeline);
}

static void b_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  boolean_T y[8])
{
  q_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_xPipeline, const char_T *identifier, int32_T
  y[7])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(moduleInstance, emlrtAlias(b_xPipeline), &thisId, y);
  emlrtDestroyArray(&b_xPipeline);
}

static void d_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7])
{
  static const int32_T dims[1] = { 7 };

  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 1U,
                     dims, eml_mx, b_eml_mx);
  r_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_zPipeline, const char_T *identifier, int32_T
  y[7])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(moduleInstance, emlrtAlias(b_zPipeline), &thisId, y);
  emlrtDestroyArray(&b_zPipeline);
}

static void f_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7])
{
  static const int32_T dims[1] = { 7 };

  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 1U,
                     dims, eml_mx, c_eml_mx);
  s_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier,
  dsp_HDLComplexToMagnitudeAngle *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void h_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  dsp_HDLComplexToMagnitudeAngle *y)
{
  emlrtMsgIdentifier thisId;
  static const int32_T dims = 0;
  static const char * fieldNames[12] = { "isInitialized", "TunablePropsChanged",
    "xPipeline", "yPipeline", "zPipeline", "validPipeline", "pQuadrantIn",
    "pXYReversed", "pQuadrantOut", "pPipeout", "pXAbsolute", "pYAbsolute" };

  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, 12,
    fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = i_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = j_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "xPipeline";
  d_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "xPipeline")), &thisId,
                     y->xPipeline);
  thisId.fIdentifier = "yPipeline";
  d_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "yPipeline")), &thisId,
                     y->yPipeline);
  thisId.fIdentifier = "zPipeline";
  k_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "zPipeline")), &thisId,
                     y->zPipeline);
  thisId.fIdentifier = "validPipeline";
  b_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "validPipeline")), &thisId,
                     y->validPipeline);
  thisId.fIdentifier = "pQuadrantIn";
  l_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "pQuadrantIn")), &thisId,
                     y->pQuadrantIn);
  thisId.fIdentifier = "pXYReversed";
  m_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "pXYReversed")), &thisId,
                     y->pXYReversed);
  thisId.fIdentifier = "pQuadrantOut";
  y->pQuadrantOut = n_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "pQuadrantOut")), &thisId);
  thisId.fIdentifier = "pPipeout";
  y->pPipeout = n_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0, "pPipeout")),
    &thisId);
  thisId.fIdentifier = "pXAbsolute";
  y->pXAbsolute = o_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0, "pXAbsolute")),
    &thisId);
  thisId.fIdentifier = "pYAbsolute";
  y->pYAbsolute = o_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0, "pYAbsolute")),
    &thisId);
  emlrtDestroyArray(&u);
}

static int32_T i_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = t_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T j_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = u_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, int32_T
  y[7])
{
  static const int32_T dims[1] = { 7 };

  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 1U,
                     dims, eml_mx, c_eml_mx);
  v_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, uint8_T
  y[7])
{
  static const int32_T dims[1] = { 7 };

  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 1U,
                     dims, eml_mx, d_eml_mx);
  w_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, uint8_T
  y[7])
{
  static const int32_T dims[1] = { 7 };

  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 1U,
                     dims, eml_mx, e_eml_mx);
  x_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static int32_T n_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 0U,
                     &dims, eml_mx, c_eml_mx);
  y = y_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T o_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  static const int32_T dims = 0;
  emlrtCheckFiR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, false, 0U,
                     &dims, eml_mx, f_eml_mx);
  y = ab_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T p_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "validPipeline", u, 0)),
                   "validPipeline", *moduleInstance->validPipeline);
  c_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "xPipeline", u, 1)), "xPipeline",
                     *moduleInstance->xPipeline);
  c_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "yPipeline", u, 2)), "yPipeline",
                     *moduleInstance->yPipeline);
  e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "zPipeline", u, 3)), "zPipeline",
                     *moduleInstance->zPipeline);
  g_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "sysobj", u, 4)), "sysobj",
                     &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = p_emlrt_marshallIn(moduleInstance,
    emlrtAlias(emlrtGetCell(moduleInstance->emlrtRootTLSGlobal,
    "sysobj_not_empty", u, 5)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m5, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m6, 1,
    &pArray, "message", true, location);
}

static const mxArray *fimath(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, char * c, char * d, char * e, char * f, char * g,
  char * h, char * i, char * j, char * k, char * l, real_T m, char * n, real_T o,
  char * p, real_T q, char * r, real_T s, char * t, real_T u, char * v, real_T w,
  char * x, real_T y, char * ab, char * bb, char * cb, real_T db, char * eb,
  real_T fb, char * gb, real_T hb, char * ib, real_T jb, char * kb, real_T lb,
  char * mb, real_T nb, char * ob, real_T pb, char * qb, boolean_T rb,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[42];
  const mxArray *m7;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateString(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateString(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateString(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateString(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateDoubleScalar(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  pArrays[14] = emlrtCreateString(p);
  pArrays[15] = emlrtCreateDoubleScalar(q);
  pArrays[16] = emlrtCreateString(r);
  pArrays[17] = emlrtCreateDoubleScalar(s);
  pArrays[18] = emlrtCreateString(t);
  pArrays[19] = emlrtCreateDoubleScalar(u);
  pArrays[20] = emlrtCreateString(v);
  pArrays[21] = emlrtCreateDoubleScalar(w);
  pArrays[22] = emlrtCreateString(x);
  pArrays[23] = emlrtCreateDoubleScalar(y);
  pArrays[24] = emlrtCreateString(ab);
  pArrays[25] = emlrtCreateString(bb);
  pArrays[26] = emlrtCreateString(cb);
  pArrays[27] = emlrtCreateDoubleScalar(db);
  pArrays[28] = emlrtCreateString(eb);
  pArrays[29] = emlrtCreateDoubleScalar(fb);
  pArrays[30] = emlrtCreateString(gb);
  pArrays[31] = emlrtCreateDoubleScalar(hb);
  pArrays[32] = emlrtCreateString(ib);
  pArrays[33] = emlrtCreateDoubleScalar(jb);
  pArrays[34] = emlrtCreateString(kb);
  pArrays[35] = emlrtCreateDoubleScalar(lb);
  pArrays[36] = emlrtCreateString(mb);
  pArrays[37] = emlrtCreateDoubleScalar(nb);
  pArrays[38] = emlrtCreateString(ob);
  pArrays[39] = emlrtCreateDoubleScalar(pb);
  pArrays[40] = emlrtCreateString(qb);
  pArrays[41] = emlrtCreateLogicalScalar(rb);
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m7, 42,
    pArrays, "fimath", true, location);
}

static const mxArray *numerictype(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, real_T c, char * d, real_T e, char * f, real_T g,
  char * h, real_T i, char * j, real_T k, emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  const mxArray *m8;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateDoubleScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateDoubleScalar(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m8, 10,
    pArrays, "numerictype", true, location);
}

static const mxArray *b_numerictype(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, char * b, boolean_T c, char * d, char * e, char * f, real_T g,
  char * h, real_T i, char * j, real_T k, char * l, real_T m, char * n, real_T o,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[14];
  const mxArray *m9;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateLogicalScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateDoubleScalar(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m9, 14,
    pArrays, "numerictype", true, location);
}

static void q_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId,
  boolean_T ret[8])
{
  static const int32_T dims[1] = { 8 };

  int32_T i7;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "logical", false, 1U, dims);
  for (i7 = 0; i7 < 8; i7++) {
    ret[i7] = (*(boolean_T (*)[8])mxGetLogicals(src))[i7];
  }

  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7])
{
  const mxArray *mxInt;
  int32_T i8;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  for (i8 = 0; i8 < 7; i8++) {
    ret[i8] = (*(int32_T (*)[7])mxGetData(mxInt))[i8];
  }

  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7])
{
  const mxArray *mxInt;
  int32_T i9;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  for (i9 = 0; i9 < 7; i9++) {
    ret[i9] = (*(int32_T (*)[7])mxGetData(mxInt))[i9];
  }

  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static int32_T t_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T u_emlrt_marshallIn(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, int32_T ret[7])
{
  const mxArray *mxInt;
  int32_T i10;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  for (i10 = 0; i10 < 7; i10++) {
    ret[i10] = (*(int32_T (*)[7])mxGetData(mxInt))[i10];
  }

  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint8_T ret[7])
{
  const mxArray *mxInt;
  int32_T i11;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  for (i11 = 0; i11 < 7; i11++) {
    ret[i11] = (*(uint8_T (*)[7])mxGetData(mxInt))[i11];
  }

  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint8_T ret[7])
{
  const mxArray *mxInt;
  int32_T i12;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  for (i12 = 0; i12 < 7; i12++) {
    ret[i12] = (*(uint8_T (*)[7])mxGetData(mxInt))[i12];
  }

  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static int32_T y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  int32_T ret;
  const mxArray *mxInt;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  ret = *(int32_T *)mxGetData(mxInt);
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId)
{
  int32_T ret;
  const mxArray *mxInt;
  (void)msgId;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  ret = *(int32_T *)mxGetData(mxInt);
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_wNselC31AbXio1ZnIoqGEG
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->u0 = (cint16_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->u1 = (boolean_T *)cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->b_y0 = (int32_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (boolean_T *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->xPipeline = (int32_T (*)[7])cgxertGetDWork(moduleInstance->S,
    0);
  moduleInstance->yPipeline = (int32_T (*)[7])cgxertGetDWork(moduleInstance->S,
    1);
  moduleInstance->zPipeline = (int32_T (*)[7])cgxertGetDWork(moduleInstance->S,
    2);
  moduleInstance->validPipeline = (boolean_T (*)[8])cgxertGetDWork
    (moduleInstance->S, 3);
}

/* CGXE Glue Code */
static void mdlOutputs_wNselC31AbXio1ZnIoqGEG(SimStruct *S, int_T tid)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_wNselC31AbXio1ZnIoqGEG(SimStruct *S)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_wNselC31AbXio1ZnIoqGEG(SimStruct *S, int_T tid)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_wNselC31AbXio1ZnIoqGEG(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  return mxSS;
}

static void setSimState_wNselC31AbXio1ZnIoqGEG(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_wNselC31AbXio1ZnIoqGEG(SimStruct *S)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_wNselC31AbXio1ZnIoqGEG(SimStruct *S)
{
  InstanceStruct_wNselC31AbXio1ZnIoqGEG *moduleInstance =
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG *)calloc(1, sizeof
    (InstanceStruct_wNselC31AbXio1ZnIoqGEG));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_wNselC31AbXio1ZnIoqGEG);
  ssSetmdlInitializeConditions(S, mdlInitialize_wNselC31AbXio1ZnIoqGEG);
  ssSetmdlUpdate(S, mdlUpdate_wNselC31AbXio1ZnIoqGEG);
  ssSetmdlTerminate(S, mdlTerminate_wNselC31AbXio1ZnIoqGEG);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_wNselC31AbXio1ZnIoqGEG(SimStruct *S)
{
}

void method_dispatcher_wNselC31AbXio1ZnIoqGEG(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_wNselC31AbXio1ZnIoqGEG(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_wNselC31AbXio1ZnIoqGEG(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_wNselC31AbXio1ZnIoqGEG(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_wNselC31AbXio1ZnIoqGEG(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: wNselC31AbXio1ZnIoqGEG.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_wNselC31AbXio1ZnIoqGEG_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_9 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_9);
  return mxBIArgs;
}
