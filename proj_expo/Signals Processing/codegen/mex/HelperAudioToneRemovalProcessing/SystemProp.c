/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "HelperAudioToneRemovalProcessing.h"
#include "SystemProp.h"
#include "HostLib_Network.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void c_SystemProp_matlabCodegenNotif(dsp_NotchPeakFilter *obj)
{
  dsp_NotchPeakFilter *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

void d_SystemProp_matlabCodegenNotif(dsp_NotchPeakFilter *obj)
{
  dsp_NotchPeakFilter *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

/* End of code generation (SystemProp.c) */
