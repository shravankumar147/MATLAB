/* Include files */

#include "familyRadioServiceExample_cgxe.h"
#include "m_5ndm3t6eGrpAcmOsRijoGB.h"
#include "m_SY2m30lpuXg1s83zafIs8.h"
#include "m_FztNqarQ80TA694cfZ23r.h"
#include "m_y5kHx03bfD5aWnMIivTskD.h"

unsigned int cgxe_familyRadioServiceExample_method_dispatcher(SimStruct* S,
  int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1187387154 &&
      ssGetChecksum1(S) == 1620221863 &&
      ssGetChecksum2(S) == 3900381419 &&
      ssGetChecksum3(S) == 339451099) {
    method_dispatcher_5ndm3t6eGrpAcmOsRijoGB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1312744813 &&
      ssGetChecksum1(S) == 2449059476 &&
      ssGetChecksum2(S) == 1703082154 &&
      ssGetChecksum3(S) == 3121236896) {
    method_dispatcher_SY2m30lpuXg1s83zafIs8(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2710417968 &&
      ssGetChecksum1(S) == 3919711643 &&
      ssGetChecksum2(S) == 2775379516 &&
      ssGetChecksum3(S) == 2017849488) {
    method_dispatcher_FztNqarQ80TA694cfZ23r(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3760600558 &&
      ssGetChecksum1(S) == 3271351725 &&
      ssGetChecksum2(S) == 3679112173 &&
      ssGetChecksum3(S) == 386906761) {
    method_dispatcher_y5kHx03bfD5aWnMIivTskD(S, method, data);
    return 1;
  }

  return 0;
}
