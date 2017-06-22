#include "___BlockMessages.h"


#include <stdio.h>

/* 
 * Message Reporting Function
 */
void  ___BlockMessages____block_messagelist_Contract_Failed(char *contractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("Contract_Failed: Pre- or Post-condition failed (");;
  printf("contractID=%s",(((char *)(contractID))));
  printf(" ,location=@%s) \n",loc);;
}

