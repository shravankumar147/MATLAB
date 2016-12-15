/*
 * NotchPeakFilter.c
 *
 * Code generation for function 'NotchPeakFilter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "NotchPeakFilter.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 190, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRSInfo i_emlrtRSI = { 194, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRSInfo j_emlrtRSI = { 40, "AbstractSampleRateEngine",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\AbstractSampleRateEngine.m"
};

static emlrtRSInfo k_emlrtRSI = { 1, "System",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"
};

static emlrtRSInfo l_emlrtRSI = { 1, "SystemProp",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"
};

static emlrtRSInfo n_emlrtRSI = { 1, "SampleTime",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\+internal\\SampleTime.p"
};

static emlrtRSInfo o_emlrtRSI = { 37, "FilterAnalysis",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\FilterAnalysis.m"
};

static emlrtRSInfo p_emlrtRSI = { 1, "pvParse",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\matlab\\system\\+matlab\\+system\\pvParse.p"
};

static emlrtRSInfo q_emlrtRSI = { 206, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRSInfo r_emlrtRSI = { 199, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRTEInfo emlrtRTEI = { 322, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 162, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 471, 17, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 465, 17, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

/* Function Definitions */
dsp_NotchPeakFilter *NotchPeakFilter_NotchPeakFilter(const emlrtStack *sp,
  dsp_NotchPeakFilter *obj, real_T varargin_4, real_T varargin_6)
{
  dsp_NotchPeakFilter *b_obj;
  dsp_NotchPeakFilter *c_obj;
  boolean_T flag;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_obj = obj;
  st.site = &h_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  c_obj->isInitialized = 0;
  b_st.site = &j_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  st.site = &h_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  st.site = &i_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &l_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  c_obj->pSampleRateDialog = 44100.0;
  flag = (c_obj->isInitialized == 1);
  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  d_st.site = &p_emlrtRSI;
  c_NotchPeakFilter_set_CenterFre(&d_st, c_obj, varargin_4);
  flag = (c_obj->isInitialized == 1);
  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  d_st.site = &p_emlrtRSI;
  NotchPeakFilter_set_Bandwidth(&d_st, c_obj, varargin_6);
  b_obj->NumChannels = -1.0;
  return b_obj;
}

void NotchPeakFilter_set_Bandwidth(const emlrtStack *sp, dsp_NotchPeakFilter
  *obj, real_T bw)
{
  boolean_T p;
  static const char_T cv2[32] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'B', 'a', 'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  static const char_T cv3[62] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'B', 'a', 'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'a', 'n', ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'w', 'i', 't', 'h', ' ',
    'a', 'l', 'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'v', 'a', 'l', 'u',
    'e', 's', ' ', '>', '=', ' ', '0', '.' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  p = true;
  if ((!muDoubleScalarIsInf(bw)) && (!muDoubleScalarIsNaN(bw))) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &b_emlrtRTEI, "MATLAB:expectedFinite", 32,
      cv2);
  }

  p = true;
  if (bw >= 0.0) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &emlrtRTEI, "MATLAB:notGreaterEqual", 62,
      cv3);
  }

  obj->Bandwidth = bw;
}

void NotchPeakFilter_stepImpl(dsp_NotchPeakFilter *obj, const real_T u[3072],
  real_T y_notch[3072])
{
  real_T z1[3];
  int32_T i3;
  real_T z2[3];
  real_T G3dB;
  real_T Gcf;
  real_T w3dB[3072];
  int32_T k;
  real_T p3dB;
  real_T s3dB;
  real_T pcf;
  for (i3 = 0; i3 < 3; i3++) {
    z1[i3] = obj->States[i3 << 1];
  }

  for (i3 = 0; i3 < 3; i3++) {
    z2[i3] = obj->States[1 + (i3 << 1)];
  }

  G3dB = obj->privBandwidthCoefficient;
  Gcf = obj->privCenterFrequencyCoefficient;
  for (i3 = 0; i3 < 3072; i3++) {
    y_notch[i3] = 0.5 * u[i3];
  }

  for (k = 0; k < 1024; k++) {
    for (i3 = 0; i3 < 3; i3++) {
      p3dB = G3dB * (y_notch[k + (i3 << 10)] - z1[i3]);
      s3dB = y_notch[k + (i3 << 10)] + p3dB;
      pcf = Gcf * (s3dB - z2[i3]);
      w3dB[k + (i3 << 10)] = p3dB + z1[i3];
      z1[i3] = pcf + z2[i3];
      z2[i3] = s3dB + pcf;
    }
  }

  for (i3 = 0; i3 < 3072; i3++) {
    y_notch[i3] += w3dB[i3];
  }

  for (i3 = 0; i3 < 3; i3++) {
    obj->States[i3 << 1] = z1[i3];
  }

  for (i3 = 0; i3 < 3; i3++) {
    obj->States[1 + (i3 << 1)] = z2[i3];
  }
}

void c_NotchPeakFilter_processTunedP(dsp_NotchPeakFilter *obj)
{
  dsp_NotchPeakFilter *b_obj;
  real_T Fs;
  real_T BW;
  real_T CF;
  b_obj = obj;
  Fs = b_obj->pSampleRateDialog;
  BW = obj->Bandwidth;
  CF = obj->CenterFrequency;
  obj->privBandwidthCoefficient = 2.0 / (1.0 + muDoubleScalarTan(BW *
    3.1415926535897931 / Fs)) - 1.0;
  obj->privCenterFrequencyCoefficient = -muDoubleScalarCos(2.0 * CF / Fs *
    3.1415926535897931);
}

void c_NotchPeakFilter_set_CenterFre(const emlrtStack *sp, dsp_NotchPeakFilter
  *obj, real_T cf)
{
  boolean_T p;
  static const char_T cv0[38] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'C', 'e', 'n', 't', 'e', 'r', 'F', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  static const char_T cv1[68] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'C', 'e', 'n', 't', 'e', 'r', 'F', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'a', 'n', ' ', 'a', 'r', 'r', 'a', 'y',
    ' ', 'w', 'i', 't', 'h', ' ', 'a', 'l', 'l', ' ', 'o', 'f', ' ', 't', 'h',
    'e', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', '>', '=', ' ', '0', '.' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  p = true;
  if ((!muDoubleScalarIsInf(cf)) && (!muDoubleScalarIsNaN(cf))) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &b_emlrtRTEI, "MATLAB:expectedFinite", 38,
      cv0);
  }

  p = true;
  if (cf >= 0.0) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &emlrtRTEI, "MATLAB:notGreaterEqual", 68,
      cv1);
  }

  obj->CenterFrequency = cf;
}

void c_NotchPeakFilter_validatePrope(const emlrtStack *sp, dsp_NotchPeakFilter
  *obj)
{
  dsp_NotchPeakFilter *b_obj;
  real_T Fs;
  real_T CF;
  boolean_T b0;
  b_obj = obj;
  Fs = b_obj->pSampleRateDialog;
  if (Fs == -1.0) {
  } else {
    CF = obj->CenterFrequency;
    if ((CF < 0.0) || (CF > Fs / 2.0)) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI,
        "dsp:system:NotchPeakFilter:centerFreq", 4, 6, muDoubleScalarFloor(Fs),
        6, muDoubleScalarRound((Fs - muDoubleScalarFloor(Fs)) * 10.0));
    }

    CF = obj->Bandwidth;
    if ((CF < 0.0) || (CF > Fs / 2.0)) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &g_emlrtRTEI,
        "dsp:system:NotchPeakFilter:BW", 4, 6, muDoubleScalarFloor(Fs), 6,
        muDoubleScalarRound((Fs - muDoubleScalarFloor(Fs)) * 10.0));
    }
  }
}

/* End of code generation (NotchPeakFilter.c) */
