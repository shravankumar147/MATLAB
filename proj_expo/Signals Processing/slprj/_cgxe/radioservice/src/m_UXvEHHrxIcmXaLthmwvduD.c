/* Include files */

#include "modelInterface.h"
#include "m_UXvEHHrxIcmXaLthmwvduD.h"

/* Type Definitions */

/* Named Constants */
#define InputSampleRate                (50000.0)
#define OutputSampleRate               (8000.0)
#define OutputRateTolerance            (0.0)
#define Bandwidth                      (6250.0)
#define StopbandAttenuation            (80.0)

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 14, 25, "warning",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 14, 9, "warning",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo d_emlrtMCI = { 355, 17, "SampleRateConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"
};

static emlrtRTEInfo emlrtRTEI = { 260, 25, "SampleRateConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 250, 25, "SampleRateConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"
};

/* Function Declarations */
static void SampleRateConverter_stepImpl(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, dsp_SampleRateConverter_2 *obj, real_T u[6250], real_T y[1000]);
static void SystemCore_step(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, dspcodegen_FIRDecimator *obj, real_T varargin_1[6250], real_T
  varargout_1[1250]);
static void cgxe_mdl_start(InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance);
static const mxArray *message(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, const mxArray *b, emlrtMCInfo *location);
static void init_simulink_io_address(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance);

/* Function Definitions */
static void SampleRateConverter_stepImpl(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, dsp_SampleRateConverter_2 *obj, real_T u[6250], real_T y[1000])
{
  real_T b_y1[1250];
  dspcodegen_FIRRateConverter *b_obj;
  int32_T nModDFactor;
  static char_T cv0[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T b_u[45];
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  static char_T cv1[4] = { 's', 't', 'e', 'p' };

  char_T c_u[4];
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 4 };

  static char_T cv2[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T d_u[51];
  const mxArray *d_y;
  static const int32_T iv2[2] = { 1, 51 };

  static char_T cv3[5] = { 's', 'e', 't', 'u', 'p' };

  char_T e_u[5];
  const mxArray *e_y;
  static const int32_T iv3[2] = { 1, 5 };

  dsp_FIRRateConverter_1 *c_obj;
  int32_T outIdx;
  int32_T inIdx;
  int32_T inBufIdx;
  int32_T n;
  int32_T outputStartIdx;
  real_T acc;
  int32_T coefPolyphaseOffset;
  int32_T i;
  real_T prod;
  SystemCore_step(moduleInstance, obj->filt1, u, b_y1);
  b_obj = obj->filt2;
  if (b_obj->isInitialized == 2) {
    for (nModDFactor = 0; nModDFactor < 45; nModDFactor++) {
      b_u[nModDFactor] = cv0[nModDFactor];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    for (nModDFactor = 0; nModDFactor < 4; nModDFactor++) {
      c_u[nModDFactor] = cv1[nModDFactor];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    error(moduleInstance, message(moduleInstance, b_y, c_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    if (b_obj->isInitialized != 0) {
      for (nModDFactor = 0; nModDFactor < 51; nModDFactor++) {
        d_u[nModDFactor] = cv2[nModDFactor];
      }

      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m0, &d_u
        [0]);
      emlrtAssign(&d_y, m0);
      for (nModDFactor = 0; nModDFactor < 5; nModDFactor++) {
        e_u[nModDFactor] = cv3[nModDFactor];
      }

      e_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m0, &e_u[0]);
      emlrtAssign(&e_y, m0);
      error(moduleInstance, message(moduleInstance, d_y, e_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRRateConverter */
    b_obj->cSFunObject.W1_InBufIdx = 0;
    for (nModDFactor = 0; nModDFactor < 30; nModDFactor++) {
      b_obj->cSFunObject.W0_InBuf[nModDFactor] = 0.0;
    }
  }

  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;

  /* Update inBufIdx and inputChannelOffset for current channel */
  inBufIdx = b_obj->cSFunObject.W1_InBufIdx;
  for (n = 0; n < 1250; n++) {
    nModDFactor = n % 5;
    outputStartIdx = c_obj->P2_StartIdx[nModDFactor];
    nModDFactor = c_obj->P3_StopIdx[nModDFactor];

    /* Read input into inBufArray */
    c_obj->W0_InBuf[inBufIdx] = b_y1[inIdx];
    inIdx++;

    /* Generate outputs (if any) for current input n */
    while (outputStartIdx < nModDFactor) {
      acc = 0.0;
      coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 30;
      for (i = inBufIdx; i < 30; i++) {
        prod = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          c_obj->W0_InBuf[i];
        acc += prod;
      }

      for (i = 0; i < inBufIdx; i++) {
        prod = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 30] *
          c_obj->W0_InBuf[i];
        acc += prod;
      }

      y[outIdx] = acc;
      outIdx++;
      outputStartIdx++;
    }

    /* Decrement inBufIdx, wrap if necessary */
    if (inBufIdx == 0) {
      inBufIdx = 29;
    } else {
      inBufIdx--;
    }
  }

  /* Update inBufIdx */
  b_obj->cSFunObject.W1_InBufIdx = inBufIdx;
}

static void SystemCore_step(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, dspcodegen_FIRDecimator *obj, real_T varargin_1[6250], real_T
  varargout_1[1250])
{
  int32_T inputIdx;
  static char_T cv4[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *m1;
  static char_T cv5[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 4 };

  dspcodegen_FIRDecimator *b_obj;
  static char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv6[2] = { 1, 51 };

  static char_T cv7[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv7[2] = { 1, 5 };

  dsp_FIRDecimator_0 *c_obj;
  int32_T curTapIdx;
  int32_T phaseIdx;
  int32_T cffIdx;
  int32_T outBufIdx;
  int32_T maxWindow;
  int32_T iIdx;
  int32_T jIdx;
  if (obj->isInitialized == 2) {
    for (inputIdx = 0; inputIdx < 45; inputIdx++) {
      u[inputIdx] = cv4[inputIdx];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (inputIdx = 0; inputIdx < 4; inputIdx++) {
      b_u[inputIdx] = cv5[inputIdx];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_obj = obj;
    if (b_obj->isInitialized != 0) {
      for (inputIdx = 0; inputIdx < 51; inputIdx++) {
        c_u[inputIdx] = cv6[inputIdx];
      }

      c_y = NULL;
      m1 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m1, &c_u
        [0]);
      emlrtAssign(&c_y, m1);
      for (inputIdx = 0; inputIdx < 5; inputIdx++) {
        d_u[inputIdx] = cv7[inputIdx];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &d_u[0]);
      emlrtAssign(&d_y, m1);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRDecimator */
    b_obj->cSFunObject.W2_CoeffIdx = 52;
    b_obj->cSFunObject.W0_PhaseIdx = 4;
    b_obj->cSFunObject.W4_TapDelayIndex = 48;
    b_obj->cSFunObject.W1_Sums = 0.0;
    for (inputIdx = 0; inputIdx < 60; inputIdx++) {
      b_obj->cSFunObject.W3_StatesBuff[inputIdx] = 0.0;
    }
  }

  b_obj = obj;
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.FIRDecimator */
  inputIdx = 0;
  curTapIdx = b_obj->cSFunObject.W4_TapDelayIndex;
  phaseIdx = b_obj->cSFunObject.W0_PhaseIdx;
  cffIdx = b_obj->cSFunObject.W2_CoeffIdx;
  outBufIdx = 0;
  maxWindow = (phaseIdx + 1) * 12;
  for (iIdx = 0; iIdx < 6250; iIdx++) {
    c_obj->W1_Sums += varargin_1[inputIdx] * c_obj->P1_FILT[cffIdx];
    cffIdx++;
    for (jIdx = curTapIdx + 1; jIdx < maxWindow; jIdx++) {
      c_obj->W1_Sums += c_obj->W3_StatesBuff[jIdx] * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    for (jIdx = maxWindow - 12; jIdx <= curTapIdx; jIdx++) {
      c_obj->W1_Sums += c_obj->W3_StatesBuff[jIdx] * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    c_obj->W3_StatesBuff[curTapIdx] = varargin_1[inputIdx];
    inputIdx++;
    curTapIdx += 12;
    if (curTapIdx >= 60) {
      curTapIdx -= 60;
    }

    phaseIdx++;
    if (phaseIdx < 5) {
      maxWindow += 12;
    } else {
      c_obj->O0_Y0[outBufIdx] = c_obj->W1_Sums;
      outBufIdx++;
      c_obj->W1_Sums = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
      curTapIdx--;
      if (curTapIdx < 0) {
        curTapIdx += 12;
      }

      maxWindow = 12;
    }
  }

  b_obj->cSFunObject.W4_TapDelayIndex = curTapIdx;
  b_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  b_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (inputIdx = 0; inputIdx < 1250; inputIdx++) {
    varargout_1[inputIdx] = b_obj->cSFunObject.O0_Y0[inputIdx];
  }
}

static void cgxe_mdl_start(InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance)
{
  dsp_SampleRateConverter_2 *obj;
  dspcodegen_FIRDecimator *iobj_0;
  dspcodegen_FIRRateConverter *iobj_1;
  int32_T i0;
  static char_T cv8[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 51 };

  const mxArray *m2;
  static char_T cv9[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 5 };

  static int16_T iv10[8] = { 6250, 1, 1, 1, 1, 1, 1, 1 };

  static char_T cv10[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  char_T c_u[29];
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 29 };

  static real_T dv0[65] = { -0.00042490390801053907, 0.001829921716933601,
    -0.0053922845058157441, 0.013158346550611766, -0.0306391449331187,
    0.097992165418816057, 0.1494061316020634, -0.036811645611123822,
    0.015554560498179271, -0.0065160634201840671, 0.002322039466476993,
    -0.00059679513327257766, 7.912220199299E-5, -0.00018023922410876497,
    0.00087868330763207075, -0.0027374434497387575, 0.0068640356860943941,
    -0.015898279697317719, 0.044393549657968379, 0.18648984591811768,
    -0.027710944293488637, 0.011353373510521791, -0.004835216511247617,
    0.0017985509582130208, -0.0005034779575003312, 7.1006774722819944E-5, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    7.1006774722819944E-5, -0.0005034779575003312, 0.0017985509582130208,
    -0.004835216511247617, 0.011353373510521791, -0.027710944293488637,
    0.18648984591811768, 0.044393549657968379, -0.015898279697317719,
    0.0068640356860943941, -0.0027374434497387575, 0.00087868330763207075,
    -0.00018023922410876497, 7.912220199299E-5, -0.00059679513327257766,
    0.002322039466476993, -0.0065160634201840671, 0.015554560498179271,
    -0.036811645611123822, 0.1494061316020634, 0.097992165418816057,
    -0.0306391449331187, 0.013158346550611766, -0.0053922845058157441,
    0.001829921716933601, -0.00042490390801053907 };

  static real_T dv1[120] = { -2.7394100013652473E-5, 0.0, 0.00037894068534068619,
    -0.0013708823152694639, 0.00268257205568729, -0.0029618195399131889, 0.0,
    0.0078609652501006478, -0.019453248977701877, 0.028984307962212054,
    -0.026341800053436379, 0.0, 0.059586630047975528, -0.16398784004285519,
    0.39970920445885333, 0.74757835469466261, 0.0, -0.076109876780524763,
    0.077352679334485558, -0.051701756420330057, 0.021737647121907556, 0.0,
    -0.009760644763162624, 0.010147444378648696, -0.0062395788347920046,
    0.00223736435719863, 0.0, -0.000578393604977232, 0.00038049397375299542,
    -0.00011122314331323368, -7.3471653020902532E-5, 0.0001803558498977357, 0.0,
    -0.0010125268340104962, 0.00312437313653832, -0.0054788551201990889,
    0.0055792244712591183, 0.0, -0.013309431044135926, 0.031938446310848335,
    -0.04692872867557716, 0.043075982682944734, 0.0, -0.11993407734560091,
    0.60283398545426792, 0.60283398545426792, -0.11993407734560091, 0.0,
    0.043075982682944734, -0.04692872867557716, 0.031938446310848335,
    -0.013309431044135926, 0.0, 0.0055792244712591183, -0.0054788551201990889,
    0.00312437313653832, -0.0010125268340104962, 0.0, 0.0001803558498977357,
    -7.3471653020902532E-5, -0.00011122314331323368, 0.00038049397375299542,
    -0.000578393604977232, 0.0, 0.00223736435719863, -0.0062395788347920046,
    0.010147444378648696, -0.009760644763162624, 0.0, 0.021737647121907556,
    -0.051701756420330057, 0.077352679334485558, -0.076109876780524763, 0.0,
    0.74757835469466261, 0.39970920445885333, -0.16398784004285519,
    0.059586630047975528, 0.0, -0.026341800053436379, 0.028984307962212054,
    -0.019453248977701877, 0.0078609652501006478, 0.0, -0.0029618195399131889,
    0.00268257205568729, -0.0013708823152694639, 0.00037894068534068619, 0.0,
    -2.7394100013652473E-5, -9.8313238270332086E-5, 0.000486827925108784,
    -0.0011378244855056148, 0.001415513014019786, 0.0, -0.0043758948985123938,
    0.011375305454062892, -0.017543845054337627, 0.01624272325576193, 0.0,
    -0.035239058026866117, 0.086157558252096214, -0.14115130237644263,
    0.18386872695653758, 0.8, 0.18386872695653758, -0.14115130237644263,
    0.086157558252096214, -0.035239058026866117, 0.0, 0.01624272325576193,
    -0.017543845054337627, 0.011375305454062892, -0.0043758948985123938, 0.0,
    0.001415513014019786, -0.0011378244855056148, 0.000486827925108784,
    -9.8313238270332086E-5, 0.0 };

  static int8_T iv12[5] = { 1, 2, 3, 4, 4 };

  init_simulink_io_address(moduleInstance);
  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.filt1 = NULL;
    moduleInstance->sysobj.filt2 = NULL;
    obj->isInitialized = 0;
    obj->NumChannels = -1.0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  iobj_0 = &moduleInstance->gobj_0;
  iobj_1 = &moduleInstance->gobj_2;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv8[i0];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv9[i0];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  obj->isInitialized = 1;
  for (i0 = 0; i0 < 8; i0++) {
    obj->inputVarSize1[i0] = (uint32_T)iv10[i0];
  }

  if ((obj->NumChannels != -1.0) && (1.0 != obj->NumChannels)) {
    for (i0 = 0; i0 < 29; i0++) {
      c_u[i0] = cv10[i0];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 29, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    error(moduleInstance, b_message(moduleInstance, c_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  if (!(obj->filt1 == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
      &b_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
  }

  iobj_0->isInitialized = 0;

  /* System object Constructor function: dsp.FIRDecimator */
  iobj_0->cSFunObject.P0_IC = 0.0;
  for (i0 = 0; i0 < 65; i0++) {
    iobj_0->cSFunObject.P1_FILT[i0] = dv0[i0];
  }

  obj->filt1 = iobj_0;
  if (!(obj->filt2 == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal, &emlrtRTEI,
      "EMLRT:runTime:NontunableHandleProp", 0);
  }

  iobj_1->isInitialized = 0;

  /* System object Constructor function: dsp.FIRRateConverter */
  for (i0 = 0; i0 < 120; i0++) {
    iobj_1->cSFunObject.P0_FILTER[i0] = dv1[i0];
  }

  for (i0 = 0; i0 < 4; i0++) {
    iobj_1->cSFunObject.P1_PolyphaseSelector[i0] = i0;
  }

  for (i0 = 0; i0 < 5; i0++) {
    iobj_1->cSFunObject.P2_StartIdx[i0] = i0;
  }

  for (i0 = 0; i0 < 5; i0++) {
    iobj_1->cSFunObject.P3_StopIdx[i0] = iv12[i0];
  }

  obj->filt2 = iobj_1;
  obj->NumChannels = 1.0;
}

static void cgxe_mdl_initialize(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance)
{
  dsp_SampleRateConverter_2 *obj;
  int32_T i1;
  static char_T cv11[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *m3;
  static char_T cv12[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 45 };

  static char_T cv13[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 5 };

  dspcodegen_FIRDecimator *b_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 45 };

  char_T f_u[5];
  const mxArray *f_y;
  static const int32_T iv18[2] = { 1, 5 };

  dspcodegen_FIRRateConverter *c_obj;
  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv19[2] = { 1, 45 };

  char_T h_u[5];
  const mxArray *h_y;
  static const int32_T iv20[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.filt1 = NULL;
    moduleInstance->sysobj.filt2 = NULL;
    obj->isInitialized = 0;
    obj->NumChannels = -1.0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv11[i1];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i1 = 0; i1 < 8; i1++) {
      b_u[i1] = cv12[i1];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i1 = 0; i1 < 45; i1++) {
        c_u[i1] = cv11[i1];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &c_u
        [0]);
      emlrtAssign(&c_y, m3);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv13[i1];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      b_obj = obj->filt1;
      if (b_obj->isInitialized == 2) {
        for (i1 = 0; i1 < 45; i1++) {
          e_u[i1] = cv11[i1];
        }

        e_y = NULL;
        m3 = emlrtCreateCharArray(2, iv17);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3,
          &e_u[0]);
        emlrtAssign(&e_y, m3);
        for (i1 = 0; i1 < 5; i1++) {
          f_u[i1] = cv13[i1];
        }

        f_y = NULL;
        m3 = emlrtCreateCharArray(2, iv18);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3,
          &f_u[0]);
        emlrtAssign(&f_y, m3);
        error(moduleInstance, message(moduleInstance, e_y, f_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (b_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRDecimator */
        b_obj->cSFunObject.W2_CoeffIdx = 52;
        b_obj->cSFunObject.W0_PhaseIdx = 4;
        b_obj->cSFunObject.W4_TapDelayIndex = 48;
        b_obj->cSFunObject.W1_Sums = 0.0;
        for (i1 = 0; i1 < 60; i1++) {
          b_obj->cSFunObject.W3_StatesBuff[i1] = 0.0;
        }
      }

      c_obj = obj->filt2;
      if (c_obj->isInitialized == 2) {
        for (i1 = 0; i1 < 45; i1++) {
          g_u[i1] = cv11[i1];
        }

        g_y = NULL;
        m3 = emlrtCreateCharArray(2, iv19);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3,
          &g_u[0]);
        emlrtAssign(&g_y, m3);
        for (i1 = 0; i1 < 5; i1++) {
          h_u[i1] = cv13[i1];
        }

        h_y = NULL;
        m3 = emlrtCreateCharArray(2, iv20);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3,
          &h_u[0]);
        emlrtAssign(&h_y, m3);
        error(moduleInstance, message(moduleInstance, g_y, h_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (c_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRRateConverter */
        c_obj->cSFunObject.W1_InBufIdx = 0;
        for (i1 = 0; i1 < 30; i1++) {
          c_obj->cSFunObject.W0_InBuf[i1] = 0.0;
        }
      }
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance)
{
  real_T varargin_6[6250];
  int32_T k;
  dsp_SampleRateConverter_2 *obj;
  dspcodegen_FIRDecimator *iobj_0;
  dspcodegen_FIRRateConverter *iobj_1;
  static char_T cv14[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv15[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 4 };

  static char_T cv16[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv23[2] = { 1, 51 };

  static char_T cv17[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv24[2] = { 1, 5 };

  static int16_T inputSize[8] = { 6250, 1, 1, 1, 1, 1, 1, 1 };

  static char_T cv18[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  char_T e_u[29];
  const mxArray *e_y;
  static const int32_T iv25[2] = { 1, 29 };

  static real_T dv2[65] = { -0.00042490390801053907, 0.001829921716933601,
    -0.0053922845058157441, 0.013158346550611766, -0.0306391449331187,
    0.097992165418816057, 0.1494061316020634, -0.036811645611123822,
    0.015554560498179271, -0.0065160634201840671, 0.002322039466476993,
    -0.00059679513327257766, 7.912220199299E-5, -0.00018023922410876497,
    0.00087868330763207075, -0.0027374434497387575, 0.0068640356860943941,
    -0.015898279697317719, 0.044393549657968379, 0.18648984591811768,
    -0.027710944293488637, 0.011353373510521791, -0.004835216511247617,
    0.0017985509582130208, -0.0005034779575003312, 7.1006774722819944E-5, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    7.1006774722819944E-5, -0.0005034779575003312, 0.0017985509582130208,
    -0.004835216511247617, 0.011353373510521791, -0.027710944293488637,
    0.18648984591811768, 0.044393549657968379, -0.015898279697317719,
    0.0068640356860943941, -0.0027374434497387575, 0.00087868330763207075,
    -0.00018023922410876497, 7.912220199299E-5, -0.00059679513327257766,
    0.002322039466476993, -0.0065160634201840671, 0.015554560498179271,
    -0.036811645611123822, 0.1494061316020634, 0.097992165418816057,
    -0.0306391449331187, 0.013158346550611766, -0.0053922845058157441,
    0.001829921716933601, -0.00042490390801053907 };

  static real_T dv3[120] = { -2.7394100013652473E-5, 0.0, 0.00037894068534068619,
    -0.0013708823152694639, 0.00268257205568729, -0.0029618195399131889, 0.0,
    0.0078609652501006478, -0.019453248977701877, 0.028984307962212054,
    -0.026341800053436379, 0.0, 0.059586630047975528, -0.16398784004285519,
    0.39970920445885333, 0.74757835469466261, 0.0, -0.076109876780524763,
    0.077352679334485558, -0.051701756420330057, 0.021737647121907556, 0.0,
    -0.009760644763162624, 0.010147444378648696, -0.0062395788347920046,
    0.00223736435719863, 0.0, -0.000578393604977232, 0.00038049397375299542,
    -0.00011122314331323368, -7.3471653020902532E-5, 0.0001803558498977357, 0.0,
    -0.0010125268340104962, 0.00312437313653832, -0.0054788551201990889,
    0.0055792244712591183, 0.0, -0.013309431044135926, 0.031938446310848335,
    -0.04692872867557716, 0.043075982682944734, 0.0, -0.11993407734560091,
    0.60283398545426792, 0.60283398545426792, -0.11993407734560091, 0.0,
    0.043075982682944734, -0.04692872867557716, 0.031938446310848335,
    -0.013309431044135926, 0.0, 0.0055792244712591183, -0.0054788551201990889,
    0.00312437313653832, -0.0010125268340104962, 0.0, 0.0001803558498977357,
    -7.3471653020902532E-5, -0.00011122314331323368, 0.00038049397375299542,
    -0.000578393604977232, 0.0, 0.00223736435719863, -0.0062395788347920046,
    0.010147444378648696, -0.009760644763162624, 0.0, 0.021737647121907556,
    -0.051701756420330057, 0.077352679334485558, -0.076109876780524763, 0.0,
    0.74757835469466261, 0.39970920445885333, -0.16398784004285519,
    0.059586630047975528, 0.0, -0.026341800053436379, 0.028984307962212054,
    -0.019453248977701877, 0.0078609652501006478, 0.0, -0.0029618195399131889,
    0.00268257205568729, -0.0013708823152694639, 0.00037894068534068619, 0.0,
    -2.7394100013652473E-5, -9.8313238270332086E-5, 0.000486827925108784,
    -0.0011378244855056148, 0.001415513014019786, 0.0, -0.0043758948985123938,
    0.011375305454062892, -0.017543845054337627, 0.01624272325576193, 0.0,
    -0.035239058026866117, 0.086157558252096214, -0.14115130237644263,
    0.18386872695653758, 0.8, 0.18386872695653758, -0.14115130237644263,
    0.086157558252096214, -0.035239058026866117, 0.0, 0.01624272325576193,
    -0.017543845054337627, 0.011375305454062892, -0.0043758948985123938, 0.0,
    0.001415513014019786, -0.0011378244855056148, 0.000486827925108784,
    -9.8313238270332086E-5, 0.0 };

  static int8_T iv26[5] = { 1, 2, 3, 4, 4 };

  char_T f_u[45];
  const mxArray *f_y;
  static const int32_T iv27[2] = { 1, 45 };

  static char_T cv19[5] = { 'r', 'e', 's', 'e', 't' };

  char_T g_u[5];
  const mxArray *g_y;
  static const int32_T iv28[2] = { 1, 5 };

  char_T h_u[45];
  const mxArray *h_y;
  static const int32_T iv29[2] = { 1, 45 };

  char_T i_u[5];
  const mxArray *i_y;
  static const int32_T iv30[2] = { 1, 5 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  char_T j_u[29];
  const mxArray *j_y;
  static const int32_T iv31[2] = { 1, 29 };

  real_T varargout_1[1000];
  for (k = 0; k < 6250; k++) {
    varargin_6[k] = (*moduleInstance->u0)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.filt1 = NULL;
    moduleInstance->sysobj.filt2 = NULL;
    obj->isInitialized = 0;
    obj->NumChannels = -1.0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  iobj_0 = &moduleInstance->gobj_1;
  iobj_1 = &moduleInstance->gobj_3;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv14[k];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (k = 0; k < 4; k++) {
      b_u[k] = cv15[k];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = cv16[k];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m4, &c_u
        [0]);
      emlrtAssign(&c_y, m4);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv17[k];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    obj->isInitialized = 1;
    for (k = 0; k < 8; k++) {
      obj->inputVarSize1[k] = (uint32_T)inputSize[k];
    }

    if ((obj->NumChannels != -1.0) && (1.0 != obj->NumChannels)) {
      for (k = 0; k < 29; k++) {
        e_u[k] = cv18[k];
      }

      e_y = NULL;
      m4 = emlrtCreateCharArray(2, iv25);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 29, m4, &e_u
        [0]);
      emlrtAssign(&e_y, m4);
      error(moduleInstance, b_message(moduleInstance, e_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    if (!(obj->filt1 == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &b_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_0->isInitialized = 0;

    /* System object Constructor function: dsp.FIRDecimator */
    iobj_0->cSFunObject.P0_IC = 0.0;
    for (k = 0; k < 65; k++) {
      iobj_0->cSFunObject.P1_FILT[k] = dv2[k];
    }

    obj->filt1 = iobj_0;
    if (!(obj->filt2 == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_1->isInitialized = 0;

    /* System object Constructor function: dsp.FIRRateConverter */
    for (k = 0; k < 120; k++) {
      iobj_1->cSFunObject.P0_FILTER[k] = dv3[k];
    }

    for (k = 0; k < 4; k++) {
      iobj_1->cSFunObject.P1_PolyphaseSelector[k] = k;
    }

    for (k = 0; k < 5; k++) {
      iobj_1->cSFunObject.P2_StartIdx[k] = k;
    }

    for (k = 0; k < 5; k++) {
      iobj_1->cSFunObject.P3_StopIdx[k] = iv26[k];
    }

    obj->filt2 = iobj_1;
    obj->NumChannels = 1.0;
    iobj_0 = obj->filt1;
    if (iobj_0->isInitialized == 2) {
      for (k = 0; k < 45; k++) {
        f_u[k] = cv14[k];
      }

      f_y = NULL;
      m4 = emlrtCreateCharArray(2, iv27);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &f_u
        [0]);
      emlrtAssign(&f_y, m4);
      for (k = 0; k < 5; k++) {
        g_u[k] = cv19[k];
      }

      g_y = NULL;
      m4 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &g_u[0]);
      emlrtAssign(&g_y, m4);
      error(moduleInstance, message(moduleInstance, f_y, g_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (iobj_0->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRDecimator */
      iobj_0->cSFunObject.W2_CoeffIdx = 52;
      iobj_0->cSFunObject.W0_PhaseIdx = 4;
      iobj_0->cSFunObject.W4_TapDelayIndex = 48;
      iobj_0->cSFunObject.W1_Sums = 0.0;
      for (k = 0; k < 60; k++) {
        iobj_0->cSFunObject.W3_StatesBuff[k] = 0.0;
      }
    }

    iobj_1 = obj->filt2;
    if (iobj_1->isInitialized == 2) {
      for (k = 0; k < 45; k++) {
        h_u[k] = cv14[k];
      }

      h_y = NULL;
      m4 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &h_u
        [0]);
      emlrtAssign(&h_y, m4);
      for (k = 0; k < 5; k++) {
        i_u[k] = cv19[k];
      }

      i_y = NULL;
      m4 = emlrtCreateCharArray(2, iv30);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &i_u[0]);
      emlrtAssign(&i_y, m4);
      error(moduleInstance, message(moduleInstance, h_y, i_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (iobj_1->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRRateConverter */
      iobj_1->cSFunObject.W1_InBufIdx = 0;
      for (k = 0; k < 30; k++) {
        iobj_1->cSFunObject.W0_InBuf[k] = 0.0;
      }
    }
  }

  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)inputSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged && (obj->NumChannels != -1.0) && (1.0 !=
       obj->NumChannels)) {
    for (k = 0; k < 29; k++) {
      j_u[k] = cv18[k];
    }

    j_y = NULL;
    m4 = emlrtCreateCharArray(2, iv31);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 29, m4, &j_u[0]);
    emlrtAssign(&j_y, m4);
    error(moduleInstance, b_message(moduleInstance, j_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  SampleRateConverter_stepImpl(moduleInstance, obj, varargin_6, varargout_1);
  for (k = 0; k < 1000; k++) {
    (*moduleInstance->b_y0)[k] = varargout_1[k];
  }
}

static void cgxe_mdl_update(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance)
{
  dsp_SampleRateConverter_2 *obj;
  int32_T i2;
  static char_T cv20[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv21[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv33[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv34[2] = { 1, 45 };

  static char_T cv22[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv35[2] = { 1, 7 };

  dspcodegen_FIRDecimator *b_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv36[2] = { 1, 45 };

  char_T f_u[7];
  const mxArray *f_y;
  static const int32_T iv37[2] = { 1, 7 };

  dspcodegen_FIRRateConverter *c_obj;
  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv38[2] = { 1, 45 };

  char_T h_u[7];
  const mxArray *h_y;
  static const int32_T iv39[2] = { 1, 7 };

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.filt1 = NULL;
    moduleInstance->sysobj.filt2 = NULL;
    obj->isInitialized = 0;
    obj->NumChannels = -1.0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv20[i2];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv32);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (i2 = 0; i2 < 8; i2++) {
      b_u[i2] = cv21[i2];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv33);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
          &c_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i2 = 0; i2 < 45; i2++) {
        c_u[i2] = cv20[i2];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv34);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &c_u
        [0]);
      emlrtAssign(&c_y, m5);
      for (i2 = 0; i2 < 7; i2++) {
        d_u[i2] = cv22[i2];
      }

      d_y = NULL;
      m5 = emlrtCreateCharArray(2, iv35);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m5, &d_u[0]);
      emlrtAssign(&d_y, m5);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      b_obj = obj->filt1;
      if (b_obj->isInitialized == 2) {
        for (i2 = 0; i2 < 45; i2++) {
          e_u[i2] = cv20[i2];
        }

        e_y = NULL;
        m5 = emlrtCreateCharArray(2, iv36);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5,
          &e_u[0]);
        emlrtAssign(&e_y, m5);
        for (i2 = 0; i2 < 7; i2++) {
          f_u[i2] = cv22[i2];
        }

        f_y = NULL;
        m5 = emlrtCreateCharArray(2, iv37);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m5,
          &f_u[0]);
        emlrtAssign(&f_y, m5);
        error(moduleInstance, message(moduleInstance, e_y, f_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (b_obj->isInitialized == 1) {
        b_obj->isInitialized = 2;

        /* System object Destructor function: dsp.FIRDecimator */
      }

      c_obj = obj->filt2;
      if (c_obj->isInitialized == 2) {
        for (i2 = 0; i2 < 45; i2++) {
          g_u[i2] = cv20[i2];
        }

        g_y = NULL;
        m5 = emlrtCreateCharArray(2, iv38);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5,
          &g_u[0]);
        emlrtAssign(&g_y, m5);
        for (i2 = 0; i2 < 7; i2++) {
          h_u[i2] = cv22[i2];
        }

        h_y = NULL;
        m5 = emlrtCreateCharArray(2, iv39);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m5,
          &h_u[0]);
        emlrtAssign(&h_y, m5);
        error(moduleInstance, message(moduleInstance, g_y, h_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (c_obj->isInitialized == 1) {
        c_obj->isInitialized = 2;

        /* System object Destructor function: dsp.FIRRateConverter */
      }

      obj->NumChannels = -1.0;
    }
  }

  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRRateConverter */
  /* System object Destructor function: dsp.FIRRateConverter */
}

static const mxArray *message(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m6, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m7;
  pArray = b;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m7, 1,
    &pArray, "message", true, location);
}

static void init_simulink_io_address(InstanceStruct_UXvEHHrxIcmXaLthmwvduD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->u0 = (real_T (*)[6250])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (real_T (*)[1000])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_UXvEHHrxIcmXaLthmwvduD(SimStruct *S, int_T tid)
{
  InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance =
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_UXvEHHrxIcmXaLthmwvduD(SimStruct *S)
{
  InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance =
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_UXvEHHrxIcmXaLthmwvduD(SimStruct *S, int_T tid)
{
  InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance =
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_UXvEHHrxIcmXaLthmwvduD(SimStruct *S)
{
  InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance =
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_UXvEHHrxIcmXaLthmwvduD(SimStruct *S)
{
  InstanceStruct_UXvEHHrxIcmXaLthmwvduD *moduleInstance =
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD *)calloc(1, sizeof
    (InstanceStruct_UXvEHHrxIcmXaLthmwvduD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);
  ssSetmdlOutputs(S, mdlOutputs_UXvEHHrxIcmXaLthmwvduD);
  ssSetmdlInitializeConditions(S, mdlInitialize_UXvEHHrxIcmXaLthmwvduD);
  ssSetmdlUpdate(S, mdlUpdate_UXvEHHrxIcmXaLthmwvduD);
  ssSetmdlTerminate(S, mdlTerminate_UXvEHHrxIcmXaLthmwvduD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_UXvEHHrxIcmXaLthmwvduD(SimStruct *S)
{
}

void method_dispatcher_UXvEHHrxIcmXaLthmwvduD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_UXvEHHrxIcmXaLthmwvduD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_UXvEHHrxIcmXaLthmwvduD(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: UXvEHHrxIcmXaLthmwvduD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_UXvEHHrxIcmXaLthmwvduD_BuildInfoUpdate(void)
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
