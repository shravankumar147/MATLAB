/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "SystemCore.h"
#include "NotchPeakFilter.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtRSInfo v_emlrtRSI = { 363, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRSInfo w_emlrtRSI = { 375, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

static emlrtRSInfo x_emlrtRSI = { 116, "AbstractSampleRateEngine",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\AbstractSampleRateEngine.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtRTEInfo f_emlrtRTEI = { 442, 17, "NotchPeakFilter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\NotchPeakFilter.m"
};

/* Function Definitions */
void SystemCore_reset(const emlrtStack *sp, dsp_NotchPeakFilter *obj)
{
  static const char_T cv6[5] = { 'r', 'e', 's', 'e', 't' };

  dsp_NotchPeakFilter *b_obj;
  int32_T i4;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 5, cv6);
  }

  if (obj->isInitialized == 1) {
    b_obj = obj;
    for (i4 = 0; i4 < 6; i4++) {
      b_obj->States[i4] = 0.0;
    }
  }
}

void SystemCore_step(const emlrtStack *sp, dsp_NotchPeakFilter *obj, const
                     real_T varargin_1[3072], real_T varargout_1[3072])
{
  static const char_T cv4[4] = { 's', 't', 'e', 'p' };

  dsp_NotchPeakFilter *b_obj;
  static const char_T cv5[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T inputSize[8] = { 1024, 3, 1, 1, 1, 1, 1, 1 };

  real_T value;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv0[8] = { 1024, 3, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv4);
  }

  if (obj->isInitialized != 1) {
    st.site = &m_emlrtRSI;
    b_obj = obj;
    b_st.site = &m_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv5);
    }

    b_obj->isInitialized = 1;
    c_st.site = &m_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
    }

    c_st.site = &m_emlrtRSI;
    d_st.site = &m_emlrtRSI;
    c_NotchPeakFilter_validatePrope(&d_st, b_obj);
    c_st.site = &m_emlrtRSI;
    if ((b_obj->NumChannels != -1.0) && (3.0 != b_obj->NumChannels)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI,
        "dsp:system:Shared:numChannels", 0);
    }

    c_st.site = &m_emlrtRSI;
    d_st.site = &v_emlrtRSI;
    value = b_obj->pSampleRateDialog;
    if (value == -1.0) {
      e_st.site = &x_emlrtRSI;
      f_st.site = &m_emlrtRSI;
      c_NotchPeakFilter_validatePrope(&f_st, b_obj);
    }

    for (k = 0; k < 6; k++) {
      b_obj->States[k] = 0.0;
    }

    b_obj->NumChannels = 3.0;
    d_st.site = &w_emlrtRSI;
    c_NotchPeakFilter_processTunedP(b_obj);
    b_obj->TunablePropsChanged = false;
    b_st.site = &m_emlrtRSI;
    for (k = 0; k < 6; k++) {
      b_obj->States[k] = 0.0;
    }
  }

  st.site = &m_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &m_emlrtRSI;
    c_NotchPeakFilter_validatePrope(&b_st, b_obj);
    b_obj->TunablePropsChanged = false;
    b_st.site = &m_emlrtRSI;
    c_NotchPeakFilter_processTunedP(b_obj);
  }

  st.site = &m_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv0[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &m_emlrtRSI;
    b_obj = obj;
    if ((b_obj->NumChannels != -1.0) && (3.0 != b_obj->NumChannels)) {
      emlrtErrorWithMessageIdR2012b(&st, &f_emlrtRTEI,
        "dsp:system:Shared:numChannels", 0);
    }
  }

  st.site = &m_emlrtRSI;
  NotchPeakFilter_stepImpl(obj, varargin_1, varargout_1);
}

/* End of code generation (SystemCore.c) */
