/* Include files */

#include "commqamtxrxhdl_cgxe.h"
#include "m_J7aWBDqExLqAyGE5Qpg8zG.h"
#include "m_wNselC31AbXio1ZnIoqGEG.h"

unsigned int cgxe_commqamtxrxhdl_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 736349637 &&
      ssGetChecksum1(S) == 1561834253 &&
      ssGetChecksum2(S) == 3207742240 &&
      ssGetChecksum3(S) == 3521493969) {
    method_dispatcher_J7aWBDqExLqAyGE5Qpg8zG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1995666666 &&
      ssGetChecksum1(S) == 1417896498 &&
      ssGetChecksum2(S) == 984409517 &&
      ssGetChecksum3(S) == 3369382637) {
    method_dispatcher_wNselC31AbXio1ZnIoqGEG(S, method, data);
    return 1;
  }

  return 0;
}
