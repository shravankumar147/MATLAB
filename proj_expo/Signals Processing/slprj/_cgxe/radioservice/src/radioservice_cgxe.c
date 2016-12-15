/* Include files */

#include "radioservice_cgxe.h"
#include "m_GQ0fAWyjLa47UZPk4Go7lG.h"
#include "m_r5cGeKo98ybkLIRW3mgHRE.h"
#include "m_UXvEHHrxIcmXaLthmwvduD.h"
#include "m_26GO2F3UHHGfEdPxOZc7uH.h"

unsigned int cgxe_radioservice_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 505489027 &&
      ssGetChecksum1(S) == 567468321 &&
      ssGetChecksum2(S) == 103825711 &&
      ssGetChecksum3(S) == 2433997595) {
    method_dispatcher_GQ0fAWyjLa47UZPk4Go7lG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1921065471 &&
      ssGetChecksum1(S) == 3618898544 &&
      ssGetChecksum2(S) == 3837818937 &&
      ssGetChecksum3(S) == 1139311912) {
    method_dispatcher_r5cGeKo98ybkLIRW3mgHRE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2195987126 &&
      ssGetChecksum1(S) == 1696359792 &&
      ssGetChecksum2(S) == 1502374382 &&
      ssGetChecksum3(S) == 1206658972) {
    method_dispatcher_UXvEHHrxIcmXaLthmwvduD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2329834506 &&
      ssGetChecksum1(S) == 1732038671 &&
      ssGetChecksum2(S) == 3172241578 &&
      ssGetChecksum3(S) == 238928571) {
    method_dispatcher_26GO2F3UHHGfEdPxOZc7uH(S, method, data);
    return 1;
  }

  return 0;
}
