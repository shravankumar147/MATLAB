/*
 * HelperAudioToneRemovalProcessing.c
 *
 * Code generation for function 'HelperAudioToneRemovalProcessing'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "randn.h"
#include "SystemProp.h"
#include "SystemCore.h"
#include "NotchPeakFilter.h"
#include "HelperUnpackUDP.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static dsp_NotchPeakFilter hn;
static boolean_T hn_not_empty;
static emlrtRSInfo emlrtRSI = { 14, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo b_emlrtRSI = { 19, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo c_emlrtRSI = { 32, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo d_emlrtRSI = { 33, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo e_emlrtRSI = { 37, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo f_emlrtRSI = { 39, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtRSInfo g_emlrtRSI = { 40, "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 40, 30, "paramNew",
  "HelperAudioToneRemovalProcessing",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperAudioToneRemovalProcessing.m",
  0 };

/* Function Definitions */
void HelperAudioToneRemovalProcessing(const emlrtStack *sp, const real_T x[2048],
  const struct1_T param[2], real_T y_data[], int32_T y_size[2], boolean_T
  *pauseSim, boolean_T *stopSim)
{
  boolean_T simControlFlags_stopSim;
  boolean_T simControlFlags_pauseSim;
  boolean_T simControlFlags_resetObj;
  int32_T paramNew_size[2];
  real_T paramNew_data[255];
  real_T u[1024];
  real_T b_x[3072];
  int32_T i0;
  real_T dv0[3072];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* HELPERAUDIOTONEREMOVALPROCESSING Main processing for audio tone removal. */
  /*  */
  /*  This function HelperAudioToneRemovalProcessing is only in support of  */
  /*  AudioInterferingToneRemovalExample. It may change in a future release. */
  /*  Copyright 2013 The MathWorks, Inc. */
  if (!hn_not_empty) {
    st.site = &emlrtRSI;
    NotchPeakFilter_NotchPeakFilter(&st, &hn, param[0].InitialValue, param[1].
      InitialValue);
    hn_not_empty = true;
  }

  /*  Obtain new values for parameters through UDP Receive */
  st.site = &b_emlrtRSI;
  HelperUnpackUDP(&st, paramNew_data, paramNew_size, &simControlFlags_resetObj,
                  &simControlFlags_pauseSim, &simControlFlags_stopSim);
  y_size[0] = 1;
  y_size[1] = 1;
  y_data[0] = 0.0;
  *pauseSim = simControlFlags_pauseSim;
  *stopSim = simControlFlags_stopSim;
  if (simControlFlags_stopSim || simControlFlags_pauseSim) {
  } else {
    st.site = &c_emlrtRSI;
    randn(u);
    for (i0 = 0; i0 < 2; i0++) {
      memcpy(&b_x[i0 << 10], &x[i0 << 10], sizeof(real_T) << 10);
    }

    memcpy(&b_x[2048], &u[0], sizeof(real_T) << 10);
    st.site = &d_emlrtRSI;
    SystemCore_step(&st, &hn, b_x, dv0);
    y_size[0] = 1024;
    y_size[1] = 3;
    memcpy(&y_data[0], &dv0[0], 3072U * sizeof(real_T));
    if (!((paramNew_size[0] == 0) || (paramNew_size[1] == 0))) {
      /*  If tuning hasn't started */
      if (simControlFlags_resetObj) {
        /*  If "Reset" button is pressed */
        st.site = &e_emlrtRSI;
        SystemCore_reset(&st, &hn);
      } else {
        st.site = &f_emlrtRSI;
        c_SystemProp_matlabCodegenNotif(&hn);
        st.site = &f_emlrtRSI;
        c_NotchPeakFilter_set_CenterFre(&st, &hn, paramNew_data[0]);
        st.site = &g_emlrtRSI;
        d_SystemProp_matlabCodegenNotif(&hn);
        if (!(2 <= paramNew_size[0])) {
          emlrtDynamicBoundsCheckR2012b(2, 1, paramNew_size[0], &emlrtBCI, sp);
        }

        st.site = &g_emlrtRSI;
        NotchPeakFilter_set_Bandwidth(&st, &hn, paramNew_data[1]);
      }
    }
  }
}

void hn_not_empty_init(void)
{
  hn_not_empty = false;
}

/* End of code generation (HelperAudioToneRemovalProcessing.c) */
