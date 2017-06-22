#include "___SimulationRuntime.h"


#include "Unittest_Helper.h"
#include "___BlockMessages.h"











uint64_t ___SimulationRuntime_simStep = 0;

double ___SimulationRuntime_simTime = 0;

double ___SimulationRuntime_simTimeIncr = 0;

double ___SimulationRuntime_simStartTime = 0;

void  ___SimulationRuntime_initTimeVars(double startTime, double ti) 
{
  ___SimulationRuntime_simStep = 0;
  ___SimulationRuntime_simTime = startTime;
  ___SimulationRuntime_simStartTime = startTime;
  ___SimulationRuntime_simTimeIncr = ti;
}

void  ___SimulationRuntime_setSimVars(double time, double incr, uint64_t step, double startTime) 
{
  ___SimulationRuntime_simStep = step;
  ___SimulationRuntime_simTime = time;
  ___SimulationRuntime_simTimeIncr = incr;
  ___SimulationRuntime_simStartTime = startTime;
}

void  ___SimulationRuntime_incrSimVars(void) 
{
  ___SimulationRuntime_simStep += 1;
  ___SimulationRuntime_simTime += ___SimulationRuntime_simTimeIncr;
}

uint64_t  ___SimulationRuntime_getValueInUInt64(double value) 
{
  /* 
   * This utility funtion is a work around for component unit test to
   * interact with the mbeddr task's structure members where the time is in
   * uint64 and simTime in ESD is in double. The multiplier 10^6 is chosen because
   * the very minimal value allowed by pcomponent in period and offset is 1.0 * 10^-6
   * so the period/offset values specified by user in pcomponent will never become double
   */

  double retval = (value * 1000000);
  return ((uint64_t )(retval));
}

