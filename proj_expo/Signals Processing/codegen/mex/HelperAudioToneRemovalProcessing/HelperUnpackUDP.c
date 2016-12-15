/*
 * HelperUnpackUDP.c
 *
 * Code generation for function 'HelperUnpackUDP'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "HelperUnpackUDP.h"
#include "HelperAudioToneRemovalProcessing_emxutil.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static dsp_UDPReceiver_0 hUDPReceiver;
static boolean_T hUDPReceiver_not_empty;
static boolean_T resetSwitch;
static boolean_T pauseSwitch;
static emlrtRSInfo s_emlrtRSI = { 68, "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m"
};

static emlrtRSInfo t_emlrtRSI = { 78, "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m"
};

static emlrtRSInfo u_emlrtRSI = { 100, "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 15, 1, "release",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\lib\\scomp\\release.m" };

static emlrtRTEInfo d_emlrtRTEI = { 48, 20, "step",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\lib\\scomp\\step.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 102, 25, "paramNew", "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 90, 8, "paramNew", "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 94, 8, "paramNew", "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 98, 8, "paramNew", "HelperUnpackUDP",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\dsp\\dspdemos\\HelperUnpackUDP.m",
  0 };

/* Function Definitions */
void HelperUnpackUDP(const emlrtStack *sp, real_T paramNew_data[], int32_T
                     paramNew_size[2], boolean_T *simControlFlags_resetObj,
                     boolean_T *simControlFlags_pauseSim, boolean_T
                     *simControlFlags_stopSim)
{
  dsp_UDPReceiver_0 *obj;
  char_T *sErr;
  int32_T samplesRead;
  int32_T loop_ub;
  int32_T i1;
  real_T b_paramNew_data[252];
  int32_T i2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* HELPERUNPACKUDP Unpack contents of UDP packet from tuning UI */
  /*  Function to resolve the UDP packet received from Parameter Tuning UI */
  /*  into parameter values, reset flag and stop simulation flag. */
  /*  Input: */
  /*          none */
  /*  Output: */
  /*          paramNew        - Array of parameter values received from the UI */
  /*          simControlFlags - Structure containing flags for simulation */
  /*                            control. These include the following: */
  /*                            resetObj: Flag to reset the System object.  */
  /*                                      If true, the object needs to be reset */
  /*                            pauseSim: Flag to pause the simulation. If  */
  /*                                      true, the simulation needs to be  */
  /*                                      paused. */
  /*                            stopSim:  Flag to stop the simulation. If true, */
  /*                                      the simulation needs to be stopped */
  /*  */
  /*  This function HelperUnpackUDP is only in support of */
  /*  HelperCreateParamTuningUI. It may change in a future release. */
  /*  */
  /*  Example: */
  /*          % obj is a System object with a tunable parameter 'Position' */
  /*          obj = dsp.TimeScope('Position', [100 100 560 420]); */
  /*           */
  /*          % Define parameters to be tuned */
  /*          param(1).Name = 'X-Position'; */
  /*          param(1).InitialValue = obj.Position(1); */
  /*          param(1).Limits = [0, 400]; */
  /*   */
  /*          % Create UI to tune the Position parameter */
  /*          hUI = HelperCreateParamTuningUI(param); */
  /*   */
  /*          while(1)  % Continue until 'Stop Simulation' button is pressed */
  /*              [paramNew, simControlFlags] = HelperUnpackUDP();  */
  /*                     % Obtain new values for parameter through UDP Receive */
  /*   */
  /*              if simControlFlags.stopSim      % Check if simulation needs to be stopped */
  /*                  break; */
  /*              end */
  /*              if simControlFlags.pauseSim */
  /*                  drawnow; */
  /*                  continue; */
  /*              end */
  /*              if ~isempty(paramNew) */
  /*                  if simControlFlags.resetObj     % Check if object needs to be reset */
  /*                      reset(obj); */
  /*                  end */
  /*   */
  /*                  obj.Position(1) = paramNew(1);  % Change Parameter value */
  /*              end */
  /*   */
  /*              % Now that the parameter is tuned, call the STEP function */
  /*              x = randn; */
  /*              step(obj, x); */
  /*          end */
  /*         */
  /*          % Cleanup */
  /*          close(hUI);      % Close the tuning UI */
  /*          release(obj);     % Release the System object */
  /*  Copyright 2013 The MathWorks, Inc. */
  if (!hUDPReceiver_not_empty) {
    /*  UDP Receiver */
    st.site = &s_emlrtRSI;

    /* System object Constructor function: dsp.UDPReceiver */
    hUDPReceiver.S0_isInitialized = 0;
    hUDPReceiver_not_empty = true;
  }

  *simControlFlags_resetObj = false;
  *simControlFlags_pauseSim = pauseSwitch;
  *simControlFlags_stopSim = false;
  st.site = &t_emlrtRSI;
  obj = &hUDPReceiver;
  if (hUDPReceiver.S0_isInitialized != 1) {
    if (hUDPReceiver.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    obj->S0_isInitialized = 1;

    /* System object Start function: dsp.UDPReceiver */
    sErr = GetErrorBuffer(&obj->W0_NetworkLib[0U]);
    CreateUDPInterface(&obj->W0_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&obj->W0_NetworkLib[0U], 0, "0.0.0.0", 25000, "0.0.0.0",
                        -1, 400, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&obj->W0_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&obj->W0_NetworkLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }
    }
  }

  /* System object Outputs function: dsp.UDPReceiver */
  sErr = GetErrorBuffer(&obj->W0_NetworkLib[0U]);
  obj->O0_Y0.size[0] = 255;
  obj->O0_Y0.size[1] = 1;
  samplesRead = 255;
  LibOutputs_Network(&obj->W0_NetworkLib[0U], &obj->O0_Y0.data[0U], &samplesRead);
  if (*sErr != 0) {
    PrintError(sErr);
  }

  obj->O0_Y0.size[0] = samplesRead;
  obj->O0_Y0.size[1] = 1;
  paramNew_size[0] = obj->O0_Y0.size[0];
  paramNew_size[1] = obj->O0_Y0.size[1];
  loop_ub = obj->O0_Y0.size[0] * obj->O0_Y0.size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    paramNew_data[i1] = obj->O0_Y0.data[i1];
  }

  if ((paramNew_size[0] == 0) || (paramNew_size[1] == 0)) {
  } else {
    /*  paramNew has new values for parameters for the first N elements, */
    /*  where N is the number of parameters tuned in the UI. The last three */
    /*  elements correspond to the Reset, Pause Simulation and Stop */
    /*  Simulation buttons. */
    if (muIntScalarMax_sint32(paramNew_size[0], 1) < 4) {
      /*  check for sporadic UDP input from other sources */
      paramNew_size[0] = 0;
      paramNew_size[1] = 0;
    } else {
      i1 = paramNew_size[0] - 2;
      if (!((i1 >= 1) && (i1 <= paramNew_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, paramNew_size[0], &c_emlrtBCI, sp);
      }

      if (paramNew_data[i1 - 1] != (real_T)resetSwitch) {
        /*  Reset System object */
        *simControlFlags_resetObj = true;
        resetSwitch = !resetSwitch;
      }

      i1 = paramNew_size[0] - 1;
      if (!((i1 >= 1) && (i1 <= paramNew_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, paramNew_size[0], &d_emlrtBCI, sp);
      }

      if (paramNew_data[i1 - 1] != (real_T)pauseSwitch) {
        /*  Pause simulation */
        pauseSwitch = !pauseSwitch;
        *simControlFlags_pauseSim = pauseSwitch;
      }

      if (!(paramNew_size[0] >= 1)) {
        emlrtDynamicBoundsCheckR2012b(paramNew_size[0], 1, paramNew_size[0],
          &e_emlrtBCI, sp);
      }

      if (paramNew_data[paramNew_size[0] - 1] != 0.0) {
        /*  Stop simulation */
        *simControlFlags_stopSim = true;
        st.site = &u_emlrtRSI;
        obj = &hUDPReceiver;
        if (hUDPReceiver.S0_isInitialized == 2) {
          emlrtErrorWithMessageIdR2012b(&st, &c_emlrtRTEI,
            "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
        }

        /* System object Destructor function: dsp.UDPReceiver */
        if ((obj->S0_isInitialized == 1) && (obj->S0_isInitialized != 2)) {
          obj->S0_isInitialized = 2;

          /* System object Terminate function: dsp.UDPReceiver */
          sErr = GetErrorBuffer(&obj->W0_NetworkLib[0U]);
          LibTerminate(&obj->W0_NetworkLib[0U]);
          if (*sErr != 0) {
            PrintError(sErr);
          }

          LibDestroy(&obj->W0_NetworkLib[0U], 0);
          DestroyUDPInterface(&obj->W0_NetworkLib[0U]);
        }
      }

      if (1 > paramNew_size[0] - 3) {
        loop_ub = 0;
      } else {
        loop_ub = paramNew_size[0] - 3;
        if (!((loop_ub >= 1) && (loop_ub <= paramNew_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, paramNew_size[0],
            &b_emlrtBCI, sp);
        }
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        b_paramNew_data[i1] = paramNew_data[i1];
      }

      paramNew_size[0] = loop_ub;
      paramNew_size[1] = 1;
      for (i1 = 0; i1 < 1; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          paramNew_data[i2] = b_paramNew_data[i2];
        }
      }

      /*  Parameter values */
    }
  }
}

void HelperUnpackUDP_free(void)
{
  dsp_UDPReceiver_0 *obj;
  char_T *sErr;
  obj = &hUDPReceiver;

  /* System object Destructor function: dsp.UDPReceiver */
  if ((hUDPReceiver.S0_isInitialized == 1) && (hUDPReceiver.S0_isInitialized !=
       2)) {
    hUDPReceiver.S0_isInitialized = 2;

    /* System object Terminate function: dsp.UDPReceiver */
    sErr = GetErrorBuffer(&obj->W0_NetworkLib[0U]);
    LibTerminate(&obj->W0_NetworkLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&obj->W0_NetworkLib[0U], 0);
    DestroyUDPInterface(&obj->W0_NetworkLib[0U]);
  }
}

void HelperUnpackUDP_init(void)
{
  emxInitStruct_dsp_UDPReceiver_0(&hUDPReceiver);
  hUDPReceiver_not_empty = false;
  resetSwitch = false;
  pauseSwitch = false;
}

void pauseSwitch_not_empty_init(void)
{
}

void resetSwitch_not_empty_init(void)
{
}

/* End of code generation (HelperUnpackUDP.c) */
