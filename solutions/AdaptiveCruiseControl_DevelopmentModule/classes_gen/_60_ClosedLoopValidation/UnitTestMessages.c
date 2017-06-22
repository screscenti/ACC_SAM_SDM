#include "UnitTestMessages.h"


#include <stdio.h>

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_runningTest(char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("runningTest: running test (");;
  printf("location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED(int8_t testID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_INT(int8_t testID, int32_t act, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_INT: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%d",(((int32_t )(act))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_INT_STR(int8_t testID, int32_t act, char *exp, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_INT_STR: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%d",(((int32_t )(act))));
  printf(", exp=%s",(((char *)(exp))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_INT_INT(int8_t testID, int32_t act, char *op, int32_t exp, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_INT_INT: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%d",(((int32_t )(act))));
  printf(", op=%s",(((char *)(op))));
  printf(", exp=%d",(((int32_t )(exp))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_DOUBLE(int8_t testID, double act, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_DOUBLE: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%f",(((double )(act))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_DOUBLE_STR(int8_t testID, double act, char *exp, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_DOUBLE_STR: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%f",(((double )(act))));
  printf(", exp=%s",(((char *)(exp))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  UnitTestMessages____testing_FAILED_DOUBLE_DOUBLE(int8_t testID, double act, char *op, double exp, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("FAILED_DOUBLE_DOUBLE: ***FAILED*** (");;
  printf("testID=%d",(((int8_t )(testID))));
  printf(", act=%f",(((double )(act))));
  printf(", op=%s",(((char *)(op))));
  printf(", exp=%f",(((double )(exp))));
  printf(" ,location=@%s) \n",loc);;
}

