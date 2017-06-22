#include "ACC_SafeDistance_SubSys.h"


#include "CommonUnits.h"
#include "SIUnits.h"
#include "___SimulationRuntime.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>







static void  ACC_SafeDistance_SubSys_ContractFailures_contractFailed(uint8_t contractID, char *loc);

/* 
 * Message Reporting Function
 */
static void  ACC_SafeDistance_SubSys_ContractFailures_contractFailed(uint8_t contractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("contractFailed: pre- or postcondition failed (");;
  printf("contractID=%d",(((uint8_t )(contractID))));
  printf(" ,location=@%s) \n",loc);;
}

