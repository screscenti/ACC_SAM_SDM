#include "Library.h"


#include "SIUnits.h"
#include "___SimulationRuntime.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>













static void  Library_ContractFailures_contractFailed(uint8_t contractID, char *loc);

/* 
 * Message Reporting Function
 */
static void  Library_ContractFailures_contractFailed(uint8_t contractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("contractFailed: pre- or postcondition failed (");;
  printf("contractID=%d",(((uint8_t )(contractID))));
  printf(" ,location=@%s) \n",loc);;
}

double  Library_IntegratorOutput(double gainval, double sampletime, double prevIn, double prevOut, double initcond, double prevTime, double curTime, bool resetSig, double UpperSaturationLimit, double LowerSaturationLimit) 
{
  double outValue;
  if ( curTime == 0.0 ) 
  {
    outValue = initcond;
  } else
  {
    outValue = (((double )(gainval * (sampletime * prevIn))) + prevOut);
  }
  if ( outValue < LowerSaturationLimit ) 
  {
    return LowerSaturationLimit;
  } else if (outValue > UpperSaturationLimit) {
    return UpperSaturationLimit;
  } else
  {
    return outValue;
  }
}

/* 
 * Initialization function for block Sum
 */
void  Library____Sum_init(Library____Sum_data_t *___id, uint8_t minus_connectionCount, uint8_t plus_connectionCount) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_Atleast2Inputs = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Initialization function for block IntegratorICInt
 */
void  Library____IntegratorICInt_init(Library____IntegratorICInt_data_t *___id) 
{
  ___id->___in1_history.data[0] = 0.0;
  ___id->___in1_history.pos = 0;
  ___id->___out1_history.data[0] = ___id->InitialCondition;
  ___id->___out1_history.pos = 0;
  ___id->prevTime = 0.0;
}

/* 
 * Execution function for block Gain
 */
void  Library____Gain_execute(Library____Gain_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  (*out1) = in1 * ___id->Gain;
  
  
  
}

/* 
 * Execution function for block Sum
 */
void  Library____Sum_execute(Library____Sum_data_t *___id, double minus[10], double plus[10], double *out1, uint8_t minus_connectionCount, uint8_t plus_connectionCount) 
{
  uint8_t i;
  double result;
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_Atleast2Inputs = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = ((plus_connectionCount) + (minus_connectionCount)) > 1U;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Atleast2Inputs = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Library_Sum_Atleast2Inputs", "Library:Sum?r:fd965414-41f6-4ff0-aaa0-c29ebc54d471(_40_Implementation)#6427938858666158939");
      printf("(connectedCount(minus))=%d\n",(minus_connectionCount));;
      printf("(connectedCount(plus))=%d\n",(plus_connectionCount));;
    }
  }
  
  
  result = 0.0;
  {
    for ( i = 0 ; i < (plus_connectionCount); i++ )
    {
      result += ((plus[i]));
    }
  }
  {
    for ( i = 0 ; i < (minus_connectionCount); i++ )
    {
      result -= ((minus[i]));
    }
  }
  (*out1) = result;
  
  
  
  
}

/* 
 * Execution function for block IntegratorICInt
 */
void  Library____IntegratorICInt_execute(Library____IntegratorICInt_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  (*out1) = Library_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], ___id->InitialCondition, ___id->prevTime, ___SimulationRuntime_simTime, false, INFINITY, -INFINITY);
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Update function for block IntegratorICInt
 */
void  Library____IntegratorICInt_update(Library____IntegratorICInt_data_t *___id, double in1) 
{
  ___id->prevTime = ___SimulationRuntime_simTime;
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
}

