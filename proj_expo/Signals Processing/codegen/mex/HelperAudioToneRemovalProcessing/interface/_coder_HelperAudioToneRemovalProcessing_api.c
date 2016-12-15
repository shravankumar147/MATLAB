/*
 * _coder_HelperAudioToneRemovalProcessing_api.c
 *
 * Code generation for function '_coder_HelperAudioToneRemovalProcessing_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "_coder_HelperAudioToneRemovalProcessing_api.h"
#include "HelperAudioToneRemovalProcessing_data.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2048];
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param, const
  char_T *identifier, struct1_T y[2]);
static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T y[2]);
static const mxArray *d_emlrt_marshallOut(const boolean_T u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[2048];
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2048];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2]);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2048]
{
  real_T (*y)[2048];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param,
  const char_T *identifier, struct1_T y[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(param), &thisId, y);
  emlrtDestroyArray(&param);
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u_data);
  emlrtSetDimensions((mxArray *)m2, u_size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T y[2])
{
  emlrtMsgIdentifier thisId;
  static const int32_T dims[2] = { 1, 2 };

  static const char * fieldNames[3] = { "Name", "InitialValue", "Limits" };

  int32_T i5;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 3, fieldNames, 2U, dims);
  for (i5 = 0; i5 < 2; i5++) {
    thisId.fIdentifier = "Name";
    e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i5, "Name")),
                       &thisId, y[i5].Name.data, y[i5].Name.size);
    thisId.fIdentifier = "InitialValue";
    y[i5].InitialValue = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
      (sp, u, i5, "InitialValue")), &thisId);
    thisId.fIdentifier = "Limits";
    g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, i5, "Limits")),
                       &thisId, y[i5].Limits);
  }

  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const boolean_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateLogicalScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[2048]
{
  real_T (*y)[2048];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2048]
{
  real_T (*ret)[2048];
  static const int32_T dims[2] = { 1024, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2048])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2])
{
  int32_T iv2[2];
  boolean_T bv0[2] = { false, true };

  static const int32_T dims[2] = { 1, 16 };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims, &bv0[0],
    iv2);
  ret_size[0] = iv2[0];
  ret_size[1] = iv2[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2] = { 1, 2 };

  int32_T i6;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i6 = 0; i6 < 2; i6++) {
    ret[i6] = (*(real_T (*)[2])mxGetData(src))[i6];
  }

  emlrtDestroyArray(&src);
}

void HelperAudioToneRemovalProcessing_api(const mxArray * const prhs[3], const
  mxArray *plhs[3])
{
  real_T (*y_data)[3072];
  static const uint32_T args[4] = { 4006518340U, 1651101246U, 3124919150U,
    2365746008U };

  real_T (*x)[2048];
  struct1_T param[2];
  boolean_T stopSim;
  boolean_T pauseSim;
  int32_T y_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  y_data = (real_T (*)[3072])mxMalloc(sizeof(real_T [3072]));

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "args", args, prhs[1], false);

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "param", param);

  /* Invoke the target function */
  HelperAudioToneRemovalProcessing(&st, *x, param, *y_data, y_size, &pauseSim,
    &stopSim);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*y_data, y_size);
  plhs[1] = d_emlrt_marshallOut(pauseSim);
  plhs[2] = d_emlrt_marshallOut(stopSim);
}

/* End of code generation (_coder_HelperAudioToneRemovalProcessing_api.c) */
