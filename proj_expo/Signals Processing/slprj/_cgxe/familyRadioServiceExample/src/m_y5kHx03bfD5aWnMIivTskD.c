/* Include files */

#include "modelInterface.h"
#include "m_y5kHx03bfD5aWnMIivTskD.h"

/* Type Definitions */

/* Named Constants */
#define InputSampleRate                (8000.0)
#define OutputSampleRate               (50000.0)
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

static emlrtRTEInfo emlrtRTEI = { 255, 25, "SampleRateConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 260, 25, "SampleRateConverter",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dsp\\+dsp\\SampleRateConverter.m"
};

/* Function Declarations */
static void SampleRateConverter_stepImpl(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, dsp_SampleRateConverter_2 *obj, real_T u[1000], real_T y[6250]);
static void SystemCore_step(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, dspcodegen_FIRRateConverter *obj, real_T varargin_1[1000],
  real_T varargout_1[1250]);
static void cgxe_mdl_start(InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance);
static const mxArray *message(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, const mxArray *b, emlrtMCInfo *location);
static void init_simulink_io_address(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance);

/* Function Definitions */
static void SampleRateConverter_stepImpl(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, dsp_SampleRateConverter_2 *obj, real_T u[1000], real_T y[6250])
{
  real_T b_y1[1250];
  dspcodegen_FIRInterpolator *b_obj;
  int32_T m;
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

  dsp_FIRInterpolator_1 *c_obj;
  int32_T oIdx;
  int32_T coefArrayIdx;
  int32_T i;
  real_T accumulator;
  int32_T j;
  real_T product;
  SystemCore_step(moduleInstance, obj->filt1, u, b_y1);
  b_obj = obj->filt2;
  if (b_obj->isInitialized == 2) {
    for (m = 0; m < 45; m++) {
      b_u[m] = cv0[m];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    for (m = 0; m < 4; m++) {
      c_u[m] = cv1[m];
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
      for (m = 0; m < 51; m++) {
        d_u[m] = cv2[m];
      }

      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m0, &d_u
        [0]);
      emlrtAssign(&d_y, m0);
      for (m = 0; m < 5; m++) {
        e_u[m] = cv3[m];
      }

      e_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m0, &e_u[0]);
      emlrtAssign(&e_y, m0);
      error(moduleInstance, message(moduleInstance, d_y, e_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRInterpolator */
    for (m = 0; m < 29; m++) {
      b_obj->cSFunObject.W0_TapDelayBuff[m] = 0.0;
    }
  }

  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.FIRInterpolator */
  /* Loop over each input channel */
  for (m = 0; m < 5; m++) {
    oIdx = m;
    coefArrayIdx = m * 30;

    /* Consume delay line and beginning of input samples */
    for (i = 0; i < 29; i++) {
      accumulator = 0.0;
      for (j = 0; j < i + 1; j++) {
        product = b_y1[i - j] * c_obj->P1_FILTER_COEFF[coefArrayIdx + j];
        accumulator += product;
      }

      for (j = 0; j < 29 - i; j++) {
        product = c_obj->W0_TapDelayBuff[j] * c_obj->P1_FILTER_COEFF
          [((coefArrayIdx + i) + j) + 1];
        accumulator += product;
      }

      y[oIdx] = accumulator;
      oIdx += 5;
    }

    /* Consume remaining input samples */
    for (i = 0; i < 1221; i++) {
      accumulator = 0.0;
      for (j = 0; j < 30; j++) {
        product = b_y1[(i - j) + 29] * c_obj->P1_FILTER_COEFF[coefArrayIdx + j];
        accumulator += product;
      }

      y[oIdx] = accumulator;
      oIdx += 5;
    }
  }

  /* Update delay line for next frame */
  for (i = 0; i < 29; i++) {
    c_obj->W0_TapDelayBuff[28 - i] = b_y1[i + 1221];
  }
}

static void SystemCore_step(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, dspcodegen_FIRRateConverter *obj, real_T varargin_1[1000],
  real_T varargout_1[1250])
{
  int32_T nModDFactor;
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

  dspcodegen_FIRRateConverter *b_obj;
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

  dsp_FIRRateConverter_0 *c_obj;
  int32_T outIdx;
  int32_T inIdx;
  int32_T inBufIdx;
  int32_T n;
  int32_T outputStartIdx;
  real_T acc;
  int32_T coefPolyphaseOffset;
  int32_T i;
  real_T prod;
  if (obj->isInitialized == 2) {
    for (nModDFactor = 0; nModDFactor < 45; nModDFactor++) {
      u[nModDFactor] = cv4[nModDFactor];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (nModDFactor = 0; nModDFactor < 4; nModDFactor++) {
      b_u[nModDFactor] = cv5[nModDFactor];
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
      for (nModDFactor = 0; nModDFactor < 51; nModDFactor++) {
        c_u[nModDFactor] = cv6[nModDFactor];
      }

      c_y = NULL;
      m1 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m1, &c_u
        [0]);
      emlrtAssign(&c_y, m1);
      for (nModDFactor = 0; nModDFactor < 5; nModDFactor++) {
        d_u[nModDFactor] = cv7[nModDFactor];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &d_u[0]);
      emlrtAssign(&d_y, m1);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    b_obj->isInitialized = 1;

    /* System object Initialization function: dsp.FIRRateConverter */
    b_obj->cSFunObject.W1_InBufIdx = 0;
    for (nModDFactor = 0; nModDFactor < 24; nModDFactor++) {
      b_obj->cSFunObject.W0_InBuf[nModDFactor] = 0.0;
    }
  }

  b_obj = obj;
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;

  /* Update inBufIdx and inputChannelOffset for current channel */
  inBufIdx = b_obj->cSFunObject.W1_InBufIdx;
  for (n = 0; n < 1000; n++) {
    nModDFactor = n % 4;
    outputStartIdx = c_obj->P2_StartIdx[nModDFactor];
    nModDFactor = c_obj->P3_StopIdx[nModDFactor];

    /* Read input into inBufArray */
    c_obj->W0_InBuf[inBufIdx] = varargin_1[inIdx];
    inIdx++;

    /* Generate outputs (if any) for current input n */
    while (outputStartIdx < nModDFactor) {
      acc = 0.0;
      coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 24;
      for (i = inBufIdx; i < 24; i++) {
        prod = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          c_obj->W0_InBuf[i];
        acc += prod;
      }

      for (i = 0; i < inBufIdx; i++) {
        prod = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 24] *
          c_obj->W0_InBuf[i];
        acc += prod;
      }

      varargout_1[outIdx] = acc;
      outIdx++;
      outputStartIdx++;
    }

    /* Decrement inBufIdx, wrap if necessary */
    if (inBufIdx == 0) {
      inBufIdx = 23;
    } else {
      inBufIdx--;
    }
  }

  /* Update inBufIdx */
  b_obj->cSFunObject.W1_InBufIdx = inBufIdx;
}

static void cgxe_mdl_start(InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance)
{
  dsp_SampleRateConverter_2 *obj;
  dspcodegen_FIRRateConverter *iobj_0;
  dspcodegen_FIRInterpolator *iobj_1;
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

  static int16_T iv10[8] = { 1000, 1, 1, 1, 1, 1, 1, 1 };

  static char_T cv10[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  char_T c_u[29];
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 29 };

  static real_T dv0[120] = { -3.4242625017065591E-5, 0.00022544481237216963,
    -0.00072299200622154, 0.0017693912675247323, -0.0037022744248914859,
    0.0069740305890738982, -0.01220080595395328, 0.020303404069702411,
    -0.032927250066795477, 0.05384497835368092, -0.095137345975655957,
    0.22983590869567197, 0.93447294336832831, -0.14991759668200114,
    0.074483287559969413, -0.044048822533582645, 0.027172058902384444,
    -0.016636788805169906, 0.00982620656262581, -0.0054698686231404925,
    0.0027967054464982876, -0.0012656585425131202, 0.00047367585667585776,
    -0.00012289154783791511, -9.1839566276128161E-5, 0.00047561746719124425,
    -0.0014222806068820185, 0.0033532150696091124, -0.0068485689002488609,
    0.01268430547331087, -0.021929806317922032, 0.036230384952765066,
    -0.058660910844471448, 0.09669084916810694, -0.17643912797055328,
    0.49963650557356665, 0.7535424818178349, -0.20498480005356898,
    0.10769694781512026, -0.064627195525412573, 0.039923057888560418,
    -0.024316561222127345, 0.014219131817578615, -0.0077994735434900059,
    0.0039054664206729, -0.0017136028940868298, 0.00060853490638598,
    -0.0001390289291415421, -0.0001390289291415421, 0.00060853490638598,
    -0.0017136028940868298, 0.0039054664206729, -0.0077994735434900059,
    0.014219131817578615, -0.024316561222127345, 0.039923057888560418,
    -0.064627195525412573, 0.10769694781512026, -0.20498480005356898,
    0.7535424818178349, 0.49963650557356665, -0.17643912797055328,
    0.09669084916810694, -0.058660910844471448, 0.036230384952765066,
    -0.021929806317922032, 0.01268430547331087, -0.0068485689002488609,
    0.0033532150696091124, -0.0014222806068820185, 0.00047561746719124425,
    -9.1839566276128161E-5, -0.00012289154783791511, 0.00047367585667585776,
    -0.0012656585425131202, 0.0027967054464982876, -0.0054698686231404925,
    0.00982620656262581, -0.016636788805169906, 0.027172058902384444,
    -0.044048822533582645, 0.074483287559969413, -0.14991759668200114,
    0.93447294336832831, 0.22983590869567197, -0.095137345975655957,
    0.05384497835368092, -0.032927250066795477, 0.020303404069702411,
    -0.01220080595395328, 0.0069740305890738982, -0.0037022744248914859,
    0.0017693912675247323, -0.00072299200622154, 0.00022544481237216963,
    -3.4242625017065591E-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static int8_T iv12[5] = { 0, 4, 3, 2, 1 };

  static int8_T iv13[4] = { 0, 2, 3, 4 };

  static real_T dv1[150] = { 4.8398786658837571E-5, -0.0002359446660870121,
    0.0006575539435791128, -0.001463543036881341, 0.0028533314429333464,
    -0.0050816420544940542, 0.0084691366953693614, -0.013426140430172449,
    0.020508357934368757, -0.030548976629318429, 0.04498565084270497,
    -0.066759259979078514, 0.10331414635569135, -0.18086906661713018,
    0.5013713113245587, 0.75470357313793246, -0.20890716164948461,
    0.11393365128291408, -0.072494612939965009, 0.048612921716356061,
    -0.033021287501685162, 0.022245671175269349, -0.014651146684284697,
    0.0093198098008789431, -0.0056547888930827137, 0.0032226952320808539,
    -0.0016874886048653462, 0.00078236149904368818, -0.00029739454686287874,
    7.28890456085324E-5, 7.28890456085324E-5, -0.00029739454686287874,
    0.00078236149904368818, -0.0016874886048653462, 0.0032226952320808539,
    -0.0056547888930827137, 0.0093198098008789431, -0.014651146684284697,
    0.022245671175269349, -0.033021287501685162, 0.048612921716356061,
    -0.072494612939965009, 0.11393365128291408, -0.20890716164948461,
    0.75470357313793246, 0.5013713113245587, -0.18086906661713018,
    0.10331414635569135, -0.066759259979078514, 0.04498565084270497,
    -0.030548976629318429, 0.020508357934368757, -0.013426140430172449,
    0.0084691366953693614, -0.0050816420544940542, 0.0028533314429333464,
    -0.001463543036881341, 0.0006575539435791128, -0.0002359446660870121,
    4.8398786658837571E-5, 6.3701805999173591E-5, -0.00022812851185661517,
    0.00057094908826659679, -0.0011967964768258108, 0.0022420535890010722,
    -0.003879371927432337, 0.0063265952297323009, -0.0098673684621762847,
    0.014899670707968882, -0.022052183824633954, 0.032482074116578386,
    -0.048748194213825466, 0.078081726087756945, -0.15201684703347287,
    0.93483258708027384, 0.23125761946796752, -0.098176322021198664,
    0.058159334358523648, -0.038054549608958356, 0.02573505185452411,
    -0.017458429387697105, 0.011673202644525522, -0.0075927480830964914,
    0.0047469998324494228, -0.0028148900258865321, 0.0015557784826256,
    -0.00078043728534576691, 0.00033866069890754725, -0.00011354387935220856,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, -0.00011354387935220856, 0.00033866069890754725,
    -0.00078043728534576691, 0.0015557784826256, -0.0028148900258865321,
    0.0047469998324494228, -0.0075927480830964914, 0.011673202644525522,
    -0.017458429387697105, 0.02573505185452411, -0.038054549608958356,
    0.058159334358523648, -0.098176322021198664, 0.23125761946796752,
    0.93483258708027384, -0.15201684703347287, 0.078081726087756945,
    -0.048748194213825466, 0.032482074116578386, -0.022052183824633954,
    0.014899670707968882, -0.0098673684621762847, 0.0063265952297323009,
    -0.003879371927432337, 0.0022420535890010722, -0.0011967964768258108,
    0.00057094908826659679, -0.00022812851185661517, 6.3701805999173591E-5, 0.0
  };

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

  /* System object Constructor function: dsp.FIRRateConverter */
  for (i0 = 0; i0 < 120; i0++) {
    iobj_0->cSFunObject.P0_FILTER[i0] = dv0[i0];
  }

  for (i0 = 0; i0 < 5; i0++) {
    iobj_0->cSFunObject.P1_PolyphaseSelector[i0] = iv12[i0];
  }

  for (i0 = 0; i0 < 4; i0++) {
    iobj_0->cSFunObject.P2_StartIdx[i0] = iv13[i0];
  }

  for (i0 = 0; i0 < 4; i0++) {
    iobj_0->cSFunObject.P3_StopIdx[i0] = 2 + i0;
  }

  obj->filt1 = iobj_0;
  if (!(obj->filt2 == NULL)) {
    emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal, &emlrtRTEI,
      "EMLRT:runTime:NontunableHandleProp", 0);
  }

  iobj_1->isInitialized = 0;

  /* System object Constructor function: dsp.FIRInterpolator */
  iobj_1->cSFunObject.P0_IC = 0.0;
  for (i0 = 0; i0 < 150; i0++) {
    iobj_1->cSFunObject.P1_FILTER_COEFF[i0] = dv1[i0];
  }

  obj->filt2 = iobj_1;
  obj->NumChannels = 1.0;
}

static void cgxe_mdl_initialize(InstanceStruct_y5kHx03bfD5aWnMIivTskD
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
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *m3;
  static char_T cv12[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv16[2] = { 1, 45 };

  static char_T cv13[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 5 };

  dspcodegen_FIRRateConverter *b_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv18[2] = { 1, 45 };

  char_T f_u[5];
  const mxArray *f_y;
  static const int32_T iv19[2] = { 1, 5 };

  dspcodegen_FIRInterpolator *c_obj;
  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv20[2] = { 1, 45 };

  char_T h_u[5];
  const mxArray *h_y;
  static const int32_T iv21[2] = { 1, 5 };

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
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i1 = 0; i1 < 8; i1++) {
      b_u[i1] = cv12[i1];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
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
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &c_u
        [0]);
      emlrtAssign(&c_y, m3);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv13[i1];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
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
        m3 = emlrtCreateCharArray(2, iv18);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3,
          &e_u[0]);
        emlrtAssign(&e_y, m3);
        for (i1 = 0; i1 < 5; i1++) {
          f_u[i1] = cv13[i1];
        }

        f_y = NULL;
        m3 = emlrtCreateCharArray(2, iv19);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3,
          &f_u[0]);
        emlrtAssign(&f_y, m3);
        error(moduleInstance, message(moduleInstance, e_y, f_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (b_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRRateConverter */
        b_obj->cSFunObject.W1_InBufIdx = 0;
        for (i1 = 0; i1 < 24; i1++) {
          b_obj->cSFunObject.W0_InBuf[i1] = 0.0;
        }
      }

      c_obj = obj->filt2;
      if (c_obj->isInitialized == 2) {
        for (i1 = 0; i1 < 45; i1++) {
          g_u[i1] = cv11[i1];
        }

        g_y = NULL;
        m3 = emlrtCreateCharArray(2, iv20);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3,
          &g_u[0]);
        emlrtAssign(&g_y, m3);
        for (i1 = 0; i1 < 5; i1++) {
          h_u[i1] = cv13[i1];
        }

        h_y = NULL;
        m3 = emlrtCreateCharArray(2, iv21);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m3,
          &h_u[0]);
        emlrtAssign(&h_y, m3);
        error(moduleInstance, message(moduleInstance, g_y, h_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (c_obj->isInitialized == 1) {
        /* System object Initialization function: dsp.FIRInterpolator */
        for (i1 = 0; i1 < 29; i1++) {
          c_obj->cSFunObject.W0_TapDelayBuff[i1] = 0.0;
        }
      }
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance)
{
  real_T varargin_6[1000];
  int32_T k;
  dsp_SampleRateConverter_2 *obj;
  dspcodegen_FIRRateConverter *iobj_0;
  dspcodegen_FIRInterpolator *iobj_1;
  static char_T cv14[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv22[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv15[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv23[2] = { 1, 4 };

  static char_T cv16[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv24[2] = { 1, 51 };

  static char_T cv17[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv25[2] = { 1, 5 };

  static int16_T inputSize[8] = { 1000, 1, 1, 1, 1, 1, 1, 1 };

  static char_T cv18[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  char_T e_u[29];
  const mxArray *e_y;
  static const int32_T iv26[2] = { 1, 29 };

  static real_T dv2[120] = { -3.4242625017065591E-5, 0.00022544481237216963,
    -0.00072299200622154, 0.0017693912675247323, -0.0037022744248914859,
    0.0069740305890738982, -0.01220080595395328, 0.020303404069702411,
    -0.032927250066795477, 0.05384497835368092, -0.095137345975655957,
    0.22983590869567197, 0.93447294336832831, -0.14991759668200114,
    0.074483287559969413, -0.044048822533582645, 0.027172058902384444,
    -0.016636788805169906, 0.00982620656262581, -0.0054698686231404925,
    0.0027967054464982876, -0.0012656585425131202, 0.00047367585667585776,
    -0.00012289154783791511, -9.1839566276128161E-5, 0.00047561746719124425,
    -0.0014222806068820185, 0.0033532150696091124, -0.0068485689002488609,
    0.01268430547331087, -0.021929806317922032, 0.036230384952765066,
    -0.058660910844471448, 0.09669084916810694, -0.17643912797055328,
    0.49963650557356665, 0.7535424818178349, -0.20498480005356898,
    0.10769694781512026, -0.064627195525412573, 0.039923057888560418,
    -0.024316561222127345, 0.014219131817578615, -0.0077994735434900059,
    0.0039054664206729, -0.0017136028940868298, 0.00060853490638598,
    -0.0001390289291415421, -0.0001390289291415421, 0.00060853490638598,
    -0.0017136028940868298, 0.0039054664206729, -0.0077994735434900059,
    0.014219131817578615, -0.024316561222127345, 0.039923057888560418,
    -0.064627195525412573, 0.10769694781512026, -0.20498480005356898,
    0.7535424818178349, 0.49963650557356665, -0.17643912797055328,
    0.09669084916810694, -0.058660910844471448, 0.036230384952765066,
    -0.021929806317922032, 0.01268430547331087, -0.0068485689002488609,
    0.0033532150696091124, -0.0014222806068820185, 0.00047561746719124425,
    -9.1839566276128161E-5, -0.00012289154783791511, 0.00047367585667585776,
    -0.0012656585425131202, 0.0027967054464982876, -0.0054698686231404925,
    0.00982620656262581, -0.016636788805169906, 0.027172058902384444,
    -0.044048822533582645, 0.074483287559969413, -0.14991759668200114,
    0.93447294336832831, 0.22983590869567197, -0.095137345975655957,
    0.05384497835368092, -0.032927250066795477, 0.020303404069702411,
    -0.01220080595395328, 0.0069740305890738982, -0.0037022744248914859,
    0.0017693912675247323, -0.00072299200622154, 0.00022544481237216963,
    -3.4242625017065591E-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static int8_T iv27[5] = { 0, 4, 3, 2, 1 };

  static int8_T iv28[4] = { 0, 2, 3, 4 };

  static real_T dv3[150] = { 4.8398786658837571E-5, -0.0002359446660870121,
    0.0006575539435791128, -0.001463543036881341, 0.0028533314429333464,
    -0.0050816420544940542, 0.0084691366953693614, -0.013426140430172449,
    0.020508357934368757, -0.030548976629318429, 0.04498565084270497,
    -0.066759259979078514, 0.10331414635569135, -0.18086906661713018,
    0.5013713113245587, 0.75470357313793246, -0.20890716164948461,
    0.11393365128291408, -0.072494612939965009, 0.048612921716356061,
    -0.033021287501685162, 0.022245671175269349, -0.014651146684284697,
    0.0093198098008789431, -0.0056547888930827137, 0.0032226952320808539,
    -0.0016874886048653462, 0.00078236149904368818, -0.00029739454686287874,
    7.28890456085324E-5, 7.28890456085324E-5, -0.00029739454686287874,
    0.00078236149904368818, -0.0016874886048653462, 0.0032226952320808539,
    -0.0056547888930827137, 0.0093198098008789431, -0.014651146684284697,
    0.022245671175269349, -0.033021287501685162, 0.048612921716356061,
    -0.072494612939965009, 0.11393365128291408, -0.20890716164948461,
    0.75470357313793246, 0.5013713113245587, -0.18086906661713018,
    0.10331414635569135, -0.066759259979078514, 0.04498565084270497,
    -0.030548976629318429, 0.020508357934368757, -0.013426140430172449,
    0.0084691366953693614, -0.0050816420544940542, 0.0028533314429333464,
    -0.001463543036881341, 0.0006575539435791128, -0.0002359446660870121,
    4.8398786658837571E-5, 6.3701805999173591E-5, -0.00022812851185661517,
    0.00057094908826659679, -0.0011967964768258108, 0.0022420535890010722,
    -0.003879371927432337, 0.0063265952297323009, -0.0098673684621762847,
    0.014899670707968882, -0.022052183824633954, 0.032482074116578386,
    -0.048748194213825466, 0.078081726087756945, -0.15201684703347287,
    0.93483258708027384, 0.23125761946796752, -0.098176322021198664,
    0.058159334358523648, -0.038054549608958356, 0.02573505185452411,
    -0.017458429387697105, 0.011673202644525522, -0.0075927480830964914,
    0.0047469998324494228, -0.0028148900258865321, 0.0015557784826256,
    -0.00078043728534576691, 0.00033866069890754725, -0.00011354387935220856,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, -0.00011354387935220856, 0.00033866069890754725,
    -0.00078043728534576691, 0.0015557784826256, -0.0028148900258865321,
    0.0047469998324494228, -0.0075927480830964914, 0.011673202644525522,
    -0.017458429387697105, 0.02573505185452411, -0.038054549608958356,
    0.058159334358523648, -0.098176322021198664, 0.23125761946796752,
    0.93483258708027384, -0.15201684703347287, 0.078081726087756945,
    -0.048748194213825466, 0.032482074116578386, -0.022052183824633954,
    0.014899670707968882, -0.0098673684621762847, 0.0063265952297323009,
    -0.003879371927432337, 0.0022420535890010722, -0.0011967964768258108,
    0.00057094908826659679, -0.00022812851185661517, 6.3701805999173591E-5, 0.0
  };

  char_T f_u[45];
  const mxArray *f_y;
  static const int32_T iv29[2] = { 1, 45 };

  static char_T cv19[5] = { 'r', 'e', 's', 'e', 't' };

  char_T g_u[5];
  const mxArray *g_y;
  static const int32_T iv30[2] = { 1, 5 };

  char_T h_u[45];
  const mxArray *h_y;
  static const int32_T iv31[2] = { 1, 45 };

  char_T i_u[5];
  const mxArray *i_y;
  static const int32_T iv32[2] = { 1, 5 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  char_T j_u[29];
  const mxArray *j_y;
  static const int32_T iv33[2] = { 1, 29 };

  real_T varargout_1[6250];
  for (k = 0; k < 1000; k++) {
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
    m4 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (k = 0; k < 4; k++) {
      b_u[k] = cv15[k];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv23);
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
      m4 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m4, &c_u
        [0]);
      emlrtAssign(&c_y, m4);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv17[k];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv25);
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
      m4 = emlrtCreateCharArray(2, iv26);
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

    /* System object Constructor function: dsp.FIRRateConverter */
    for (k = 0; k < 120; k++) {
      iobj_0->cSFunObject.P0_FILTER[k] = dv2[k];
    }

    for (k = 0; k < 5; k++) {
      iobj_0->cSFunObject.P1_PolyphaseSelector[k] = iv27[k];
    }

    for (k = 0; k < 4; k++) {
      iobj_0->cSFunObject.P2_StartIdx[k] = iv28[k];
    }

    for (k = 0; k < 4; k++) {
      iobj_0->cSFunObject.P3_StopIdx[k] = 2 + k;
    }

    obj->filt1 = iobj_0;
    if (!(obj->filt2 == NULL)) {
      emlrtErrorWithMessageIdR2012b(moduleInstance->emlrtRootTLSGlobal,
        &emlrtRTEI, "EMLRT:runTime:NontunableHandleProp", 0);
    }

    iobj_1->isInitialized = 0;

    /* System object Constructor function: dsp.FIRInterpolator */
    iobj_1->cSFunObject.P0_IC = 0.0;
    for (k = 0; k < 150; k++) {
      iobj_1->cSFunObject.P1_FILTER_COEFF[k] = dv3[k];
    }

    obj->filt2 = iobj_1;
    obj->NumChannels = 1.0;
    iobj_0 = obj->filt1;
    if (iobj_0->isInitialized == 2) {
      for (k = 0; k < 45; k++) {
        f_u[k] = cv14[k];
      }

      f_y = NULL;
      m4 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &f_u
        [0]);
      emlrtAssign(&f_y, m4);
      for (k = 0; k < 5; k++) {
        g_u[k] = cv19[k];
      }

      g_y = NULL;
      m4 = emlrtCreateCharArray(2, iv30);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &g_u[0]);
      emlrtAssign(&g_y, m4);
      error(moduleInstance, message(moduleInstance, f_y, g_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (iobj_0->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRRateConverter */
      iobj_0->cSFunObject.W1_InBufIdx = 0;
      for (k = 0; k < 24; k++) {
        iobj_0->cSFunObject.W0_InBuf[k] = 0.0;
      }
    }

    iobj_1 = obj->filt2;
    if (iobj_1->isInitialized == 2) {
      for (k = 0; k < 45; k++) {
        h_u[k] = cv14[k];
      }

      h_y = NULL;
      m4 = emlrtCreateCharArray(2, iv31);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m4, &h_u
        [0]);
      emlrtAssign(&h_y, m4);
      for (k = 0; k < 5; k++) {
        i_u[k] = cv19[k];
      }

      i_y = NULL;
      m4 = emlrtCreateCharArray(2, iv32);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &i_u[0]);
      emlrtAssign(&i_y, m4);
      error(moduleInstance, message(moduleInstance, h_y, i_y, &c_emlrtMCI),
            &c_emlrtMCI);
    }

    if (iobj_1->isInitialized == 1) {
      /* System object Initialization function: dsp.FIRInterpolator */
      for (k = 0; k < 29; k++) {
        iobj_1->cSFunObject.W0_TapDelayBuff[k] = 0.0;
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
    m4 = emlrtCreateCharArray(2, iv33);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 29, m4, &j_u[0]);
    emlrtAssign(&j_y, m4);
    error(moduleInstance, b_message(moduleInstance, j_y, &d_emlrtMCI),
          &d_emlrtMCI);
  }

  SampleRateConverter_stepImpl(moduleInstance, obj, varargin_6, varargout_1);
  for (k = 0; k < 6250; k++) {
    (*moduleInstance->b_y0)[k] = varargout_1[k];
  }
}

static void cgxe_mdl_update(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_y5kHx03bfD5aWnMIivTskD
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
  static const int32_T iv34[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv21[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv36[2] = { 1, 45 };

  static char_T cv22[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv37[2] = { 1, 7 };

  dspcodegen_FIRRateConverter *b_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv38[2] = { 1, 45 };

  char_T f_u[7];
  const mxArray *f_y;
  static const int32_T iv39[2] = { 1, 7 };

  dspcodegen_FIRInterpolator *c_obj;
  char_T g_u[45];
  const mxArray *g_y;
  static const int32_T iv40[2] = { 1, 45 };

  char_T h_u[7];
  const mxArray *h_y;
  static const int32_T iv41[2] = { 1, 7 };

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
    m5 = emlrtCreateCharArray(2, iv34);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (i2 = 0; i2 < 8; i2++) {
      b_u[i2] = cv21[i2];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv35);
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
      m5 = emlrtCreateCharArray(2, iv36);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &c_u
        [0]);
      emlrtAssign(&c_y, m5);
      for (i2 = 0; i2 < 7; i2++) {
        d_u[i2] = cv22[i2];
      }

      d_y = NULL;
      m5 = emlrtCreateCharArray(2, iv37);
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
        m5 = emlrtCreateCharArray(2, iv38);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5,
          &e_u[0]);
        emlrtAssign(&e_y, m5);
        for (i2 = 0; i2 < 7; i2++) {
          f_u[i2] = cv22[i2];
        }

        f_y = NULL;
        m5 = emlrtCreateCharArray(2, iv39);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m5,
          &f_u[0]);
        emlrtAssign(&f_y, m5);
        error(moduleInstance, message(moduleInstance, e_y, f_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (b_obj->isInitialized == 1) {
        b_obj->isInitialized = 2;

        /* System object Destructor function: dsp.FIRRateConverter */
      }

      c_obj = obj->filt2;
      if (c_obj->isInitialized == 2) {
        for (i2 = 0; i2 < 45; i2++) {
          g_u[i2] = cv20[i2];
        }

        g_y = NULL;
        m5 = emlrtCreateCharArray(2, iv40);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5,
          &g_u[0]);
        emlrtAssign(&g_y, m5);
        for (i2 = 0; i2 < 7; i2++) {
          h_u[i2] = cv22[i2];
        }

        h_y = NULL;
        m5 = emlrtCreateCharArray(2, iv41);
        emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m5,
          &h_u[0]);
        emlrtAssign(&h_y, m5);
        error(moduleInstance, message(moduleInstance, g_y, h_y, &c_emlrtMCI),
              &c_emlrtMCI);
      }

      if (c_obj->isInitialized == 1) {
        c_obj->isInitialized = 2;

        /* System object Destructor function: dsp.FIRInterpolator */
      }

      obj->NumChannels = -1.0;
    }
  }

  /* System object Destructor function: dsp.FIRRateConverter */
  /* System object Destructor function: dsp.FIRRateConverter */
  /* System object Destructor function: dsp.FIRInterpolator */
  /* System object Destructor function: dsp.FIRInterpolator */
}

static const mxArray *message(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m6, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m7;
  pArray = b;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m7, 1,
    &pArray, "message", true, location);
}

static void init_simulink_io_address(InstanceStruct_y5kHx03bfD5aWnMIivTskD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->u0 = (real_T (*)[1000])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (real_T (*)[6250])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_y5kHx03bfD5aWnMIivTskD(SimStruct *S, int_T tid)
{
  InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance =
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_y5kHx03bfD5aWnMIivTskD(SimStruct *S)
{
  InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance =
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_y5kHx03bfD5aWnMIivTskD(SimStruct *S, int_T tid)
{
  InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance =
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_y5kHx03bfD5aWnMIivTskD(SimStruct *S)
{
  InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance =
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_y5kHx03bfD5aWnMIivTskD(SimStruct *S)
{
  InstanceStruct_y5kHx03bfD5aWnMIivTskD *moduleInstance =
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD *)calloc(1, sizeof
    (InstanceStruct_y5kHx03bfD5aWnMIivTskD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);
  ssSetmdlOutputs(S, mdlOutputs_y5kHx03bfD5aWnMIivTskD);
  ssSetmdlInitializeConditions(S, mdlInitialize_y5kHx03bfD5aWnMIivTskD);
  ssSetmdlUpdate(S, mdlUpdate_y5kHx03bfD5aWnMIivTskD);
  ssSetmdlTerminate(S, mdlTerminate_y5kHx03bfD5aWnMIivTskD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_y5kHx03bfD5aWnMIivTskD(SimStruct *S)
{
}

void method_dispatcher_y5kHx03bfD5aWnMIivTskD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_y5kHx03bfD5aWnMIivTskD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_y5kHx03bfD5aWnMIivTskD(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: y5kHx03bfD5aWnMIivTskD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_y5kHx03bfD5aWnMIivTskD_BuildInfoUpdate(void)
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
