/* Include files */

#include "modelInterface.h"
#include "m_SY2m30lpuXg1s83zafIs8.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */
#define DecimationFactor               (40.0)
#define MinimumOrderDesign             (true)
#define Bandwidth                      (12500.0)
#define StopbandFrequency              (18750.0)
#define PassbandRipple                 (0.05)
#define StopbandAttenuation            (60.0)
#define CenterFrequency                (455000.0)
#define InheritSampleRate              (true)
#define LockScale                      (false)

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo b_emlrtMCI = { 1, 1, "SystemProp",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"
};

static emlrtMCInfo c_emlrtMCI = { 1084, 13, "DigitalDownConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\DigitalDownConverter.m"
};

static emlrtMCInfo d_emlrtMCI = { 200, 13, "ConverterFilterDesignerBase",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\ConverterFilterDesignerBase.m"
};

static emlrtMCInfo e_emlrtMCI = { 1, 1, "SineWave",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\compiled\\+dspcodegen\\SineWave.p"
};

static emlrtRTEInfo emlrtRTEI = { 600, 21, "DigitalConverterBase",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\DigitalConverterBase.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 526, 17, "DownConverterFilterDesigner",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\DownConverterFilterDesigner.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 723, 17, "DownConverterFilterDesigner",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\+private\\DownConverterFilterDesigner.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 1224, 13, "DigitalDownConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\DigitalDownConverter.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1223, 13, "DigitalDownConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\DigitalDownConverter.m"
};

/* Function Declarations */
static void SystemCore_release(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_private_DownConverterFilterDesigner_2 *obj);
static void SystemCore_validateProperties(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj);
static void DigitalDownConverter_stepImpl(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj, real_T x[250000], creal_T y
  [6250]);
static void DigitalDownConverter_getOscillatorSignalFromObject
  (InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
   dsp_DigitalDownConverter_2 *obj, creal_T dataOut[250000]);
static void DigitalDownConverter_mixer(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj, real_T dataIn[250000],
  creal_T oscData[250000], creal_T dataOut[250000]);
static void SystemCore_step(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
  dspcodegen_FIRDecimator_1 *obj, creal_T varargin_1[250000], creal_T
  varargout_1[25000]);
static void b_SystemCore_step(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dspcodegen_FIRDecimator_2 *obj, creal_T varargin_1[25000],
  creal_T varargout_1[12500]);
static void DigitalDownConverter_filterWithThirdStage
  (InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
   dsp_DigitalDownConverter_2 *obj, creal_T dataIn[12500], creal_T dataOut[6250]);
static void cgxe_mdl_start(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance);
static const mxArray *message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void error(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance, const
                  mxArray *c, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, const mxArray *d, const mxArray *e,
  emlrtMCInfo *location);
static const mxArray *c_message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, emlrtMCInfo *location);
static void init_simulink_io_address(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance);

/* Function Definitions */
static void SystemCore_release(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_private_DownConverterFilterDesigner_2 *obj)
{
  int32_T i0;
  static char_T cv0[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  static char_T cv1[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 7 };

  dsp_private_DownConverterFilterDesigner_2 *b_obj;
  dspcodegen_FIRDecimator_1 *c_obj;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 45 };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 7 };

  dspcodegen_FIRDecimator_2 *d_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 45 };

  char_T f_u[7];
  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 7 };

  dspcodegen_FIRDecimator *e_obj;
  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 45 };

  char_T h_u[7];
  const mxArray *h_y;
  static const int32_T iv7[2] = { 1, 7 };

  if (obj->isInitialized == 2) {
    for (i0 = 0; i0 < 45; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 7; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    b_obj = obj;
    c_obj = b_obj->CICFilterSysObj;
    if (c_obj->isInitialized == 2) {
      for (i0 = 0; i0 < 45; i0++) {
        c_u[i0] = cv0[i0];
      }

      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &c_u
        [0]);
      emlrtAssign(&c_y, m0);
      for (i0 = 0; i0 < 7; i0++) {
        d_u[i0] = cv1[i0];
      }

      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m0, &d_u[0]);
      emlrtAssign(&d_y, m0);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (c_obj->isInitialized == 1) {
      c_obj->isInitialized = 2;

      /* System object Destructor function: dsp.FIRDecimator */
    }

    d_obj = b_obj->CICCompFilterSysObj;
    if (d_obj->isInitialized == 2) {
      for (i0 = 0; i0 < 45; i0++) {
        e_u[i0] = cv0[i0];
      }

      e_y = NULL;
      m0 = emlrtCreateCharArray(2, iv4);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &e_u
        [0]);
      emlrtAssign(&e_y, m0);
      for (i0 = 0; i0 < 7; i0++) {
        f_u[i0] = cv1[i0];
      }

      f_y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m0, &f_u[0]);
      emlrtAssign(&f_y, m0);
      error(moduleInstance, message(moduleInstance, e_y, f_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (d_obj->isInitialized == 1) {
      d_obj->isInitialized = 2;

      /* System object Destructor function: dsp.FIRDecimator */
    }

    e_obj = b_obj->Stage3FilterSysObj;
    if (e_obj->isInitialized == 2) {
      for (i0 = 0; i0 < 45; i0++) {
        g_u[i0] = cv0[i0];
      }

      g_y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &g_u
        [0]);
      emlrtAssign(&g_y, m0);
      for (i0 = 0; i0 < 7; i0++) {
        h_u[i0] = cv1[i0];
      }

      h_y = NULL;
      m0 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m0, &h_u[0]);
      emlrtAssign(&h_y, m0);
      error(moduleInstance, message(moduleInstance, g_y, h_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (e_obj->isInitialized == 1) {
      e_obj->isInitialized = 2;

      /* System object Destructor function: dsp.FIRDecimator */
    }
  }
}

static void SystemCore_validateProperties(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj)
{
  dsp_DigitalDownConverter_2 *b_obj;
  real_T c_value;
  int32_T i1;
  static char_T cv2[41] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'D', 'i', 'g', 'i', 't', 'a', 'l', 'D', 'o', 'w', 'n', 'C', 'o', 'n',
    'v', 'e', 'r', 't', 'e', 'r', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'F',
    's' };

  char_T u[41];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 41 };

  const mxArray *m1;
  const mxArray *b_y;
  real_T d_value;
  const mxArray *c_y;
  b_obj = obj;
  c_value = b_obj->pSampleRateInherit;
  if (!(c_value == -1.0)) {
    c_value = b_obj->pSampleRateInherit;
    if (c_value < 910000.0) {
      for (i1 = 0; i1 < 41; i1++) {
        u[i1] = cv2[i1];
      }

      y = NULL;
      m1 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 41, m1, &u[0]);
      emlrtAssign(&y, m1);
      c_value = b_obj->pSampleRateInherit;
      b_y = NULL;
      m1 = emlrtCreateDoubleScalar(muDoubleScalarFloor(c_value / 2.0));
      emlrtAssign(&b_y, m1);
      c_value = b_obj->pSampleRateInherit;
      d_value = b_obj->pSampleRateInherit;
      c_y = NULL;
      m1 = emlrtCreateDoubleScalar(muDoubleScalarRound((c_value / 2.0 -
        muDoubleScalarFloor(d_value / 2.0)) * 10.0));
      emlrtAssign(&c_y, m1);
      error(moduleInstance, b_message(moduleInstance, y, b_y, c_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }
  }
}

static void DigitalDownConverter_stepImpl(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj, real_T x[250000], creal_T y
  [6250])
{
  int32_T i2;
  DigitalDownConverter_getOscillatorSignalFromObject(moduleInstance, obj,
    moduleInstance->w);
  DigitalDownConverter_mixer(moduleInstance, obj, x, moduleInstance->w,
    moduleInstance->s1);
  SystemCore_step(moduleInstance, obj->pCIC, moduleInstance->s1,
                  moduleInstance->s2);
  for (i2 = 0; i2 < 25000; i2++) {
    moduleInstance->b_s2[i2].re = 0.0014152337398375106 * moduleInstance->s2[i2]
      .re;
    moduleInstance->b_s2[i2].im = 0.0014152337398375106 * moduleInstance->s2[i2]
      .im;
  }

  b_SystemCore_step(moduleInstance, obj->pCICComp, moduleInstance->b_s2,
                    moduleInstance->s4);
  DigitalDownConverter_filterWithThirdStage(moduleInstance, obj,
    moduleInstance->s4, y);
}

static void DigitalDownConverter_getOscillatorSignalFromObject
  (InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
   dsp_DigitalDownConverter_2 *obj, creal_T dataOut[250000])
{
  dspcodegen_SineWave *b_obj;
  int32_T j;
  static char_T cv3[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *m2;
  static char_T cv4[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 4 };

  static char_T cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 51 };

  static char_T cv6[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv12[2] = { 1, 5 };

  real_T arg;
  dsp_SineWave_4 *c_obj;
  real_T updateVal;
  b_obj = obj->pOscillator;
  if (b_obj->isInitialized == 2) {
    for (j = 0; j < 45; j++) {
      u[j] = cv3[j];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (j = 0; j < 4; j++) {
      b_u[j] = cv4[j];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    if (b_obj->isInitialized != 0) {
      for (j = 0; j < 51; j++) {
        c_u[j] = cv5[j];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m2, &c_u
        [0]);
      emlrtAssign(&c_y, m2);
      for (j = 0; j < 5; j++) {
        d_u[j] = cv6[j];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Start function: dsp.SineWave */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    for (arg = b_obj->cSFunObject.P2_Phase; arg >= 6.2831853071795862; arg -=
         6.2831853071795862) {
    }

    while (arg < 0.0) {
      arg += 6.2831853071795862;
    }

    b_obj->cSFunObject.W0_AccFreqNorm = arg;
    b_obj->NoTuningBeforeLockingCodeGenError = true;

    /* System object Initialization function: dsp.SineWave */
    /* This code only executes when block is re-enabled in an
       enabled subsystem when the enabled subsystem states on
       re-enabling are set to 'Reset' */
    /* Reset to time zero on re-enable */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    for (arg = b_obj->cSFunObject.P2_Phase; arg >= 6.2831853071795862; arg -=
         6.2831853071795862) {
    }

    while (arg < 0.0) {
      arg += 6.2831853071795862;
    }

    b_obj->cSFunObject.W0_AccFreqNorm = arg;
  }

  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.SineWave */
  updateVal = b_obj->cSFunObject.P1_Frequency * 3.1415926535897933E-6;
  for (j = 0; j < 250000; j++) {
    arg = c_obj->W0_AccFreqNorm;
    dataOut[j].re = c_obj->P0_Amplitude * muDoubleScalarCos(arg);
    dataOut[j].im = c_obj->P0_Amplitude * muDoubleScalarSin(arg);

    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    c_obj->W0_AccFreqNorm += updateVal;
    if (c_obj->W0_AccFreqNorm >= 6.2831853071795862) {
      c_obj->W0_AccFreqNorm -= 6.2831853071795862;
    } else {
      if (c_obj->W0_AccFreqNorm < 0.0) {
        c_obj->W0_AccFreqNorm += 6.2831853071795862;
      }
    }
  }
}

static void DigitalDownConverter_mixer(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dsp_DigitalDownConverter_2 *obj, real_T dataIn[250000],
  creal_T oscData[250000], creal_T dataOut[250000])
{
  int32_T k;
  (void)obj;
  for (k = 0; k < 250000; k++) {
    moduleInstance->b[k].re = oscData[k].re;
    moduleInstance->b[k].im = -oscData[k].im;
    moduleInstance->bv[k].re = moduleInstance->b[k].re;
    moduleInstance->bv[k].im = moduleInstance->b[k].im;
    moduleInstance->bv[k].re *= dataIn[k];
    moduleInstance->bv[k].im *= dataIn[k];
    dataOut[k].re = moduleInstance->bv[k].re;
    dataOut[k].im = moduleInstance->bv[k].im;
  }
}

static void SystemCore_step(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
  dspcodegen_FIRDecimator_1 *obj, creal_T varargin_1[250000], creal_T
  varargout_1[25000])
{
  int32_T inputIdx;
  static char_T cv7[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *m3;
  static char_T cv8[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 4 };

  dspcodegen_FIRDecimator_1 *b_obj;
  static char_T cv9[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 51 };

  static char_T cv10[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 5 };

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
      u[inputIdx] = cv7[inputIdx];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (inputIdx = 0; inputIdx < 4; inputIdx++) {
      b_u[inputIdx] = cv8[inputIdx];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_obj = obj;
    if (b_obj->isInitialized != 0) {
      for (inputIdx = 0; inputIdx < 51; inputIdx++) {
        c_u[inputIdx] = cv9[inputIdx];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m3, &c_u
        [0]);
      emlrtAssign(&c_y, m3);
      for (inputIdx = 0; inputIdx < 5; inputIdx++) {
        d_u[inputIdx] = cv10[inputIdx];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRDecimator */
    b_obj->cSFunObject.W2_CoeffIdx = 27;
    b_obj->cSFunObject.W0_PhaseIdx = 9;
    b_obj->cSFunObject.W4_TapDelayIndex = 18;
    b_obj->cSFunObject.W1_Sums.re = 0.0;
    b_obj->cSFunObject.W1_Sums.im = 0.0;
    for (inputIdx = 0; inputIdx < 20; inputIdx++) {
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].re = 0.0;
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].im = 0.0;
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
  maxWindow = (phaseIdx + 1) << 1;
  for (iIdx = 0; iIdx < 250000; iIdx++) {
    c_obj->W1_Sums.re += varargin_1[inputIdx].re * c_obj->P1_FILT[cffIdx];
    c_obj->W1_Sums.im += varargin_1[inputIdx].im * c_obj->P1_FILT[cffIdx];
    cffIdx++;
    for (jIdx = curTapIdx + 1; jIdx < maxWindow; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    for (jIdx = maxWindow - 2; jIdx <= curTapIdx; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    c_obj->W3_StatesBuff[curTapIdx].re = varargin_1[inputIdx].re;
    c_obj->W3_StatesBuff[curTapIdx].im = varargin_1[inputIdx].im;
    inputIdx++;
    curTapIdx += 2;
    if (curTapIdx >= 20) {
      curTapIdx -= 20;
    }

    phaseIdx++;
    if (phaseIdx < 10) {
      maxWindow += 2;
    } else {
      c_obj->O0_Y0[outBufIdx].re = c_obj->W1_Sums.re;
      c_obj->O0_Y0[outBufIdx].im = c_obj->W1_Sums.im;
      outBufIdx++;
      c_obj->W1_Sums.re = 0.0;
      c_obj->W1_Sums.im = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
      curTapIdx--;
      if (curTapIdx < 0) {
        curTapIdx += 2;
      }

      maxWindow = 2;
    }
  }

  b_obj->cSFunObject.W4_TapDelayIndex = curTapIdx;
  b_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  b_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (inputIdx = 0; inputIdx < 25000; inputIdx++) {
    varargout_1[inputIdx].re = b_obj->cSFunObject.O0_Y0[inputIdx].re;
    varargout_1[inputIdx].im = b_obj->cSFunObject.O0_Y0[inputIdx].im;
  }
}

static void b_SystemCore_step(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, dspcodegen_FIRDecimator_2 *obj, creal_T varargin_1[25000],
  creal_T varargout_1[12500])
{
  int32_T inputIdx;
  static char_T cv11[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv12[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 4 };

  dspcodegen_FIRDecimator_2 *b_obj;
  static char_T cv13[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 51 };

  static char_T cv14[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 5 };

  dsp_FIRDecimator_1 *c_obj;
  int32_T curTapIdx;
  int32_T phaseIdx;
  int32_T cffIdx;
  int32_T outBufIdx;
  int32_T maxWindow;
  int32_T iIdx;
  int32_T jIdx;
  if (obj->isInitialized == 2) {
    for (inputIdx = 0; inputIdx < 45; inputIdx++) {
      u[inputIdx] = cv11[inputIdx];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (inputIdx = 0; inputIdx < 4; inputIdx++) {
      b_u[inputIdx] = cv12[inputIdx];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_obj = obj;
    if (b_obj->isInitialized != 0) {
      for (inputIdx = 0; inputIdx < 51; inputIdx++) {
        c_u[inputIdx] = cv13[inputIdx];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m4, &c_u
        [0]);
      emlrtAssign(&c_y, m4);
      for (inputIdx = 0; inputIdx < 5; inputIdx++) {
        d_u[inputIdx] = cv14[inputIdx];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRDecimator */
    b_obj->cSFunObject.W2_CoeffIdx = 4;
    b_obj->cSFunObject.W0_PhaseIdx = 1;
    b_obj->cSFunObject.W4_TapDelayIndex = 3;
    b_obj->cSFunObject.W1_Sums.re = 0.0;
    b_obj->cSFunObject.W1_Sums.im = 0.0;
    for (inputIdx = 0; inputIdx < 6; inputIdx++) {
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].re = 0.0;
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].im = 0.0;
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
  maxWindow = (phaseIdx + 1) * 3;
  for (iIdx = 0; iIdx < 25000; iIdx++) {
    c_obj->W1_Sums.re += varargin_1[inputIdx].re * c_obj->P1_FILT[cffIdx];
    c_obj->W1_Sums.im += varargin_1[inputIdx].im * c_obj->P1_FILT[cffIdx];
    cffIdx++;
    for (jIdx = curTapIdx + 1; jIdx < maxWindow; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    for (jIdx = maxWindow - 3; jIdx <= curTapIdx; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    c_obj->W3_StatesBuff[curTapIdx].re = varargin_1[inputIdx].re;
    c_obj->W3_StatesBuff[curTapIdx].im = varargin_1[inputIdx].im;
    inputIdx++;
    curTapIdx += 3;
    if (curTapIdx >= 6) {
      curTapIdx -= 6;
    }

    phaseIdx++;
    if (phaseIdx < 2) {
      maxWindow += 3;
    } else {
      c_obj->O0_Y0[outBufIdx].re = c_obj->W1_Sums.re;
      c_obj->O0_Y0[outBufIdx].im = c_obj->W1_Sums.im;
      outBufIdx++;
      c_obj->W1_Sums.re = 0.0;
      c_obj->W1_Sums.im = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
      curTapIdx--;
      if (curTapIdx < 0) {
        curTapIdx += 3;
      }

      maxWindow = 3;
    }
  }

  b_obj->cSFunObject.W4_TapDelayIndex = curTapIdx;
  b_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  b_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (inputIdx = 0; inputIdx < 12500; inputIdx++) {
    varargout_1[inputIdx].re = b_obj->cSFunObject.O0_Y0[inputIdx].re;
    varargout_1[inputIdx].im = b_obj->cSFunObject.O0_Y0[inputIdx].im;
  }
}

static void DigitalDownConverter_filterWithThirdStage
  (InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance,
   dsp_DigitalDownConverter_2 *obj, creal_T dataIn[12500], creal_T dataOut[6250])
{
  dspcodegen_FIRDecimator *b_obj;
  int32_T inputIdx;
  static char_T cv15[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv16[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 4 };

  static char_T cv17[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv23[2] = { 1, 51 };

  static char_T cv18[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv24[2] = { 1, 5 };

  dsp_FIRDecimator_2 *c_obj;
  int32_T curTapIdx;
  int32_T phaseIdx;
  int32_T cffIdx;
  int32_T outBufIdx;
  int32_T maxWindow;
  int32_T iIdx;
  int32_T jIdx;
  b_obj = obj->pStage3;
  if (b_obj->isInitialized == 2) {
    for (inputIdx = 0; inputIdx < 45; inputIdx++) {
      u[inputIdx] = cv15[inputIdx];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (inputIdx = 0; inputIdx < 4; inputIdx++) {
      b_u[inputIdx] = cv16[inputIdx];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    if (b_obj->isInitialized != 0) {
      for (inputIdx = 0; inputIdx < 51; inputIdx++) {
        c_u[inputIdx] = cv17[inputIdx];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m5, &c_u
        [0]);
      emlrtAssign(&c_y, m5);
      for (inputIdx = 0; inputIdx < 5; inputIdx++) {
        d_u[inputIdx] = cv18[inputIdx];
      }

      d_y = NULL;
      m5 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m5, &d_u[0]);
      emlrtAssign(&d_y, m5);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRDecimator */
    b_obj->cSFunObject.W2_CoeffIdx = 12;
    b_obj->cSFunObject.W0_PhaseIdx = 1;
    b_obj->cSFunObject.W4_TapDelayIndex = 11;
    b_obj->cSFunObject.W1_Sums.re = 0.0;
    b_obj->cSFunObject.W1_Sums.im = 0.0;
    for (inputIdx = 0; inputIdx < 22; inputIdx++) {
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].re = 0.0;
      b_obj->cSFunObject.W3_StatesBuff[inputIdx].im = 0.0;
    }
  }

  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.FIRDecimator */
  inputIdx = 0;
  curTapIdx = b_obj->cSFunObject.W4_TapDelayIndex;
  phaseIdx = b_obj->cSFunObject.W0_PhaseIdx;
  cffIdx = b_obj->cSFunObject.W2_CoeffIdx;
  outBufIdx = 0;
  maxWindow = (phaseIdx + 1) * 11;
  for (iIdx = 0; iIdx < 12500; iIdx++) {
    c_obj->W1_Sums.re += dataIn[inputIdx].re * c_obj->P1_FILT[cffIdx];
    c_obj->W1_Sums.im += dataIn[inputIdx].im * c_obj->P1_FILT[cffIdx];
    cffIdx++;
    for (jIdx = curTapIdx + 1; jIdx < maxWindow; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    for (jIdx = maxWindow - 11; jIdx <= curTapIdx; jIdx++) {
      c_obj->W1_Sums.re += c_obj->W3_StatesBuff[jIdx].re * c_obj->P1_FILT[cffIdx];
      c_obj->W1_Sums.im += c_obj->W3_StatesBuff[jIdx].im * c_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    c_obj->W3_StatesBuff[curTapIdx].re = dataIn[inputIdx].re;
    c_obj->W3_StatesBuff[curTapIdx].im = dataIn[inputIdx].im;
    inputIdx++;
    curTapIdx += 11;
    if (curTapIdx >= 22) {
      curTapIdx -= 22;
    }

    phaseIdx++;
    if (phaseIdx < 2) {
      maxWindow += 11;
    } else {
      c_obj->O0_Y0[outBufIdx].re = c_obj->W1_Sums.re;
      c_obj->O0_Y0[outBufIdx].im = c_obj->W1_Sums.im;
      outBufIdx++;
      c_obj->W1_Sums.re = 0.0;
      c_obj->W1_Sums.im = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
      curTapIdx--;
      if (curTapIdx < 0) {
        curTapIdx += 11;
      }

      maxWindow = 11;
    }
  }

  b_obj->cSFunObject.W4_TapDelayIndex = curTapIdx;
  b_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  b_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (inputIdx = 0; inputIdx < 6250; inputIdx++) {
    dataOut[inputIdx].re = b_obj->cSFunObject.O0_Y0[inputIdx].re;
    dataOut[inputIdx].im = b_obj->cSFunObject.O0_Y0[inputIdx].im;
  }
}

static void cgxe_mdl_start(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance)
{
  dsp_DigitalDownConverter_2 *obj;
  dsp_private_DownConverterFilterDesigner_2 *b_obj;
  int32_T i3;
  static char_T cv19[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *m6;
  static char_T cv20[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv26[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv27[2] = { 1, 45 };

  char_T d_u[8];
  const mxArray *d_y;
  static const int32_T iv28[2] = { 1, 8 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv29[2] = { 1, 45 };

  char_T f_u[8];
  const mxArray *f_y;
  static const int32_T iv30[2] = { 1, 8 };

  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv31[2] = { 1, 45 };

  char_T h_u[8];
  const mxArray *h_y;
  static const int32_T iv32[2] = { 1, 8 };

  char_T i_u[45];
  const mxArray *i_y;
  static const int32_T iv33[2] = { 1, 45 };

  char_T j_u[8];
  const mxArray *j_y;
  static const int32_T iv34[2] = { 1, 8 };

  char_T k_u[45];
  const mxArray *k_y;
  static const int32_T iv35[2] = { 1, 45 };

  char_T l_u[8];
  const mxArray *l_y;
  static const int32_T iv36[2] = { 1, 8 };

  char_T m_u[45];
  const mxArray *m_y;
  static const int32_T iv37[2] = { 1, 45 };

  char_T n_u[8];
  const mxArray *n_y;
  static const int32_T iv38[2] = { 1, 8 };

  dspcodegen_FIRDecimator_1 *iobj_0;
  dspcodegen_FIRDecimator_2 *iobj_1;
  dspcodegen_SineWave *iobj_2;
  dspcodegen_FIRDecimator *iobj_3;
  static char_T cv21[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T o_u[51];
  const mxArray *o_y;
  static const int32_T iv39[2] = { 1, 51 };

  static char_T cv22[5] = { 's', 'e', 't', 'u', 'p' };

  char_T p_u[5];
  const mxArray *p_y;
  static const int32_T iv40[2] = { 1, 5 };

  real_T c_value;
  char_T q_u[45];
  const mxArray *q_y;
  static const int32_T iv41[2] = { 1, 45 };

  char_T r_u[8];
  const mxArray *r_y;
  static const int32_T iv42[2] = { 1, 8 };

  char_T s_u[45];
  const mxArray *s_y;
  static const int32_T iv43[2] = { 1, 45 };

  char_T t_u[8];
  const mxArray *t_y;
  static const int32_T iv44[2] = { 1, 8 };

  char_T u_u[45];
  const mxArray *u_y;
  static const int32_T iv45[2] = { 1, 45 };

  static char_T cv23[4] = { 's', 't', 'e', 'p' };

  char_T v_u[4];
  const mxArray *v_y;
  static const int32_T iv46[2] = { 1, 4 };

  char_T w_u[51];
  const mxArray *w_y;
  static const int32_T iv47[2] = { 1, 51 };

  char_T x_u[5];
  const mxArray *x_y;
  static const int32_T iv48[2] = { 1, 5 };

  static int8_T iv49[30] = { 55, 45, 0, 45, 55, 0, 36, 63, 1, 28, 69, 3, 21, 73,
    6, 15, 75, 10, 10, 75, 15, 6, 73, 21, 3, 69, 28, 1, 63, 36 };

  static real_T dv0[8] = { -0.030073796276627932, 0.41166712823102658,
    0.14422449671037652, -0.02515621465651173, -0.02515621465651173,
    0.14422449671037652, 0.41166712823102658, -0.030073796276627932 };

  static real_T dv1[24] = { 0.0053777350101162618, 0.0021758145508227675,
    -0.026560575028591077, -0.015497096389893441, 0.110577428440347,
    0.23642949586506573, 0.18763665306904825, 0.034989572161314472,
    -0.033309447013256915, -0.010533216321043946, 0.006807957676722055,
    0.0023126179583034243, 0.0023126179583034243, 0.006807957676722055,
    -0.010533216321043946, -0.033309447013256915, 0.034989572161314472,
    0.18763665306904825, 0.23642949586506573, 0.110577428440347,
    -0.015497096389893441, -0.026560575028591077, 0.0021758145508227675,
    0.0053777350101162618 };

  char_T y_u[45];
  const mxArray *y_y;
  static const int32_T iv50[2] = { 1, 45 };

  char_T ab_u[8];
  const mxArray *ab_y;
  static const int32_T iv51[2] = { 1, 8 };

  static char_T cv24[49] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'D', 'i', 'g', 'i', 't', 'a', 'l', 'D', 'o', 'w', 'n', 'C', 'o', 'n',
    'v', 'e', 'r', 't', 'e', 'r', ':', 'n', 'o', 'D', 'e', 's', 'i', 'g', 'n',
    'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e' };

  char_T bb_u[49];
  const mxArray *bb_y;
  static const int32_T iv52[2] = { 1, 49 };

  static char_T cv25[42] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'n', 'o', 'T', 'u', 'n', 'i', 'n', 'g', 'B', 'e', 'f',
    'o', 'r', 'e', 'L', 'o', 'c', 'k', 'i', 'n', 'g', 'C', 'o', 'd', 'e', 'G',
    'e', 'n' };

  char_T cb_u[42];
  const mxArray *cb_y;
  static const int32_T iv53[2] = { 1, 42 };

  char_T db_u[45];
  const mxArray *db_y;
  static const int32_T iv54[2] = { 1, 45 };

  char_T eb_u[8];
  const mxArray *eb_y;
  static const int32_T iv55[2] = { 1, 8 };

  char_T fb_u[49];
  const mxArray *fb_y;
  static const int32_T iv56[2] = { 1, 49 };

  init_simulink_io_address(moduleInstance);
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.pCIC = NULL;
    moduleInstance->sysobj.pCICComp = NULL;
    moduleInstance->sysobj.pOscillator = NULL;
    moduleInstance->sysobj.pSampleRateInherit = -1.0;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->gobj_6.CICFilterSysObj = NULL;
    moduleInstance->gobj_6.CICCompFilterSysObj = NULL;
    moduleInstance->gobj_6.isInitialized = 0;
    moduleInstance->sysobj.pFilterDesigner = &moduleInstance->gobj_6;
    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        u[i3] = cv19[i3];
      }

      y = NULL;
      m6 = emlrtCreateCharArray(2, iv25);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &u[0]);
      emlrtAssign(&y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        b_u[i3] = cv20[i3];
      }

      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv26);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &b_u[0]);
      emlrtAssign(&b_y, m6);
      error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        c_u[i3] = cv19[i3];
      }

      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv27);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &c_u
        [0]);
      emlrtAssign(&c_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        d_u[i3] = cv20[i3];
      }

      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &d_u[0]);
      emlrtAssign(&d_y, m6);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        e_u[i3] = cv19[i3];
      }

      e_y = NULL;
      m6 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &e_u
        [0]);
      emlrtAssign(&e_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        f_u[i3] = cv20[i3];
      }

      f_y = NULL;
      m6 = emlrtCreateCharArray(2, iv30);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &f_u[0]);
      emlrtAssign(&f_y, m6);
      error(moduleInstance, message(moduleInstance, e_y, f_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        g_u[i3] = cv19[i3];
      }

      g_y = NULL;
      m6 = emlrtCreateCharArray(2, iv31);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &g_u
        [0]);
      emlrtAssign(&g_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        h_u[i3] = cv20[i3];
      }

      h_y = NULL;
      m6 = emlrtCreateCharArray(2, iv32);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &h_u[0]);
      emlrtAssign(&h_y, m6);
      error(moduleInstance, message(moduleInstance, g_y, h_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        i_u[i3] = cv19[i3];
      }

      i_y = NULL;
      m6 = emlrtCreateCharArray(2, iv33);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &i_u
        [0]);
      emlrtAssign(&i_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        j_u[i3] = cv20[i3];
      }

      j_y = NULL;
      m6 = emlrtCreateCharArray(2, iv34);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &j_u[0]);
      emlrtAssign(&j_y, m6);
      error(moduleInstance, message(moduleInstance, i_y, j_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        k_u[i3] = cv19[i3];
      }

      k_y = NULL;
      m6 = emlrtCreateCharArray(2, iv35);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &k_u
        [0]);
      emlrtAssign(&k_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        l_u[i3] = cv20[i3];
      }

      l_y = NULL;
      m6 = emlrtCreateCharArray(2, iv36);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &l_u[0]);
      emlrtAssign(&l_y, m6);
      error(moduleInstance, message(moduleInstance, k_y, l_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        m_u[i3] = cv19[i3];
      }

      m_y = NULL;
      m6 = emlrtCreateCharArray(2, iv37);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &m_u
        [0]);
      emlrtAssign(&m_y, m6);
      for (i3 = 0; i3 < 8; i3++) {
        n_u[i3] = cv20[i3];
      }

      n_y = NULL;
      m6 = emlrtCreateCharArray(2, iv38);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &n_u[0]);
      emlrtAssign(&n_y, m6);
      error(moduleInstance, message(moduleInstance, m_y, n_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }
  }

  obj = &moduleInstance->sysobj;
  iobj_0 = &moduleInstance->gobj_0;
  iobj_1 = &moduleInstance->gobj_2;
  iobj_2 = &moduleInstance->gobj_4;
  iobj_3 = &moduleInstance->gobj_10;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i3 = 0; i3 < 51; i3++) {
      o_u[i3] = cv21[i3];
    }

    o_y = NULL;
    m6 = emlrtCreateCharArray(2, iv39);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m6, &o_u[0]);
    emlrtAssign(&o_y, m6);
    for (i3 = 0; i3 < 5; i3++) {
      p_u[i3] = cv22[i3];
    }

    p_y = NULL;
    m6 = emlrtCreateCharArray(2, iv40);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m6, &p_u[0]);
    emlrtAssign(&p_y, m6);
    error(moduleInstance, message(moduleInstance, o_y, p_y, &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  SystemCore_validateProperties(moduleInstance, obj);
  c_value = obj->pSampleRateInherit;
  obj->pSampleRateInherit = 2.0E+6;
  b_obj = obj->pFilterDesigner;
  if (b_obj->isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      q_u[i3] = cv19[i3];
    }

    q_y = NULL;
    m6 = emlrtCreateCharArray(2, iv41);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &q_u[0]);
    emlrtAssign(&q_y, m6);
    for (i3 = 0; i3 < 8; i3++) {
      r_u[i3] = cv20[i3];
    }

    r_y = NULL;
    m6 = emlrtCreateCharArray(2, iv42);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &r_u[0]);
    emlrtAssign(&r_y, m6);
    error(moduleInstance, message(moduleInstance, q_y, r_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (b_obj->isInitialized == 1);
  if (flag) {
    SystemCore_release(moduleInstance, obj->pFilterDesigner);
  }

  if (c_value == -1.0) {
    SystemCore_validateProperties(moduleInstance, obj);
  }

  b_obj = obj->pFilterDesigner;
  if (b_obj->isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      s_u[i3] = cv19[i3];
    }

    s_y = NULL;
    m6 = emlrtCreateCharArray(2, iv43);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &s_u[0]);
    emlrtAssign(&s_y, m6);
    for (i3 = 0; i3 < 8; i3++) {
      t_u[i3] = cv20[i3];
    }

    t_y = NULL;
    m6 = emlrtCreateCharArray(2, iv44);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &t_u[0]);
    emlrtAssign(&t_y, m6);
    error(moduleInstance, message(moduleInstance, s_y, t_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (b_obj->isInitialized == 1);
  if (flag) {
    SystemCore_release(moduleInstance, obj->pFilterDesigner);
  }

  b_obj = obj->pFilterDesigner;
  if (b_obj->isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      u_u[i3] = cv19[i3];
    }

    u_y = NULL;
    m6 = emlrtCreateCharArray(2, iv45);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &u_u[0]);
    emlrtAssign(&u_y, m6);
    for (i3 = 0; i3 < 4; i3++) {
      v_u[i3] = cv23[i3];
    }

    v_y = NULL;
    m6 = emlrtCreateCharArray(2, iv46);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m6, &v_u[0]);
    emlrtAssign(&v_y, m6);
    error(moduleInstance, message(moduleInstance, u_y, v_y, &emlrtMCI),
          &emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    if (b_obj->isInitialized != 0) {
      for (i3 = 0; i3 < 51; i3++) {
        w_u[i3] = cv21[i3];
      }

      w_y = NULL;
      m6 = emlrtCreateCharArray(2, iv47);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m6, &w_u
        [0]);
      emlrtAssign(&w_y, m6);
      for (i3 = 0; i3 < 5; i3++) {
        x_u[i3] = cv22[i3];
      }

      x_y = NULL;
      m6 = emlrtCreateCharArray(2, iv48);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m6, &x_u[0]);
      emlrtAssign(&x_y, m6);
      error(moduleInstance, message(moduleInstance, w_y, x_y, &emlrtMCI),
            &emlrtMCI);
    }

    b_obj->isInitialized = 1;
    if (!(b_obj->CICFilterSysObj == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &b_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_0->isInitialized = 0;

    /* System object Constructor function: dsp.FIRDecimator */
    iobj_0->cSFunObject.P0_IC.re = 0.0;
    iobj_0->cSFunObject.P0_IC.im = 0.0;
    for (i3 = 0; i3 < 30; i3++) {
      iobj_0->cSFunObject.P1_FILT[i3] = (real_T)iv49[i3];
    }

    b_obj->CICFilterSysObj = iobj_0;
    if (!(b_obj->CICCompFilterSysObj == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &c_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_1->isInitialized = 0;

    /* System object Constructor function: dsp.FIRDecimator */
    iobj_1->cSFunObject.P0_IC.re = 0.0;
    iobj_1->cSFunObject.P0_IC.im = 0.0;
    for (i3 = 0; i3 < 8; i3++) {
      iobj_1->cSFunObject.P1_FILT[i3] = dv0[i3];
    }

    b_obj->CICCompFilterSysObj = iobj_1;
    iobj_3->isInitialized = 0;

    /* System object Constructor function: dsp.FIRDecimator */
    iobj_3->cSFunObject.P0_IC.re = 0.0;
    iobj_3->cSFunObject.P0_IC.im = 0.0;
    for (i3 = 0; i3 < 24; i3++) {
      iobj_3->cSFunObject.P1_FILT[i3] = dv1[i3];
    }

    b_obj->Stage3FilterSysObj = iobj_3;
  }

  if (!(obj->pCIC == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
      &e_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
  }

  obj->pCIC = obj->pFilterDesigner->CICFilterSysObj;
  if (!(obj->pCICComp == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
      &d_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
  }

  obj->pCICComp = obj->pFilterDesigner->CICCompFilterSysObj;
  obj->pStage3 = obj->pFilterDesigner->Stage3FilterSysObj;
  b_obj = obj->pFilterDesigner;
  if (b_obj->isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      y_u[i3] = cv19[i3];
    }

    y_y = NULL;
    m6 = emlrtCreateCharArray(2, iv50);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &y_u[0]);
    emlrtAssign(&y_y, m6);
    for (i3 = 0; i3 < 8; i3++) {
      ab_u[i3] = cv20[i3];
    }

    ab_y = NULL;
    m6 = emlrtCreateCharArray(2, iv51);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &ab_u[0]);
    emlrtAssign(&ab_y, m6);
    error(moduleInstance, message(moduleInstance, y_y, ab_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (b_obj->isInitialized == 1);
  if (!flag) {
    for (i3 = 0; i3 < 49; i3++) {
      bb_u[i3] = cv24[i3];
    }

    bb_y = NULL;
    m6 = emlrtCreateCharArray(2, iv52);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m6, &bb_u[0]);
    emlrtAssign(&bb_y, m6);
    error(moduleInstance, c_message(moduleInstance, bb_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  for (i3 = 0; i3 < 25000; i3++) {
    obj->pInitCICNormOutput[i3].re = 0.0;
    obj->pInitCICNormOutput[i3].im = 0.0;
  }

  for (i3 = 0; i3 < 250000; i3++) {
    obj->pInitMixerOutput[i3].re = 0.0;
    obj->pInitMixerOutput[i3].im = 0.0;
  }

  for (i3 = 0; i3 < 250000; i3++) {
    obj->pInitOscillatorOutput[i3].re = 0.0;
    obj->pInitOscillatorOutput[i3].im = 0.0;
  }

  if (!(obj->pOscillator == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal, &emlrtRTEI,
      "EMLRT:runTime:NontunableHandleProp", 0);
  }

  iobj_2->isInitialized = 0;
  iobj_2->NoTuningBeforeLockingCodeGenError = true;

  /* System object Constructor function: dsp.SineWave */
  iobj_2->cSFunObject.P0_Amplitude = 1.0;
  iobj_2->cSFunObject.P1_Frequency = 455000.0;
  iobj_2->cSFunObject.P2_Phase = 0.0;
  if (!iobj_2->NoTuningBeforeLockingCodeGenError) {
    for (i3 = 0; i3 < 42; i3++) {
      cb_u[i3] = cv25[i3];
    }

    cb_y = NULL;
    m6 = emlrtCreateCharArray(2, iv53);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 42, m6, &cb_u[0]);
    emlrtAssign(&cb_y, m6);
    error(moduleInstance, c_message(moduleInstance, cb_y, &e_emlrtMCI),
          &e_emlrtMCI);
  }

  iobj_2->cSFunObject.P0_Amplitude = 1.0;
  iobj_2->NoTuningBeforeLockingCodeGenError = false;
  obj->pOscillator = iobj_2;
  obj->pIsOscillatorDesigned = true;
  b_obj = obj->pFilterDesigner;
  if (b_obj->isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      db_u[i3] = cv19[i3];
    }

    db_y = NULL;
    m6 = emlrtCreateCharArray(2, iv54);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &db_u[0]);
    emlrtAssign(&db_y, m6);
    for (i3 = 0; i3 < 8; i3++) {
      eb_u[i3] = cv20[i3];
    }

    eb_y = NULL;
    m6 = emlrtCreateCharArray(2, iv55);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m6, &eb_u[0]);
    emlrtAssign(&eb_y, m6);
    error(moduleInstance, message(moduleInstance, db_y, eb_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (b_obj->isInitialized == 1);
  if (!flag) {
    for (i3 = 0; i3 < 49; i3++) {
      fb_u[i3] = cv24[i3];
    }

    fb_y = NULL;
    m6 = emlrtCreateCharArray(2, iv56);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m6, &fb_u[0]);
    emlrtAssign(&fb_y, m6);
    error(moduleInstance, c_message(moduleInstance, fb_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }
}

static void cgxe_mdl_initialize(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance)
{
  dsp_DigitalDownConverter_2 *obj;
  dsp_private_DownConverterFilterDesigner_2 *b_obj;
  int32_T i4;
  static char_T cv26[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv57[2] = { 1, 45 };

  const mxArray *m7;
  static char_T cv27[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv58[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv59[2] = { 1, 45 };

  char_T d_u[8];
  const mxArray *d_y;
  static const int32_T iv60[2] = { 1, 8 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv61[2] = { 1, 45 };

  char_T f_u[8];
  const mxArray *f_y;
  static const int32_T iv62[2] = { 1, 8 };

  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv63[2] = { 1, 45 };

  char_T h_u[8];
  const mxArray *h_y;
  static const int32_T iv64[2] = { 1, 8 };

  char_T i_u[45];
  const mxArray *i_y;
  static const int32_T iv65[2] = { 1, 45 };

  char_T j_u[8];
  const mxArray *j_y;
  static const int32_T iv66[2] = { 1, 8 };

  char_T k_u[45];
  const mxArray *k_y;
  static const int32_T iv67[2] = { 1, 45 };

  char_T l_u[8];
  const mxArray *l_y;
  static const int32_T iv68[2] = { 1, 8 };

  char_T m_u[45];
  const mxArray *m_y;
  static const int32_T iv69[2] = { 1, 45 };

  char_T n_u[8];
  const mxArray *n_y;
  static const int32_T iv70[2] = { 1, 8 };

  char_T o_u[45];
  const mxArray *o_y;
  static const int32_T iv71[2] = { 1, 45 };

  char_T p_u[8];
  const mxArray *p_y;
  static const int32_T iv72[2] = { 1, 8 };

  char_T q_u[45];
  const mxArray *q_y;
  static const int32_T iv73[2] = { 1, 45 };

  static char_T cv28[5] = { 'r', 'e', 's', 'e', 't' };

  char_T r_u[5];
  const mxArray *r_y;
  static const int32_T iv74[2] = { 1, 5 };

  dspcodegen_FIRDecimator_1 *c_obj;
  char_T s_u[45];
  const mxArray *s_y;
  static const int32_T iv75[2] = { 1, 45 };

  char_T t_u[5];
  const mxArray *t_y;
  static const int32_T iv76[2] = { 1, 5 };

  dspcodegen_FIRDecimator_2 *d_obj;
  char_T u_u[45];
  const mxArray *u_y;
  static const int32_T iv77[2] = { 1, 45 };

  char_T v_u[5];
  const mxArray *v_y;
  static const int32_T iv78[2] = { 1, 5 };

  char_T w_u[45];
  const mxArray *w_y;
  static const int32_T iv79[2] = { 1, 45 };

  char_T x_u[8];
  const mxArray *x_y;
  static const int32_T iv80[2] = { 1, 8 };

  static char_T cv29[49] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'D', 'i', 'g', 'i', 't', 'a', 'l', 'D', 'o', 'w', 'n', 'C', 'o', 'n',
    'v', 'e', 'r', 't', 'e', 'r', ':', 'n', 'o', 'D', 'e', 's', 'i', 'g', 'n',
    'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e' };

  char_T y_u[49];
  const mxArray *y_y;
  static const int32_T iv81[2] = { 1, 49 };

  dspcodegen_FIRDecimator *e_obj;
  char_T ab_u[45];
  const mxArray *ab_y;
  static const int32_T iv82[2] = { 1, 45 };

  char_T bb_u[5];
  const mxArray *bb_y;
  static const int32_T iv83[2] = { 1, 5 };

  dspcodegen_SineWave *f_obj;
  char_T cb_u[45];
  const mxArray *cb_y;
  static const int32_T iv84[2] = { 1, 45 };

  char_T db_u[5];
  const mxArray *db_y;
  static const int32_T iv85[2] = { 1, 5 };

  real_T arg;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.pCIC = NULL;
    moduleInstance->sysobj.pCICComp = NULL;
    moduleInstance->sysobj.pOscillator = NULL;
    moduleInstance->sysobj.pSampleRateInherit = -1.0;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->gobj_7.CICFilterSysObj = NULL;
    moduleInstance->gobj_7.CICCompFilterSysObj = NULL;
    moduleInstance->gobj_7.isInitialized = 0;
    moduleInstance->sysobj.pFilterDesigner = &moduleInstance->gobj_7;
    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        u[i4] = cv26[i4];
      }

      y = NULL;
      m7 = emlrtCreateCharArray(2, iv57);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &u[0]);
      emlrtAssign(&y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        b_u[i4] = cv27[i4];
      }

      b_y = NULL;
      m7 = emlrtCreateCharArray(2, iv58);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &b_u[0]);
      emlrtAssign(&b_y, m7);
      error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        c_u[i4] = cv26[i4];
      }

      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv59);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &c_u
        [0]);
      emlrtAssign(&c_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        d_u[i4] = cv27[i4];
      }

      d_y = NULL;
      m7 = emlrtCreateCharArray(2, iv60);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &d_u[0]);
      emlrtAssign(&d_y, m7);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        e_u[i4] = cv26[i4];
      }

      e_y = NULL;
      m7 = emlrtCreateCharArray(2, iv61);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &e_u
        [0]);
      emlrtAssign(&e_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        f_u[i4] = cv27[i4];
      }

      f_y = NULL;
      m7 = emlrtCreateCharArray(2, iv62);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &f_u[0]);
      emlrtAssign(&f_y, m7);
      error(moduleInstance, message(moduleInstance, e_y, f_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        g_u[i4] = cv26[i4];
      }

      g_y = NULL;
      m7 = emlrtCreateCharArray(2, iv63);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &g_u
        [0]);
      emlrtAssign(&g_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        h_u[i4] = cv27[i4];
      }

      h_y = NULL;
      m7 = emlrtCreateCharArray(2, iv64);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &h_u[0]);
      emlrtAssign(&h_y, m7);
      error(moduleInstance, message(moduleInstance, g_y, h_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        i_u[i4] = cv26[i4];
      }

      i_y = NULL;
      m7 = emlrtCreateCharArray(2, iv65);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &i_u
        [0]);
      emlrtAssign(&i_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        j_u[i4] = cv27[i4];
      }

      j_y = NULL;
      m7 = emlrtCreateCharArray(2, iv66);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &j_u[0]);
      emlrtAssign(&j_y, m7);
      error(moduleInstance, message(moduleInstance, i_y, j_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        k_u[i4] = cv26[i4];
      }

      k_y = NULL;
      m7 = emlrtCreateCharArray(2, iv67);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &k_u
        [0]);
      emlrtAssign(&k_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        l_u[i4] = cv27[i4];
      }

      l_y = NULL;
      m7 = emlrtCreateCharArray(2, iv68);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &l_u[0]);
      emlrtAssign(&l_y, m7);
      error(moduleInstance, message(moduleInstance, k_y, l_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        m_u[i4] = cv26[i4];
      }

      m_y = NULL;
      m7 = emlrtCreateCharArray(2, iv69);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &m_u
        [0]);
      emlrtAssign(&m_y, m7);
      for (i4 = 0; i4 < 8; i4++) {
        n_u[i4] = cv27[i4];
      }

      n_y = NULL;
      m7 = emlrtCreateCharArray(2, iv70);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &n_u[0]);
      emlrtAssign(&n_y, m7);
      error(moduleInstance, message(moduleInstance, m_y, n_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i4 = 0; i4 < 45; i4++) {
      o_u[i4] = cv26[i4];
    }

    o_y = NULL;
    m7 = emlrtCreateCharArray(2, iv71);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &o_u[0]);
    emlrtAssign(&o_y, m7);
    for (i4 = 0; i4 < 8; i4++) {
      p_u[i4] = cv27[i4];
    }

    p_y = NULL;
    m7 = emlrtCreateCharArray(2, iv72);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &p_u[0]);
    emlrtAssign(&p_y, m7);
    error(moduleInstance, message(moduleInstance, o_y, p_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        q_u[i4] = cv26[i4];
      }

      q_y = NULL;
      m7 = emlrtCreateCharArray(2, iv73);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &q_u
        [0]);
      emlrtAssign(&q_y, m7);
      for (i4 = 0; i4 < 5; i4++) {
        r_u[i4] = cv28[i4];
      }

      r_y = NULL;
      m7 = emlrtCreateCharArray(2, iv74);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m7, &r_u[0]);
      emlrtAssign(&r_y, m7);
      error(moduleInstance, message(moduleInstance, q_y, r_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      c_obj = obj->pCIC;
      if (c_obj->isInitialized == 2) {
        for (i4 = 0; i4 < 45; i4++) {
          s_u[i4] = cv26[i4];
        }

        s_y = NULL;
        m7 = emlrtCreateCharArray(2, iv75);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7,
          &s_u[0]);
        emlrtAssign(&s_y, m7);
        for (i4 = 0; i4 < 5; i4++) {
          t_u[i4] = cv28[i4];
        }

        t_y = NULL;
        m7 = emlrtCreateCharArray(2, iv76);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m7,
          &t_u[0]);
        emlrtAssign(&t_y, m7);
        error(moduleInstance, message(moduleInstance, s_y, t_y, &emlrtMCI),
              &emlrtMCI);
      }

      if (c_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRDecimator */
        c_obj->cSFunObject.W2_CoeffIdx = 27;
        c_obj->cSFunObject.W0_PhaseIdx = 9;
        c_obj->cSFunObject.W4_TapDelayIndex = 18;
        c_obj->cSFunObject.W1_Sums.re = 0.0;
        c_obj->cSFunObject.W1_Sums.im = 0.0;
        for (i4 = 0; i4 < 20; i4++) {
          c_obj->cSFunObject.W3_StatesBuff[i4].re = 0.0;
          c_obj->cSFunObject.W3_StatesBuff[i4].im = 0.0;
        }
      }

      d_obj = obj->pCICComp;
      if (d_obj->isInitialized == 2) {
        for (i4 = 0; i4 < 45; i4++) {
          u_u[i4] = cv26[i4];
        }

        u_y = NULL;
        m7 = emlrtCreateCharArray(2, iv77);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7,
          &u_u[0]);
        emlrtAssign(&u_y, m7);
        for (i4 = 0; i4 < 5; i4++) {
          v_u[i4] = cv28[i4];
        }

        v_y = NULL;
        m7 = emlrtCreateCharArray(2, iv78);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m7,
          &v_u[0]);
        emlrtAssign(&v_y, m7);
        error(moduleInstance, message(moduleInstance, u_y, v_y, &emlrtMCI),
              &emlrtMCI);
      }

      if (d_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRDecimator */
        d_obj->cSFunObject.W2_CoeffIdx = 4;
        d_obj->cSFunObject.W0_PhaseIdx = 1;
        d_obj->cSFunObject.W4_TapDelayIndex = 3;
        d_obj->cSFunObject.W1_Sums.re = 0.0;
        d_obj->cSFunObject.W1_Sums.im = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d_obj->cSFunObject.W3_StatesBuff[i4].re = 0.0;
          d_obj->cSFunObject.W3_StatesBuff[i4].im = 0.0;
        }
      }

      b_obj = obj->pFilterDesigner;
      if (b_obj->isInitialized == 2) {
        for (i4 = 0; i4 < 45; i4++) {
          w_u[i4] = cv26[i4];
        }

        w_y = NULL;
        m7 = emlrtCreateCharArray(2, iv79);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7,
          &w_u[0]);
        emlrtAssign(&w_y, m7);
        for (i4 = 0; i4 < 8; i4++) {
          x_u[i4] = cv27[i4];
        }

        x_y = NULL;
        m7 = emlrtCreateCharArray(2, iv80);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7,
          &x_u[0]);
        emlrtAssign(&x_y, m7);
        error(moduleInstance, message(moduleInstance, w_y, x_y, &emlrtMCI),
              &emlrtMCI);
      }

      flag = (b_obj->isInitialized == 1);
      if (!flag) {
        for (i4 = 0; i4 < 49; i4++) {
          y_u[i4] = cv29[i4];
        }

        y_y = NULL;
        m7 = emlrtCreateCharArray(2, iv81);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m7,
          &y_u[0]);
        emlrtAssign(&y_y, m7);
        error(moduleInstance, c_message(moduleInstance, y_y, &d_emlrtMCI),
              &d_emlrtMCI);
      }

      e_obj = obj->pStage3;
      if (e_obj->isInitialized == 2) {
        for (i4 = 0; i4 < 45; i4++) {
          ab_u[i4] = cv26[i4];
        }

        ab_y = NULL;
        m7 = emlrtCreateCharArray(2, iv82);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7,
          &ab_u[0]);
        emlrtAssign(&ab_y, m7);
        for (i4 = 0; i4 < 5; i4++) {
          bb_u[i4] = cv28[i4];
        }

        bb_y = NULL;
        m7 = emlrtCreateCharArray(2, iv83);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m7,
          &bb_u[0]);
        emlrtAssign(&bb_y, m7);
        error(moduleInstance, message(moduleInstance, ab_y, bb_y, &emlrtMCI),
              &emlrtMCI);
      }

      if (e_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRDecimator */
        e_obj->cSFunObject.W2_CoeffIdx = 12;
        e_obj->cSFunObject.W0_PhaseIdx = 1;
        e_obj->cSFunObject.W4_TapDelayIndex = 11;
        e_obj->cSFunObject.W1_Sums.re = 0.0;
        e_obj->cSFunObject.W1_Sums.im = 0.0;
        for (i4 = 0; i4 < 22; i4++) {
          e_obj->cSFunObject.W3_StatesBuff[i4].re = 0.0;
          e_obj->cSFunObject.W3_StatesBuff[i4].im = 0.0;
        }
      }

      f_obj = obj->pOscillator;
      if (f_obj->isInitialized == 2) {
        for (i4 = 0; i4 < 45; i4++) {
          cb_u[i4] = cv26[i4];
        }

        cb_y = NULL;
        m7 = emlrtCreateCharArray(2, iv84);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7,
          &cb_u[0]);
        emlrtAssign(&cb_y, m7);
        for (i4 = 0; i4 < 5; i4++) {
          db_u[i4] = cv28[i4];
        }

        db_y = NULL;
        m7 = emlrtCreateCharArray(2, iv85);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m7,
          &db_u[0]);
        emlrtAssign(&db_y, m7);
        error(moduleInstance, message(moduleInstance, cb_y, db_y, &emlrtMCI),
              &emlrtMCI);
      }

      if (f_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.SineWave */
        /* This code only executes when block is re-enabled in an
           enabled subsystem when the enabled subsystem states on
           re-enabling are set to 'Reset' */
        /* Reset to time zero on re-enable */
        /* Trigonometric mode: compute accumulated
           normalized trig fcn argument for each channel */
        /* Keep normalized value in range [0 2*pi) */
        for (arg = f_obj->cSFunObject.P2_Phase; arg >= 6.2831853071795862; arg -=
             6.2831853071795862) {
        }

        while (arg < 0.0) {
          arg += 6.2831853071795862;
        }

        f_obj->cSFunObject.W0_AccFreqNorm = arg;
      }
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance)
{
  int32_T i5;
  dsp_DigitalDownConverter_2 *obj;
  dsp_private_DownConverterFilterDesigner_2 *b_obj;
  static char_T cv30[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv86[2] = { 1, 45 };

  const mxArray *m8;
  static char_T cv31[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv87[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv88[2] = { 1, 45 };

  char_T d_u[8];
  const mxArray *d_y;
  static const int32_T iv89[2] = { 1, 8 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv90[2] = { 1, 45 };

  char_T f_u[8];
  const mxArray *f_y;
  static const int32_T iv91[2] = { 1, 8 };

  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv92[2] = { 1, 45 };

  char_T h_u[8];
  const mxArray *h_y;
  static const int32_T iv93[2] = { 1, 8 };

  char_T i_u[45];
  const mxArray *i_y;
  static const int32_T iv94[2] = { 1, 45 };

  char_T j_u[8];
  const mxArray *j_y;
  static const int32_T iv95[2] = { 1, 8 };

  char_T k_u[45];
  const mxArray *k_y;
  static const int32_T iv96[2] = { 1, 45 };

  char_T l_u[8];
  const mxArray *l_y;
  static const int32_T iv97[2] = { 1, 8 };

  char_T m_u[45];
  const mxArray *m_y;
  static const int32_T iv98[2] = { 1, 45 };

  char_T n_u[8];
  const mxArray *n_y;
  static const int32_T iv99[2] = { 1, 8 };

  dspcodegen_FIRDecimator_1 *iobj_0;
  dspcodegen_FIRDecimator_2 *iobj_1;
  dspcodegen_SineWave *iobj_2;
  dspcodegen_FIRDecimator *iobj_3;
  char_T o_u[45];
  const mxArray *o_y;
  static const int32_T iv100[2] = { 1, 45 };

  static char_T cv32[4] = { 's', 't', 'e', 'p' };

  char_T p_u[4];
  const mxArray *p_y;
  static const int32_T iv101[2] = { 1, 4 };

  static char_T cv33[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T q_u[51];
  const mxArray *q_y;
  static const int32_T iv102[2] = { 1, 51 };

  static char_T cv34[5] = { 's', 'e', 't', 'u', 'p' };

  char_T r_u[5];
  const mxArray *r_y;
  static const int32_T iv103[2] = { 1, 5 };

  real_T c_value;
  char_T s_u[45];
  const mxArray *s_y;
  static const int32_T iv104[2] = { 1, 45 };

  char_T t_u[8];
  const mxArray *t_y;
  static const int32_T iv105[2] = { 1, 8 };

  char_T u_u[45];
  const mxArray *u_y;
  static const int32_T iv106[2] = { 1, 45 };

  char_T v_u[8];
  const mxArray *v_y;
  static const int32_T iv107[2] = { 1, 8 };

  char_T w_u[45];
  const mxArray *w_y;
  static const int32_T iv108[2] = { 1, 45 };

  char_T x_u[4];
  const mxArray *x_y;
  static const int32_T iv109[2] = { 1, 4 };

  char_T y_u[51];
  const mxArray *y_y;
  static const int32_T iv110[2] = { 1, 51 };

  char_T ab_u[5];
  const mxArray *ab_y;
  static const int32_T iv111[2] = { 1, 5 };

  static int8_T iv112[30] = { 55, 45, 0, 45, 55, 0, 36, 63, 1, 28, 69, 3, 21, 73,
    6, 15, 75, 10, 10, 75, 15, 6, 73, 21, 3, 69, 28, 1, 63, 36 };

  static real_T dv2[8] = { -0.030073796276627932, 0.41166712823102658,
    0.14422449671037652, -0.02515621465651173, -0.02515621465651173,
    0.14422449671037652, 0.41166712823102658, -0.030073796276627932 };

  static real_T dv3[24] = { 0.0053777350101162618, 0.0021758145508227675,
    -0.026560575028591077, -0.015497096389893441, 0.110577428440347,
    0.23642949586506573, 0.18763665306904825, 0.034989572161314472,
    -0.033309447013256915, -0.010533216321043946, 0.006807957676722055,
    0.0023126179583034243, 0.0023126179583034243, 0.006807957676722055,
    -0.010533216321043946, -0.033309447013256915, 0.034989572161314472,
    0.18763665306904825, 0.23642949586506573, 0.110577428440347,
    -0.015497096389893441, -0.026560575028591077, 0.0021758145508227675,
    0.0053777350101162618 };

  char_T bb_u[45];
  const mxArray *bb_y;
  static const int32_T iv113[2] = { 1, 45 };

  char_T cb_u[8];
  const mxArray *cb_y;
  static const int32_T iv114[2] = { 1, 8 };

  static char_T cv35[49] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'D', 'i', 'g', 'i', 't', 'a', 'l', 'D', 'o', 'w', 'n', 'C', 'o', 'n',
    'v', 'e', 'r', 't', 'e', 'r', ':', 'n', 'o', 'D', 'e', 's', 'i', 'g', 'n',
    'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e' };

  char_T db_u[49];
  const mxArray *db_y;
  static const int32_T iv115[2] = { 1, 49 };

  static char_T cv36[42] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'n', 'o', 'T', 'u', 'n', 'i', 'n', 'g', 'B', 'e', 'f',
    'o', 'r', 'e', 'L', 'o', 'c', 'k', 'i', 'n', 'g', 'C', 'o', 'd', 'e', 'G',
    'e', 'n' };

  char_T eb_u[42];
  const mxArray *eb_y;
  static const int32_T iv116[2] = { 1, 42 };

  char_T fb_u[45];
  const mxArray *fb_y;
  static const int32_T iv117[2] = { 1, 45 };

  char_T gb_u[8];
  const mxArray *gb_y;
  static const int32_T iv118[2] = { 1, 8 };

  char_T hb_u[49];
  const mxArray *hb_y;
  static const int32_T iv119[2] = { 1, 49 };

  char_T ib_u[45];
  const mxArray *ib_y;
  static const int32_T iv120[2] = { 1, 45 };

  static char_T cv37[5] = { 'r', 'e', 's', 'e', 't' };

  char_T jb_u[5];
  const mxArray *jb_y;
  static const int32_T iv121[2] = { 1, 5 };

  char_T kb_u[45];
  const mxArray *kb_y;
  static const int32_T iv122[2] = { 1, 45 };

  char_T lb_u[5];
  const mxArray *lb_y;
  static const int32_T iv123[2] = { 1, 5 };

  char_T mb_u[45];
  const mxArray *mb_y;
  static const int32_T iv124[2] = { 1, 45 };

  char_T nb_u[8];
  const mxArray *nb_y;
  static const int32_T iv125[2] = { 1, 8 };

  char_T ob_u[49];
  const mxArray *ob_y;
  static const int32_T iv126[2] = { 1, 49 };

  char_T pb_u[45];
  const mxArray *pb_y;
  static const int32_T iv127[2] = { 1, 45 };

  char_T qb_u[5];
  const mxArray *qb_y;
  static const int32_T iv128[2] = { 1, 5 };

  char_T rb_u[45];
  const mxArray *rb_y;
  static const int32_T iv129[2] = { 1, 45 };

  char_T sb_u[5];
  const mxArray *sb_y;
  static const int32_T iv130[2] = { 1, 5 };

  creal_T varargout_1[6250];
  for (i5 = 0; i5 < 250000; i5++) {
    moduleInstance->varargin_14[i5] = (*moduleInstance->u0)[i5];
  }

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.pCIC = NULL;
    moduleInstance->sysobj.pCICComp = NULL;
    moduleInstance->sysobj.pOscillator = NULL;
    moduleInstance->sysobj.pSampleRateInherit = -1.0;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->gobj_8.CICFilterSysObj = NULL;
    moduleInstance->gobj_8.CICCompFilterSysObj = NULL;
    moduleInstance->gobj_8.isInitialized = 0;
    moduleInstance->sysobj.pFilterDesigner = &moduleInstance->gobj_8;
    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        u[i5] = cv30[i5];
      }

      y = NULL;
      m8 = emlrtCreateCharArray(2, iv86);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &u[0]);
      emlrtAssign(&y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        b_u[i5] = cv31[i5];
      }

      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv87);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &b_u[0]);
      emlrtAssign(&b_y, m8);
      error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        c_u[i5] = cv30[i5];
      }

      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv88);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &c_u
        [0]);
      emlrtAssign(&c_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        d_u[i5] = cv31[i5];
      }

      d_y = NULL;
      m8 = emlrtCreateCharArray(2, iv89);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &d_u[0]);
      emlrtAssign(&d_y, m8);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        e_u[i5] = cv30[i5];
      }

      e_y = NULL;
      m8 = emlrtCreateCharArray(2, iv90);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &e_u
        [0]);
      emlrtAssign(&e_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        f_u[i5] = cv31[i5];
      }

      f_y = NULL;
      m8 = emlrtCreateCharArray(2, iv91);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &f_u[0]);
      emlrtAssign(&f_y, m8);
      error(moduleInstance, message(moduleInstance, e_y, f_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        g_u[i5] = cv30[i5];
      }

      g_y = NULL;
      m8 = emlrtCreateCharArray(2, iv92);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &g_u
        [0]);
      emlrtAssign(&g_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        h_u[i5] = cv31[i5];
      }

      h_y = NULL;
      m8 = emlrtCreateCharArray(2, iv93);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &h_u[0]);
      emlrtAssign(&h_y, m8);
      error(moduleInstance, message(moduleInstance, g_y, h_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        i_u[i5] = cv30[i5];
      }

      i_y = NULL;
      m8 = emlrtCreateCharArray(2, iv94);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &i_u
        [0]);
      emlrtAssign(&i_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        j_u[i5] = cv31[i5];
      }

      j_y = NULL;
      m8 = emlrtCreateCharArray(2, iv95);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &j_u[0]);
      emlrtAssign(&j_y, m8);
      error(moduleInstance, message(moduleInstance, i_y, j_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        k_u[i5] = cv30[i5];
      }

      k_y = NULL;
      m8 = emlrtCreateCharArray(2, iv96);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &k_u
        [0]);
      emlrtAssign(&k_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        l_u[i5] = cv31[i5];
      }

      l_y = NULL;
      m8 = emlrtCreateCharArray(2, iv97);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &l_u[0]);
      emlrtAssign(&l_y, m8);
      error(moduleInstance, message(moduleInstance, k_y, l_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        m_u[i5] = cv30[i5];
      }

      m_y = NULL;
      m8 = emlrtCreateCharArray(2, iv98);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &m_u
        [0]);
      emlrtAssign(&m_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        n_u[i5] = cv31[i5];
      }

      n_y = NULL;
      m8 = emlrtCreateCharArray(2, iv99);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &n_u[0]);
      emlrtAssign(&n_y, m8);
      error(moduleInstance, message(moduleInstance, m_y, n_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }
  }

  obj = &moduleInstance->sysobj;
  iobj_0 = &moduleInstance->gobj_1;
  iobj_1 = &moduleInstance->gobj_3;
  iobj_2 = &moduleInstance->gobj_5;
  iobj_3 = &moduleInstance->gobj_11;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i5 = 0; i5 < 45; i5++) {
      o_u[i5] = cv30[i5];
    }

    o_y = NULL;
    m8 = emlrtCreateCharArray(2, iv100);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &o_u[0]);
    emlrtAssign(&o_y, m8);
    for (i5 = 0; i5 < 4; i5++) {
      p_u[i5] = cv32[i5];
    }

    p_y = NULL;
    m8 = emlrtCreateCharArray(2, iv101);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m8, &p_u[0]);
    emlrtAssign(&p_y, m8);
    error(moduleInstance, message(moduleInstance, o_y, p_y, &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (i5 = 0; i5 < 51; i5++) {
        q_u[i5] = cv33[i5];
      }

      q_y = NULL;
      m8 = emlrtCreateCharArray(2, iv102);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m8, &q_u
        [0]);
      emlrtAssign(&q_y, m8);
      for (i5 = 0; i5 < 5; i5++) {
        r_u[i5] = cv34[i5];
      }

      r_y = NULL;
      m8 = emlrtCreateCharArray(2, iv103);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8, &r_u[0]);
      emlrtAssign(&r_y, m8);
      error(moduleInstance, message(moduleInstance, q_y, r_y, &emlrtMCI),
            &emlrtMCI);
    }

    obj->isInitialized = 1;
    SystemCore_validateProperties(moduleInstance, obj);
    c_value = obj->pSampleRateInherit;
    obj->pSampleRateInherit = 2.0E+6;
    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        s_u[i5] = cv30[i5];
      }

      s_y = NULL;
      m8 = emlrtCreateCharArray(2, iv104);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &s_u
        [0]);
      emlrtAssign(&s_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        t_u[i5] = cv31[i5];
      }

      t_y = NULL;
      m8 = emlrtCreateCharArray(2, iv105);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &t_u[0]);
      emlrtAssign(&t_y, m8);
      error(moduleInstance, message(moduleInstance, s_y, t_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    if (c_value == -1.0) {
      SystemCore_validateProperties(moduleInstance, obj);
    }

    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        u_u[i5] = cv30[i5];
      }

      u_y = NULL;
      m8 = emlrtCreateCharArray(2, iv106);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &u_u
        [0]);
      emlrtAssign(&u_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        v_u[i5] = cv31[i5];
      }

      v_y = NULL;
      m8 = emlrtCreateCharArray(2, iv107);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &v_u[0]);
      emlrtAssign(&v_y, m8);
      error(moduleInstance, message(moduleInstance, u_y, v_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        w_u[i5] = cv30[i5];
      }

      w_y = NULL;
      m8 = emlrtCreateCharArray(2, iv108);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8, &w_u
        [0]);
      emlrtAssign(&w_y, m8);
      for (i5 = 0; i5 < 4; i5++) {
        x_u[i5] = cv32[i5];
      }

      x_y = NULL;
      m8 = emlrtCreateCharArray(2, iv109);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m8, &x_u[0]);
      emlrtAssign(&x_y, m8);
      error(moduleInstance, message(moduleInstance, w_y, x_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (b_obj->isInitialized != 1) {
      if (b_obj->isInitialized != 0) {
        for (i5 = 0; i5 < 51; i5++) {
          y_u[i5] = cv33[i5];
        }

        y_y = NULL;
        m8 = emlrtCreateCharArray(2, iv110);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m8,
          &y_u[0]);
        emlrtAssign(&y_y, m8);
        for (i5 = 0; i5 < 5; i5++) {
          ab_u[i5] = cv34[i5];
        }

        ab_y = NULL;
        m8 = emlrtCreateCharArray(2, iv111);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8,
          &ab_u[0]);
        emlrtAssign(&ab_y, m8);
        error(moduleInstance, message(moduleInstance, y_y, ab_y, &emlrtMCI),
              &emlrtMCI);
      }

      b_obj->isInitialized = 1;
      if (!(b_obj->CICFilterSysObj == NULL)) {
        emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
          &b_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
      }

      iobj_0->isInitialized = 0;

      /* System object Constructor function: dsp.FIRDecimator */
      iobj_0->cSFunObject.P0_IC.re = 0.0;
      iobj_0->cSFunObject.P0_IC.im = 0.0;
      for (i5 = 0; i5 < 30; i5++) {
        iobj_0->cSFunObject.P1_FILT[i5] = (real_T)iv112[i5];
      }

      b_obj->CICFilterSysObj = iobj_0;
      if (!(b_obj->CICCompFilterSysObj == NULL)) {
        emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
          &c_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
      }

      iobj_1->isInitialized = 0;

      /* System object Constructor function: dsp.FIRDecimator */
      iobj_1->cSFunObject.P0_IC.re = 0.0;
      iobj_1->cSFunObject.P0_IC.im = 0.0;
      for (i5 = 0; i5 < 8; i5++) {
        iobj_1->cSFunObject.P1_FILT[i5] = dv2[i5];
      }

      b_obj->CICCompFilterSysObj = iobj_1;
      iobj_3->isInitialized = 0;

      /* System object Constructor function: dsp.FIRDecimator */
      iobj_3->cSFunObject.P0_IC.re = 0.0;
      iobj_3->cSFunObject.P0_IC.im = 0.0;
      for (i5 = 0; i5 < 24; i5++) {
        iobj_3->cSFunObject.P1_FILT[i5] = dv3[i5];
      }

      b_obj->Stage3FilterSysObj = iobj_3;
    }

    if (!(obj->pCIC == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &e_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    obj->pCIC = obj->pFilterDesigner->CICFilterSysObj;
    if (!(obj->pCICComp == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &d_emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    obj->pCICComp = obj->pFilterDesigner->CICCompFilterSysObj;
    obj->pStage3 = obj->pFilterDesigner->Stage3FilterSysObj;
    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        bb_u[i5] = cv30[i5];
      }

      bb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv113);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &bb_u[0]);
      emlrtAssign(&bb_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        cb_u[i5] = cv31[i5];
      }

      cb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv114);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &cb_u
        [0]);
      emlrtAssign(&cb_y, m8);
      error(moduleInstance, message(moduleInstance, bb_y, cb_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (!flag) {
      for (i5 = 0; i5 < 49; i5++) {
        db_u[i5] = cv35[i5];
      }

      db_y = NULL;
      m8 = emlrtCreateCharArray(2, iv115);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m8,
        &db_u[0]);
      emlrtAssign(&db_y, m8);
      error(moduleInstance, c_message(moduleInstance, db_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    for (i5 = 0; i5 < 25000; i5++) {
      obj->pInitCICNormOutput[i5].re = 0.0;
      obj->pInitCICNormOutput[i5].im = 0.0;
    }

    for (i5 = 0; i5 < 250000; i5++) {
      obj->pInitMixerOutput[i5].re = 0.0;
      obj->pInitMixerOutput[i5].im = 0.0;
    }

    for (i5 = 0; i5 < 250000; i5++) {
      obj->pInitOscillatorOutput[i5].re = 0.0;
      obj->pInitOscillatorOutput[i5].im = 0.0;
    }

    if (!(obj->pOscillator == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_2->isInitialized = 0;
    iobj_2->NoTuningBeforeLockingCodeGenError = true;

    /* System object Constructor function: dsp.SineWave */
    iobj_2->cSFunObject.P0_Amplitude = 1.0;
    iobj_2->cSFunObject.P1_Frequency = 455000.0;
    iobj_2->cSFunObject.P2_Phase = 0.0;
    if (!iobj_2->NoTuningBeforeLockingCodeGenError) {
      for (i5 = 0; i5 < 42; i5++) {
        eb_u[i5] = cv36[i5];
      }

      eb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv116);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 42, m8,
        &eb_u[0]);
      emlrtAssign(&eb_y, m8);
      error(moduleInstance, c_message(moduleInstance, eb_y, &e_emlrtMCI),
            &e_emlrtMCI);
    }

    iobj_2->cSFunObject.P0_Amplitude = 1.0;
    iobj_2->NoTuningBeforeLockingCodeGenError = false;
    obj->pOscillator = iobj_2;
    obj->pIsOscillatorDesigned = true;
    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        fb_u[i5] = cv30[i5];
      }

      fb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv117);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &fb_u[0]);
      emlrtAssign(&fb_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        gb_u[i5] = cv31[i5];
      }

      gb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv118);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &gb_u
        [0]);
      emlrtAssign(&gb_y, m8);
      error(moduleInstance, message(moduleInstance, fb_y, gb_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (!flag) {
      for (i5 = 0; i5 < 49; i5++) {
        hb_u[i5] = cv35[i5];
      }

      hb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv119);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m8,
        &hb_u[0]);
      emlrtAssign(&hb_y, m8);
      error(moduleInstance, c_message(moduleInstance, hb_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    iobj_0 = obj->pCIC;
    if (iobj_0->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        ib_u[i5] = cv30[i5];
      }

      ib_y = NULL;
      m8 = emlrtCreateCharArray(2, iv120);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &ib_u[0]);
      emlrtAssign(&ib_y, m8);
      for (i5 = 0; i5 < 5; i5++) {
        jb_u[i5] = cv37[i5];
      }

      jb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv121);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8, &jb_u
        [0]);
      emlrtAssign(&jb_y, m8);
      error(moduleInstance, message(moduleInstance, ib_y, jb_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (iobj_0->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRDecimator */
      iobj_0->cSFunObject.W2_CoeffIdx = 27;
      iobj_0->cSFunObject.W0_PhaseIdx = 9;
      iobj_0->cSFunObject.W4_TapDelayIndex = 18;
      iobj_0->cSFunObject.W1_Sums.re = 0.0;
      iobj_0->cSFunObject.W1_Sums.im = 0.0;
      for (i5 = 0; i5 < 20; i5++) {
        iobj_0->cSFunObject.W3_StatesBuff[i5].re = 0.0;
        iobj_0->cSFunObject.W3_StatesBuff[i5].im = 0.0;
      }
    }

    iobj_1 = obj->pCICComp;
    if (iobj_1->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        kb_u[i5] = cv30[i5];
      }

      kb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv122);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &kb_u[0]);
      emlrtAssign(&kb_y, m8);
      for (i5 = 0; i5 < 5; i5++) {
        lb_u[i5] = cv37[i5];
      }

      lb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv123);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8, &lb_u
        [0]);
      emlrtAssign(&lb_y, m8);
      error(moduleInstance, message(moduleInstance, kb_y, lb_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (iobj_1->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRDecimator */
      iobj_1->cSFunObject.W2_CoeffIdx = 4;
      iobj_1->cSFunObject.W0_PhaseIdx = 1;
      iobj_1->cSFunObject.W4_TapDelayIndex = 3;
      iobj_1->cSFunObject.W1_Sums.re = 0.0;
      iobj_1->cSFunObject.W1_Sums.im = 0.0;
      for (i5 = 0; i5 < 6; i5++) {
        iobj_1->cSFunObject.W3_StatesBuff[i5].re = 0.0;
        iobj_1->cSFunObject.W3_StatesBuff[i5].im = 0.0;
      }
    }

    b_obj = obj->pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        mb_u[i5] = cv30[i5];
      }

      mb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv124);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &mb_u[0]);
      emlrtAssign(&mb_y, m8);
      for (i5 = 0; i5 < 8; i5++) {
        nb_u[i5] = cv31[i5];
      }

      nb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv125);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m8, &nb_u
        [0]);
      emlrtAssign(&nb_y, m8);
      error(moduleInstance, message(moduleInstance, mb_y, nb_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (!flag) {
      for (i5 = 0; i5 < 49; i5++) {
        ob_u[i5] = cv35[i5];
      }

      ob_y = NULL;
      m8 = emlrtCreateCharArray(2, iv126);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 49, m8,
        &ob_u[0]);
      emlrtAssign(&ob_y, m8);
      error(moduleInstance, c_message(moduleInstance, ob_y, &d_emlrtMCI),
            &d_emlrtMCI);
    }

    iobj_3 = obj->pStage3;
    if (iobj_3->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        pb_u[i5] = cv30[i5];
      }

      pb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv127);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &pb_u[0]);
      emlrtAssign(&pb_y, m8);
      for (i5 = 0; i5 < 5; i5++) {
        qb_u[i5] = cv37[i5];
      }

      qb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv128);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8, &qb_u
        [0]);
      emlrtAssign(&qb_y, m8);
      error(moduleInstance, message(moduleInstance, pb_y, qb_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (iobj_3->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRDecimator */
      iobj_3->cSFunObject.W2_CoeffIdx = 12;
      iobj_3->cSFunObject.W0_PhaseIdx = 1;
      iobj_3->cSFunObject.W4_TapDelayIndex = 11;
      iobj_3->cSFunObject.W1_Sums.re = 0.0;
      iobj_3->cSFunObject.W1_Sums.im = 0.0;
      for (i5 = 0; i5 < 22; i5++) {
        iobj_3->cSFunObject.W3_StatesBuff[i5].re = 0.0;
        iobj_3->cSFunObject.W3_StatesBuff[i5].im = 0.0;
      }
    }

    iobj_2 = obj->pOscillator;
    if (iobj_2->isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        rb_u[i5] = cv30[i5];
      }

      rb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv129);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m8,
        &rb_u[0]);
      emlrtAssign(&rb_y, m8);
      for (i5 = 0; i5 < 5; i5++) {
        sb_u[i5] = cv37[i5];
      }

      sb_y = NULL;
      m8 = emlrtCreateCharArray(2, iv130);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m8, &sb_u
        [0]);
      emlrtAssign(&sb_y, m8);
      error(moduleInstance, message(moduleInstance, rb_y, sb_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (iobj_2->isInitialized == 1) {
      /* System object Initialization function: dsp.SineWave */
      /* This code only executes when block is re-enabled in an
         enabled subsystem when the enabled subsystem states on
         re-enabling are set to 'Reset' */
      /* Reset to time zero on re-enable */
      /* Trigonometric mode: compute accumulated
         normalized trig fcn argument for each channel */
      /* Keep normalized value in range [0 2*pi) */
      for (c_value = iobj_2->cSFunObject.P2_Phase; c_value >= 6.2831853071795862;
           c_value -= 6.2831853071795862) {
      }

      while (c_value < 0.0) {
        c_value += 6.2831853071795862;
      }

      iobj_2->cSFunObject.W0_AccFreqNorm = c_value;
    }
  }

  DigitalDownConverter_stepImpl(moduleInstance, obj, moduleInstance->varargin_14,
    varargout_1);
  for (i5 = 0; i5 < 6250; i5++) {
    (*moduleInstance->b_y0)[i5].re = varargout_1[i5].re;
    (*moduleInstance->b_y0)[i5].im = varargout_1[i5].im;
  }
}

static void cgxe_mdl_update(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance)
{
  dsp_DigitalDownConverter_2 *obj;
  dsp_private_DownConverterFilterDesigner_2 *b_obj;
  int32_T i6;
  static char_T cv38[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv131[2] = { 1, 45 };

  const mxArray *m9;
  static char_T cv39[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv132[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv133[2] = { 1, 45 };

  char_T d_u[8];
  const mxArray *d_y;
  static const int32_T iv134[2] = { 1, 8 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv135[2] = { 1, 45 };

  char_T f_u[8];
  const mxArray *f_y;
  static const int32_T iv136[2] = { 1, 8 };

  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv137[2] = { 1, 45 };

  char_T h_u[8];
  const mxArray *h_y;
  static const int32_T iv138[2] = { 1, 8 };

  char_T i_u[45];
  const mxArray *i_y;
  static const int32_T iv139[2] = { 1, 45 };

  char_T j_u[8];
  const mxArray *j_y;
  static const int32_T iv140[2] = { 1, 8 };

  char_T k_u[45];
  const mxArray *k_y;
  static const int32_T iv141[2] = { 1, 45 };

  char_T l_u[8];
  const mxArray *l_y;
  static const int32_T iv142[2] = { 1, 8 };

  char_T m_u[45];
  const mxArray *m_y;
  static const int32_T iv143[2] = { 1, 45 };

  char_T n_u[8];
  const mxArray *n_y;
  static const int32_T iv144[2] = { 1, 8 };

  char_T o_u[45];
  const mxArray *o_y;
  static const int32_T iv145[2] = { 1, 45 };

  char_T p_u[8];
  const mxArray *p_y;
  static const int32_T iv146[2] = { 1, 8 };

  char_T q_u[45];
  const mxArray *q_y;
  static const int32_T iv147[2] = { 1, 45 };

  static char_T cv40[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T r_u[7];
  const mxArray *r_y;
  static const int32_T iv148[2] = { 1, 7 };

  dspcodegen_SineWave *c_obj;
  char_T s_u[45];
  const mxArray *s_y;
  static const int32_T iv149[2] = { 1, 45 };

  char_T t_u[7];
  const mxArray *t_y;
  static const int32_T iv150[2] = { 1, 7 };

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.pCIC = NULL;
    moduleInstance->sysobj.pCICComp = NULL;
    moduleInstance->sysobj.pOscillator = NULL;
    moduleInstance->sysobj.pSampleRateInherit = -1.0;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->gobj_9.CICFilterSysObj = NULL;
    moduleInstance->gobj_9.CICCompFilterSysObj = NULL;
    moduleInstance->gobj_9.isInitialized = 0;
    moduleInstance->sysobj.pFilterDesigner = &moduleInstance->gobj_9;
    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        u[i6] = cv38[i6];
      }

      y = NULL;
      m9 = emlrtCreateCharArray(2, iv131);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &u[0]);
      emlrtAssign(&y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        b_u[i6] = cv39[i6];
      }

      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv132);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &b_u[0]);
      emlrtAssign(&b_y, m9);
      error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        c_u[i6] = cv38[i6];
      }

      c_y = NULL;
      m9 = emlrtCreateCharArray(2, iv133);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &c_u
        [0]);
      emlrtAssign(&c_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        d_u[i6] = cv39[i6];
      }

      d_y = NULL;
      m9 = emlrtCreateCharArray(2, iv134);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &d_u[0]);
      emlrtAssign(&d_y, m9);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        e_u[i6] = cv38[i6];
      }

      e_y = NULL;
      m9 = emlrtCreateCharArray(2, iv135);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &e_u
        [0]);
      emlrtAssign(&e_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        f_u[i6] = cv39[i6];
      }

      f_y = NULL;
      m9 = emlrtCreateCharArray(2, iv136);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &f_u[0]);
      emlrtAssign(&f_y, m9);
      error(moduleInstance, message(moduleInstance, e_y, f_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        g_u[i6] = cv38[i6];
      }

      g_y = NULL;
      m9 = emlrtCreateCharArray(2, iv137);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &g_u
        [0]);
      emlrtAssign(&g_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        h_u[i6] = cv39[i6];
      }

      h_y = NULL;
      m9 = emlrtCreateCharArray(2, iv138);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &h_u[0]);
      emlrtAssign(&h_y, m9);
      error(moduleInstance, message(moduleInstance, g_y, h_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        i_u[i6] = cv38[i6];
      }

      i_y = NULL;
      m9 = emlrtCreateCharArray(2, iv139);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &i_u
        [0]);
      emlrtAssign(&i_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        j_u[i6] = cv39[i6];
      }

      j_y = NULL;
      m9 = emlrtCreateCharArray(2, iv140);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &j_u[0]);
      emlrtAssign(&j_y, m9);
      error(moduleInstance, message(moduleInstance, i_y, j_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        k_u[i6] = cv38[i6];
      }

      k_y = NULL;
      m9 = emlrtCreateCharArray(2, iv141);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &k_u
        [0]);
      emlrtAssign(&k_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        l_u[i6] = cv39[i6];
      }

      l_y = NULL;
      m9 = emlrtCreateCharArray(2, iv142);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &l_u[0]);
      emlrtAssign(&l_y, m9);
      error(moduleInstance, message(moduleInstance, k_y, l_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }

    obj = &moduleInstance->sysobj;
    b_obj = moduleInstance->sysobj.pFilterDesigner;
    if (b_obj->isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        m_u[i6] = cv38[i6];
      }

      m_y = NULL;
      m9 = emlrtCreateCharArray(2, iv143);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &m_u
        [0]);
      emlrtAssign(&m_y, m9);
      for (i6 = 0; i6 < 8; i6++) {
        n_u[i6] = cv39[i6];
      }

      n_y = NULL;
      m9 = emlrtCreateCharArray(2, iv144);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &n_u[0]);
      emlrtAssign(&n_y, m9);
      error(moduleInstance, message(moduleInstance, m_y, n_y, &emlrtMCI),
            &emlrtMCI);
    }

    flag = (b_obj->isInitialized == 1);
    if (flag) {
      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i6 = 0; i6 < 45; i6++) {
      o_u[i6] = cv38[i6];
    }

    o_y = NULL;
    m9 = emlrtCreateCharArray(2, iv145);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &o_u[0]);
    emlrtAssign(&o_y, m9);
    for (i6 = 0; i6 < 8; i6++) {
      p_u[i6] = cv39[i6];
    }

    p_y = NULL;
    m9 = emlrtCreateCharArray(2, iv146);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m9, &p_u[0]);
    emlrtAssign(&p_y, m9);
    error(moduleInstance, message(moduleInstance, o_y, p_y, &emlrtMCI),
          &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        q_u[i6] = cv38[i6];
      }

      q_y = NULL;
      m9 = emlrtCreateCharArray(2, iv147);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9, &q_u
        [0]);
      emlrtAssign(&q_y, m9);
      for (i6 = 0; i6 < 7; i6++) {
        r_u[i6] = cv40[i6];
      }

      r_y = NULL;
      m9 = emlrtCreateCharArray(2, iv148);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m9, &r_u[0]);
      emlrtAssign(&r_y, m9);
      error(moduleInstance, message(moduleInstance, q_y, r_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      if (obj->pIsOscillatorDesigned) {
        c_obj = obj->pOscillator;
        if (c_obj->isInitialized == 2) {
          for (i6 = 0; i6 < 45; i6++) {
            s_u[i6] = cv38[i6];
          }

          s_y = NULL;
          m9 = emlrtCreateCharArray(2, iv149);
          emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m9,
            &s_u[0]);
          emlrtAssign(&s_y, m9);
          for (i6 = 0; i6 < 7; i6++) {
            t_u[i6] = cv40[i6];
          }

          t_y = NULL;
          m9 = emlrtCreateCharArray(2, iv150);
          emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m9,
            &t_u[0]);
          emlrtAssign(&t_y, m9);
          error(moduleInstance, message(moduleInstance, s_y, t_y, &emlrtMCI),
                &emlrtMCI);
        }

        if (c_obj->isInitialized == 1) {
          c_obj->isInitialized = 2;

          /* System object Destructor function: dsp.SineWave */
        }
      }

      SystemCore_release(moduleInstance, obj->pFilterDesigner);
    }
  }

  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.SineWave */
  /* System object Destructor function: dsp.SineWave */
  /* System object Destructor function: dsp.FIRDecimator */
  /* System object Destructor function: dsp.FIRDecimator */
}

static const mxArray *message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m10;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m10, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance, const
                  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = c;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, const mxArray *d, const mxArray *e,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m11, 3,
    pArrays, "message", true, location);
}

static const mxArray *c_message(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m12, 1,
    &pArray, "message", true, location);
}

static void init_simulink_io_address(InstanceStruct_SY2m30lpuXg1s83zafIs8
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->u0 = (real_T (*)[250000])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (creal_T (*)[6250])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_SY2m30lpuXg1s83zafIs8(SimStruct *S, int_T tid)
{
  InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance =
    (InstanceStruct_SY2m30lpuXg1s83zafIs8 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_SY2m30lpuXg1s83zafIs8(SimStruct *S)
{
  InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance =
    (InstanceStruct_SY2m30lpuXg1s83zafIs8 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_SY2m30lpuXg1s83zafIs8(SimStruct *S, int_T tid)
{
  InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance =
    (InstanceStruct_SY2m30lpuXg1s83zafIs8 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_SY2m30lpuXg1s83zafIs8(SimStruct *S)
{
  InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance =
    (InstanceStruct_SY2m30lpuXg1s83zafIs8 *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_SY2m30lpuXg1s83zafIs8(SimStruct *S)
{
  InstanceStruct_SY2m30lpuXg1s83zafIs8 *moduleInstance =
    (InstanceStruct_SY2m30lpuXg1s83zafIs8 *)calloc(1, sizeof
    (InstanceStruct_SY2m30lpuXg1s83zafIs8));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);
  ssSetmdlOutputs(S, mdlOutputs_SY2m30lpuXg1s83zafIs8);
  ssSetmdlInitializeConditions(S, mdlInitialize_SY2m30lpuXg1s83zafIs8);
  ssSetmdlUpdate(S, mdlUpdate_SY2m30lpuXg1s83zafIs8);
  ssSetmdlTerminate(S, mdlTerminate_SY2m30lpuXg1s83zafIs8);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_SY2m30lpuXg1s83zafIs8(SimStruct *S)
{
}

void method_dispatcher_SY2m30lpuXg1s83zafIs8(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_SY2m30lpuXg1s83zafIs8(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_SY2m30lpuXg1s83zafIs8(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: SY2m30lpuXg1s83zafIs8.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_SY2m30lpuXg1s83zafIs8_BuildInfoUpdate(void)
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
