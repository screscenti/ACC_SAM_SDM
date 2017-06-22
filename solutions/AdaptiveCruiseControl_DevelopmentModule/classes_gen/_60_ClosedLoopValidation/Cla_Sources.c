#include "Cla_Sources.h"


#include <math.h>
#include <stdlib.h>
#include "SIUnits.h"
#include "___SimulationRuntime.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>





































































































static uint8_t  Cla_Sources_sizeCheck(double array[10]);

static double  Cla_Sources_mod_op(double dividend, double divisor);

static double  Cla_Sources_lookup_repSeq(double in, double param_t[10], double param_y[10], uint8_t arr_size);

static double  Cla_Sources_interpolate(double xleft, double xright, double yleft, double yright, double x);

static double  Cla_Sources_HoldOrUpdateValue(double in, double curTime, double sampleTime, double *prevTime, double *prevValue);

static bool  Cla_Sources_IntegralMultiple(double x, double y);

static double  Cla_Sources_SinBlockOutput(double Amplitude, double Bias, double Frequency, double Phase, double SampleTime, double lastSampledTime, double currentTime, double in1, double lastOutput);

static void  Cla_Sources_SampledTimeUpdate(double SampleTime, double currentTime, double *lastSampledTime);

static double  Cla_Sources_PulseGeneratorOutput(double curTime, double startTime, double PhaseDelay, double PulseWidthSec, double Amplitude, double Period, double sampletime);

static uint8_t  Cla_Sources_sizeCheck(double array[10]) 
{
  uint8_t i;
  uint8_t arrayCount;
  arrayCount = 0;
  {
    for ( i = 0 ; i < 10; i++ )
    {
      if ( isnan(array[i]) == 0 ) 
      {
        arrayCount++;
      } else
      {
        break;
      }
    }
  }
  return arrayCount;
}

static double  Cla_Sources_mod_op(double dividend, double divisor) 
{
  double rem;
  uint8_t q;
  rem = dividend;
  q = 0;
  while (divisor <= rem)
  {
    rem = dividend - (divisor * q++);
  }
  return rem;
}

static double  Cla_Sources_lookup_repSeq(double in, double param_t[10], double param_y[10], uint8_t arr_size) 
{
  double res;
  double flag;
  flag = 0;
  res = 0;
  {
    uint64_t i;
    i = 0;
    for ( ; i < arr_size; i++ )
    {
      if ( param_t[i] == in ) 
      {
        res = param_y[i];
        flag = 1;
        break;
      }
    }
  }
  if ( in >= param_t[0] && in <= param_t[arr_size - 1] && flag != 1 ) 
  {
    res = Cla_Sources_interpolate(param_t[0], param_t[arr_size - 1], param_y[0], param_y[arr_size - 1], in);
  }
  return res;
}

static double  Cla_Sources_interpolate(double xleft, double xright, double yleft, double yright, double x) 
{
  double y;
  y = yleft + (((yright - yleft) * (x - xleft) / (xright - xleft)));
  return y;
}

/* 
 * This function ouputs in as long as sampleTime is 0 or curTime - prevTime >= sampleTime
 * whenever curTime-prevTime >= sampleTime, prevTime is reset to curTime and prevValue is reset to in
 * at other times, the prevValue is passed as output
 */
static double  Cla_Sources_HoldOrUpdateValue(double in, double curTime, double sampleTime, double *prevTime, double *prevValue) 
{
  if ( (curTime - *prevTime) >= sampleTime ) 
  {
    *prevTime += sampleTime;
    *prevValue = in;
    return in;
  } else
  {
    return *prevValue;
  }
}

/* 
 * Returns true if x is an integral multiple of y
 */
static bool  Cla_Sources_IntegralMultiple(double x, double y) 
{
  int32_t ix;
  ix = ((int32_t )(x)) / ((int32_t )(y));
  return (((x - (((double )(ix)) * y)) >= ((double )(CLA_SOURCES_TOL))) || ((x - (((double )(ix)) * y)) <= -((double )(CLA_SOURCES_TOL)))) ? (false) : (true);
  
}

/* 
 * This function acts as the common output function for all variants of the sin block
 */
static double  Cla_Sources_SinBlockOutput(double Amplitude, double Bias, double Frequency, double Phase, double SampleTime, double lastSampledTime, double currentTime, double in1, double lastOutput) 
{
  if ( (SampleTime <= CLA_SOURCES_TOL) || ((lastSampledTime + SampleTime) <= (currentTime + CLA_SOURCES_TOL)) ) 
  {
    return ((Amplitude * sin(Frequency * in1 + Phase)) + Bias);
  } else
  {
    return lastOutput;
  }
}

static void  Cla_Sources_SampledTimeUpdate(double SampleTime, double currentTime, double *lastSampledTime) 
{
  if ( SampleTime <= CLA_SOURCES_TOL ) 
  {
    *lastSampledTime = currentTime;
  } else if ((*lastSampledTime + SampleTime) <= (currentTime + CLA_SOURCES_TOL)) {
    *lastSampledTime += (SampleTime);
  } else
  {
    /* 
     * dummy else to comply with R.15.7 MISRA 2012
     */

  }
}

static double  Cla_Sources_PulseGeneratorOutput(double curTime, double startTime, double PhaseDelay, double PulseWidthSec, double Amplitude, double Period, double sampletime) 
{
  if ( curTime < (startTime + (PhaseDelay * sampletime)) ) 
  {
    return 0.0;
  } else if ((curTime >= (startTime + (PhaseDelay * sampletime))) && (curTime < (startTime + ((PulseWidthSec + PhaseDelay) * sampletime)))) {
    return Amplitude;
  } else if (curTime >= startTime + ((PhaseDelay + PulseWidthSec) * sampletime) && (curTime <= (startTime + (Period + PhaseDelay) * sampletime))) {
    return 0.0;
  } else
  {
    return 0.0;
  }
  
}

/* 
 * Message Reporting Function
 */
void  Cla_Sources_Errors_PulseGenTime(uint8_t ContractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("PulseGenTime: The period, pulse-width in second and phase delay should be integral multiples of simulation-time increment(simTimeIncr); Pulse width entered must be in valid percentage between 0 and 100 not including them; The Pulse-width calculated in seconds should be greater-than or equal to simTimeIncr (");;
  printf("ContractID=%d",(((uint8_t )(ContractID))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  Cla_Sources_Errors_PulseGenSample(uint8_t ContractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("PulseGenSample: The period, pulse-width and phase delay should be integral multiples of simulation-time increment(simTimeIncr); the pulse-width should be less-than or equal to the period and both non-zero  (");;
  printf("ContractID=%d",(((uint8_t )(ContractID))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  Cla_Sources_Errors_BandLimWN(uint8_t ContractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("BandLimWN: The value of Ts should be strictly greater-than zero (");;
  printf("ContractID=%d",(((uint8_t )(ContractID))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Initialization function for block PulseGeneratorTimeInternal
 */
void  Cla_Sources____PulseGeneratorTimeInternal_init(Cla_Sources____PulseGeneratorTimeInternal_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_IntegralMultiples = false;
      ___id->__preconditionFailed_ValidPercentage = false;
      ___id->__preconditionFailed_Minstep = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition;
      __assertCondition = (___id->PulseWidth > 0.0) && (___id->PulseWidth < 100.0);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ValidPercentage = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeInternal_ValidPercentage", "Cla_Sources:PulseGeneratorTimeInternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#6366159810916003901");
      }
    }
    
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidth > 0.0) && (___id->PulseWidth < 100.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ValidPercentage = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeInternal_ValidPercentage", "Cla_Sources:PulseGeneratorTimeInternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#6366159810916003901");
    }
  }
  ___id->PulseWidthSec = ___id->PulseWidth / 100.0 * ___id->Period;
  ___id->startTime = 0.0;
}

/* 
 * Initialization function for block PulseGeneratorTimeExternal
 */
void  Cla_Sources____PulseGeneratorTimeExternal_init(Cla_Sources____PulseGeneratorTimeExternal_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_IntegralMultiples = false;
      ___id->__preconditionFailed_ValidPercentage = false;
      ___id->__preconditionFailed_Minstep = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition;
      __assertCondition = (___id->PulseWidth > 0.0) && (___id->PulseWidth < 100.0);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ValidPercentage = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeExternal_ValidPercentage", "Cla_Sources:PulseGeneratorTimeExternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865665659936");
      }
    }
    
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidth > 0.0) && (___id->PulseWidth < 100.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ValidPercentage = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeExternal_ValidPercentage", "Cla_Sources:PulseGeneratorTimeExternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865665659936");
    }
  }
  ___id->PulseWidthSec = ___id->PulseWidth / 100.0 * ___id->Period;
  ___id->startTime = 0.0;
}

/* 
 * Initialization function for block PulseGeneratorSampleInternal
 */
void  Cla_Sources____PulseGeneratorSampleInternal_init(Cla_Sources____PulseGeneratorSampleInternal_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_IntegralMultiples = false;
      ___id->__preconditionFailed_ValidPulseWidth = false;
      ___id->__preconditionFailed_NonZeroParam = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition;
      __assertCondition = (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->Period)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PulseWidth)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PhaseDelay));
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_IntegralMultiples = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_IntegralMultiples", "Cla_Sources:PulseGeneratorSampleInternal?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865681515023");
      }
    }
    {
      bool __assertCondition;
      __assertCondition = (___id->PulseWidth <= ___id->Period);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ValidPulseWidth = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_ValidPulseWidth", "Cla_Sources:PulseGeneratorSampleInternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865681515035");
      }
    }
    {
      bool __assertCondition;
      __assertCondition = (___id->PulseWidth > 0.0) && (___id->Period > 0.0);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_NonZeroParam = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_NonZeroParam", "Cla_Sources:PulseGeneratorSampleInternal:2?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865685128958");
      }
    }
    
  }
  {
    bool __assertCondition;
    __assertCondition = (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->Period)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PulseWidth)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PhaseDelay));
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_IntegralMultiples = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_IntegralMultiples", "Cla_Sources:PulseGeneratorSampleInternal?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865681515023");
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidth <= ___id->Period);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ValidPulseWidth = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_ValidPulseWidth", "Cla_Sources:PulseGeneratorSampleInternal:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865681515035");
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidth > 0.0) && (___id->Period > 0.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_NonZeroParam = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorSampleInternal_NonZeroParam", "Cla_Sources:PulseGeneratorSampleInternal:2?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865685128958");
    }
  }
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.pos = 0;
  ___id->startTime = 0.0;
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block SinTimeExternal
 */
void  Cla_Sources____SinTimeExternal_init(Cla_Sources____SinTimeExternal_data_t *___id) 
{
  ___id->prevTime = 0.0;
  ___id->firstTime = true;
  ___id->___out1_history.data[0] = (___id->Amplitude * sin(___id->Phase)) + ___id->Bias;
  ___id->___out1_history.pos = 0;
}

/* 
 * Initialization function for block SinTimeInternal
 */
void  Cla_Sources____SinTimeInternal_init(Cla_Sources____SinTimeInternal_data_t *___id) 
{
  ___id->prevTime = 0.0;
  ___id->___out1_history.data[0] = (___id->Amplitude * sin(___id->Phase)) + ___id->Bias;
  ___id->___out1_history.pos = 0;
}

/* 
 * Initialization function for block SinSampleInternal
 */
void  Cla_Sources____SinSampleInternal_init(Cla_Sources____SinSampleInternal_data_t *___id) 
{
  ___id->prevTime = 0.0;
  ___id->___out1_history.data[0] = (___id->Amplitude * sin(((double )(___id->Offset)) / ((double )(___id->Samples)) * 2.0 * CLA_PREDEFINEDCONSTANTS_pi)) + ___id->Bias;
  ___id->___out1_history.pos = 0;
}

/* 
 * Initialization function for block SignalGeneratorTimeInternal
 */
void  Cla_Sources____SignalGeneratorTimeInternal_init(Cla_Sources____SignalGeneratorTimeInternal_data_t *___id) 
{
  ___id->tempOut = 0.0;
  ___id->startTime = 0.0;
}

/* 
 * Initialization function for block SignalGeneratorTimeExternal
 */
void  Cla_Sources____SignalGeneratorTimeExternal_init(Cla_Sources____SignalGeneratorTimeExternal_data_t *___id) 
{
  ___id->startTime = 0.0;
  ___id->tempOut = 0.0;
}

/* 
 * Initialization function for block UniformRandomNumber
 */
void  Cla_Sources____UniformRandomNumber_init(Cla_Sources____UniformRandomNumber_data_t *___id) 
{
  srand(___id->Seed);
}

/* 
 * Initialization function for block CounterFreeRunning
 */
void  Cla_Sources____CounterFreeRunning_init(Cla_Sources____CounterFreeRunning_data_t *___id) 
{
  ___id->___out1_history.data[0] = 0U;
  ___id->___out1_history.pos = 0;
}

/* 
 * Initialization function for block CounterLimited
 */
void  Cla_Sources____CounterLimited_init(Cla_Sources____CounterLimited_data_t *___id) 
{
  ___id->___out1_history.data[0] = 0U;
  ___id->___out1_history.pos = 0;
}

/* 
 * Initialization function for block RepeatingSequenceStair
 */
void  Cla_Sources____RepeatingSequenceStair_init(Cla_Sources____RepeatingSequenceStair_data_t *___id) 
{
  uint8_t i;
  ___id->outValue = ___id->OutValues[0];
  ___id->count = 0;
  ___id->keepCount = 0U;
  {
    for ( i = 0 ; i < 10U; i++ )
    {
      if ( (isnan(___id->OutValues[i])) == 0 ) 
      {
        ___id->keepCount++;
      }
    }
  }
}

/* 
 * Initialization function for block RepeatingSequenceInterpolated
 */
void  Cla_Sources____RepeatingSequenceInterpolated_init(Cla_Sources____RepeatingSequenceInterpolated_data_t *___id) 
{
  ___id->prevTime = 0.0;
  ___id->tempOut = 0.0;
  ___id->count = 0U;
  ___id->repeatingValues[0] = ___id->OutValues[0];
}

/* 
 * Initialization function for block RandomNumbercal
 */
void  Cla_Sources____RandomNumbercal_init(Cla_Sources____RandomNumbercal_data_t *___id) 
{
  ___id->tempOut = 0.0;
  ___id->outValue = 0.0;
  ___id->prevTime = 0.0;
  srand(___id->Seed);
}

/* 
 * Execution function for block Clock
 */
void  Cla_Sources____Clock_execute(Cla_Sources____Clock_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ___SimulationRuntime_simTime;
  
  
  
}

/* 
 * Execution function for block Constant
 */
void  Cla_Sources____Constant_execute(Cla_Sources____Constant_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ___id->Value;
  
  
  
}

/* 
 * Execution function for block DigitalClock
 */
void  Cla_Sources____DigitalClock_execute(Cla_Sources____DigitalClock_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ___SimulationRuntime_simTime;
  
  
  
}

/* 
 * Execution function for block Ground
 */
void  Cla_Sources____Ground_execute(void *___nothing, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block PulseGeneratorTimeInternal
 */
void  Cla_Sources____PulseGeneratorTimeInternal_execute(Cla_Sources____PulseGeneratorTimeInternal_data_t *___id, double *out1) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_IntegralMultiples = false;
    ___id->__preconditionFailed_Minstep = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->Period)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PulseWidthSec)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PhaseDelay));
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_IntegralMultiples = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeInternal_IntegralMultiples", "Cla_Sources:PulseGeneratorTimeInternal?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#6366159810906930735");
      printf("PulseWidthSec=%f\n",___id->PulseWidthSec);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidthSec >= ___id->___simIncr);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Minstep = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeInternal_Minstep", "Cla_Sources:PulseGeneratorTimeInternal:2?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#6366159810934937656");
      printf("PulseWidthSec=%f\n",___id->PulseWidthSec);;
    }
  }
  
  
  (*out1) = Cla_Sources_PulseGeneratorOutput(___SimulationRuntime_simTime, ___id->startTime, ___id->PhaseDelay, ___id->PulseWidthSec, ___id->Amplitude, ___id->Period, 1.0);
  ___id->startTime = (((___SimulationRuntime_simTime - ___id->startTime) + (___id->___simIncr)) >= ___id->Period) ? (___id->startTime + ___id->Period) : (___id->startTime);
  
  
  
}

/* 
 * Execution function for block PulseGeneratorTimeExternal
 */
void  Cla_Sources____PulseGeneratorTimeExternal_execute(Cla_Sources____PulseGeneratorTimeExternal_data_t *___id, double in1_extTime, double *out1) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_IntegralMultiples = false;
    ___id->__preconditionFailed_Minstep = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->Period)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PulseWidthSec)) || (Cla_Sources_IntegralMultiple(___id->___simIncr, ___id->PhaseDelay));
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_IntegralMultiples = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeExternal_IntegralMultiples", "Cla_Sources:PulseGeneratorTimeExternal?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865665659924");
      printf("PulseWidthSec=%f\n",___id->PulseWidthSec);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (___id->PulseWidthSec >= ___id->___simIncr);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Minstep = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Sources_PulseGeneratorTimeExternal_Minstep", "Cla_Sources:PulseGeneratorTimeExternal:2?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#852066865665659944");
      printf("PulseWidthSec=%f\n",___id->PulseWidthSec);;
    }
  }
  
  
  (*out1) = Cla_Sources_PulseGeneratorOutput(in1_extTime, ___id->startTime, ___id->PhaseDelay, ___id->PulseWidthSec, ___id->Amplitude, ___id->Period, 1.0);
  ___id->startTime = (in1_extTime - ___id->startTime + (___id->___simIncr) >= ___id->Period) ? (___id->startTime + ___id->Period) : (___id->startTime);
  
  
  
}

/* 
 * Execution function for block PulseGeneratorSampleInternal
 */
void  Cla_Sources____PulseGeneratorSampleInternal_execute(Cla_Sources____PulseGeneratorSampleInternal_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = Cla_Sources_PulseGeneratorOutput(___SimulationRuntime_simTime, ___id->startTime, ((double )(___id->PhaseDelay)), ((double )(___id->PulseWidth)), ___id->Amplitude, ((double )(___id->Period)), ___id->___simIncr);
  ___id->startTime = (((___SimulationRuntime_simTime) - (___id->startTime) + (___id->___simIncr)) >= ((double )(___id->Period))) ? (___id->startTime + (((double )(___id->Period)) * ___id->___simIncr)) : (___id->startTime);
  ___id->prevTime = ___SimulationRuntime_simTime;
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block SinTimeExternal
 */
void  Cla_Sources____SinTimeExternal_execute(Cla_Sources____SinTimeExternal_data_t *___id, double in1_extTime, double *out1) 
{
  
  
  
  
  /* 
   * in1 start value need not be zero - so always compute the first time. in1 can take on negative values as well - so can't use prevTime to detect first time.
   */
  if ( ___id->firstTime ) 
  {
    (*out1) = ___id->Amplitude * sin(___id->Frequency * in1_extTime + ___id->Phase) + ___id->Bias;
  } else
  {
    (*out1) = ((double )(Cla_Sources_SinBlockOutput(___id->Amplitude, ___id->Bias, ___id->Frequency, ___id->Phase, -1.0, ___id->prevTime, ___SimulationRuntime_simTime, in1_extTime, ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1])));
  }
  Cla_Sources_SampledTimeUpdate(-1.0, ___SimulationRuntime_simTime, &___id->prevTime);
  ___id->firstTime = false;
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block SinTimeInternal
 */
void  Cla_Sources____SinTimeInternal_execute(Cla_Sources____SinTimeInternal_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ((double )(Cla_Sources_SinBlockOutput(___id->Amplitude, ___id->Bias, ___id->Frequency, ___id->Phase, ___id->___simIncr, ___id->prevTime, ___SimulationRuntime_simTime, ___SimulationRuntime_simTime, ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1])));
  Cla_Sources_SampledTimeUpdate(___id->___simIncr, ___SimulationRuntime_simTime, &___id->prevTime);
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block SinSampleInternal
 */
void  Cla_Sources____SinSampleInternal_execute(Cla_Sources____SinSampleInternal_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ((double )(Cla_Sources_SinBlockOutput(___id->Amplitude, ___id->Bias, (2.0 * CLA_PREDEFINEDCONSTANTS_pi / ((double )(___id->Samples)) / ___id->___simIncr), ((2.0 * CLA_PREDEFINEDCONSTANTS_pi * ((double )(___id->Offset))) / ((double )(___id->Samples))), ___id->___simIncr, ___id->prevTime, ___SimulationRuntime_simTime, ___SimulationRuntime_simTime, ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1])));
  Cla_Sources_SampledTimeUpdate(___id->___simIncr, ___SimulationRuntime_simTime, &___id->prevTime);
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block Step
 */
void  Cla_Sources____Step_execute(Cla_Sources____Step_data_t *___id, double *out1) 
{
  
  
  
  
  if ( (fabs((___SimulationRuntime_simTime - ___id->Time)) <= CLA_SOURCES_TOL) || (___SimulationRuntime_simTime >= ___id->Time) ) 
  {
    (*out1) = ___id->After;
  } else
  {
    (*out1) = ___id->Before;
  }
  
  
  
}

/* 
 * Execution function for block SignalGeneratorTimeInternal
 */
void  Cla_Sources____SignalGeneratorTimeInternal_execute(Cla_Sources____SignalGeneratorTimeInternal_data_t *___id, double *out1) 
{
  double curTime;
  double waveIn;
  
  
  
  
  (*out1) = ___id->tempOut;
  curTime = ___SimulationRuntime_simTime;
  if ( ___id->Units == Cla_Sources_SignalGenUnits__HERTZ ) 
  {
    if ( (curTime - ___id->startTime) >= (1.0 / ___id->Frequency) ) 
    {
      ___id->startTime += (1.0 / ___id->Frequency);
    }
    waveIn = (2.0 * CLA_PREDEFINEDCONSTANTS_pi * ___id->Frequency) * (curTime - ___id->startTime);
  } else
  {
    if ( (curTime - ___id->startTime) >= (1.0 / ___id->Frequency) ) 
    {
      ___id->startTime += ((2.0 * CLA_PREDEFINEDCONSTANTS_pi) / ___id->Frequency);
    }
    waveIn = ___id->Frequency * (curTime - ___id->startTime);
  }
  switch (___id->WaveForm)
  {
    case Cla_Sources_WaveFormOptions__SINE: {
      ___id->tempOut = sin(waveIn);
      break;
    }
    case Cla_Sources_WaveFormOptions__SQUARE: {
      if ( waveIn <= CLA_PREDEFINEDCONSTANTS_pi ) 
      {
        ___id->tempOut = ___id->Amplitude;
      } else
      {
        ___id->tempOut = 0.0;
      }
      break;
    }
    case Cla_Sources_WaveFormOptions__SAWTOOTH: {
      ___id->tempOut = ___id->Amplitude * (1.0 - waveIn / (2.0 * CLA_PREDEFINEDCONSTANTS_pi));
      break;
    }
    case Cla_Sources_WaveFormOptions__RANDOM: {
      ___id->tempOut = (waveIn * waveIn / 3.0);
      break;
    }
    default: {
      /* 
       * dummy default case to comply with R.16.4 MISRA C 2012
       */

      break;
    }
  }

  
  
  
}

/* 
 * Execution function for block SignalGeneratorTimeExternal
 */
void  Cla_Sources____SignalGeneratorTimeExternal_execute(Cla_Sources____SignalGeneratorTimeExternal_data_t *___id, double in1_extTime, double *out1) 
{
  double curTime;
  double waveIn;
  
  
  
  
  (*out1) = ___id->tempOut;
  curTime = in1_extTime;
  if ( ___id->Units == Cla_Sources_SignalGenUnits__HERTZ ) 
  {
    if ( (curTime - ___id->startTime) >= (1.0 / ___id->Frequency) ) 
    {
      ___id->startTime += (1.0 / ___id->Frequency);
    }
    waveIn = ((2.0 * CLA_PREDEFINEDCONSTANTS_pi) * ___id->Frequency) * (curTime - ___id->startTime);
  } else
  {
    if ( (curTime - ___id->startTime) >= (1.0 / ___id->Frequency) ) 
    {
      ___id->startTime += (2.0 * CLA_PREDEFINEDCONSTANTS_pi) / ___id->Frequency;
    }
    waveIn = ___id->Frequency * (curTime - ___id->startTime);
  }
  switch (___id->WaveForm)
  {
    case Cla_Sources_WaveFormOptions__SINE: {
      ___id->tempOut = sin(waveIn);
      break;
    }
    case Cla_Sources_WaveFormOptions__SQUARE: {
      if ( waveIn <= CLA_PREDEFINEDCONSTANTS_pi ) 
      {
        ___id->tempOut = ___id->Amplitude;
      } else
      {
        ___id->tempOut = 0.0;
      }
      break;
    }
    case Cla_Sources_WaveFormOptions__SAWTOOTH: {
      ___id->tempOut = ___id->Amplitude * (1.0 - waveIn / (2.0 * CLA_PREDEFINEDCONSTANTS_pi));
      break;
    }
    case Cla_Sources_WaveFormOptions__RANDOM: {
      ___id->tempOut = ((waveIn * waveIn) / 3.0);
      break;
    }
    default: {
      /* 
       * dummy default to comply with R.16.4 MISRA C 2012
       */

      break;
    }
  }

  
  
  
}

/* 
 * Execution function for block ChirpSignal
 */
void  Cla_Sources____ChirpSignal_execute(Cla_Sources____ChirpSignal_data_t *___id, double *out1) 
{
  double instantaneousPhase;
  double deltaFreq;
  double initialFreq;
  double freqSlope;
  
  
  
  
  initialFreq = 2.0 * 3.14159 * ___id->f1;
  deltaFreq = 2.0 * 3.14159 * (___id->f2 - ___id->f1);
  freqSlope = deltaFreq / ___id->T;
  instantaneousPhase = (0.5 * freqSlope * ___SimulationRuntime_simTime * ___SimulationRuntime_simTime) + (initialFreq * ___SimulationRuntime_simTime);
  (*out1) = sin(instantaneousPhase);
  
  
  
}

/* 
 * Execution function for block UniformRandomNumber
 */
void  Cla_Sources____UniformRandomNumber_execute(Cla_Sources____UniformRandomNumber_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ((((double )(rand())) * (___id->Maximum - ___id->Minimum)) / ((double )(RAND_MAX))) + ___id->Minimum;
  
  
  
}

/* 
 * Execution function for block RepeatingSequence
 */
void  Cla_Sources____RepeatingSequence_execute(Cla_Sources____RepeatingSequence_data_t *___id, double *out1) 
{
  double simt[10] = {
    0,    1,    2,    3,    4,    5,    6,    7,    8,    9  };
  double simStart;
  uint8_t actualSize;
  double period;
  double out_mod_op;
  
  
  
  
  simStart = (___SimulationRuntime_simTime - (((uint32_t )((((uint64_t )((___SimulationRuntime_simTime - ___SimulationRuntime_simStartTime) / ___id->___simIncr))))) * ___id->___simIncr));
  actualSize = Cla_Sources_sizeCheck(___id->rep_seq_t);
  period = ((double )((___id->rep_seq_t[actualSize - 1] - ___id->rep_seq_t[0])));
  out_mod_op = Cla_Sources_mod_op(((___SimulationRuntime_simTime) - simStart), period);
  (*out1) = ((double )(Cla_Sources_lookup_repSeq(out_mod_op, simt, ___id->rep_seq_y, actualSize)));
  
  
  
}

/* 
 * Execution function for block CounterFreeRunning
 */
void  Cla_Sources____CounterFreeRunning_execute(Cla_Sources____CounterFreeRunning_data_t *___id, uint64_t *out1) 
{
  uint64_t count;
  
  
  
  
  if ( ___SimulationRuntime_simTime == 0.0 ) 
  {
    (*out1) = 0U;
  }
  count = ((uint64_t )((2 << ___id->NumBits) - 1U));
  if ( ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] <= count ) 
  {
    (*out1) = ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] + 1U;
  } else
  {
    (*out1) = 0U;
  }
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block CounterLimited
 */
void  Cla_Sources____CounterLimited_execute(Cla_Sources____CounterLimited_data_t *___id, uint64_t *out1) 
{
  
  
  
  
  if ( (___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] + 1U) <= ((uint64_t )(round(___id->uplimit))) ) 
  {
    (*out1) = ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] + 1U;
  } else
  {
    (*out1) = 0U;
  }
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
}

/* 
 * Execution function for block RepeatingSequenceStair
 */
void  Cla_Sources____RepeatingSequenceStair_execute(Cla_Sources____RepeatingSequenceStair_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = ___id->OutValues[((uint8_t )(___id->count))];
  ___id->count++;
  if ( ___id->count == (((int8_t )(___id->keepCount))) ) 
  {
    ___id->count = 0;
  }
  
  
  
}

/* 
 * Execution function for block RepeatingSequenceInterpolated
 */
void  Cla_Sources____RepeatingSequenceInterpolated_execute(Cla_Sources____RepeatingSequenceInterpolated_data_t *___id, double *out1) 
{
  uint8_t i;
  double timeFromZero[10] = {
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0  };
  int8_t outValueCount;
  uint8_t timeValueCount;
  double totalCount;
  double total;
  uint8_t index;
  uint64_t sampleCount;
  double slope;
  double tempTime;
  
  
  
  
  outValueCount = 0;
  timeValueCount = 0U;
  index = 0U;
  sampleCount = 0U;
  
  if ( (___SimulationRuntime_simTime) == 0.0 ) 
  {
    (*out1) = ___id->repeatingValues[0];
  } else
  {
    (*out1) = ___id->tempOut;
  }
  
  {
    for ( i = 0 ; i < 10U; i++ )
    {
      if ( isnan(___id->OutValues[i]) == 0 ) 
      {
        outValueCount++;
      }
      if ( isnan(___id->TimeValues[i]) == 0 ) 
      {
        timeValueCount++;
        timeFromZero[i] = ___id->TimeValues[i];
      }
    }
  }
  totalCount = ___id->TimeValues[timeValueCount - 1U] / (___id->___simIncr);
  total = round(totalCount);
  if ( (___SimulationRuntime_simTime) == 0.0 ) 
  {
    {
      for ( tempTime = 0.0 ; tempTime <= (timeFromZero[timeValueCount - 1U] + ((___id->___simIncr) / 2.0)); tempTime += (___id->___simIncr) )
      {
        if ( (tempTime >= (timeFromZero[index] - ((___id->___simIncr) / 2.0))) && (tempTime <= (timeFromZero[index] + ((___id->___simIncr) / 2.0))) ) 
        {
          ___id->repeatingValues[sampleCount] = ___id->OutValues[index];
          sampleCount++;
          index++;
        } else if ((tempTime < timeFromZero[index]) && (tempTime > timeFromZero[index - 1U])) {
          if ( ___id->LookupMeth == Cla_Sources_LookupMethod_Rep_Seq_Interpolated__INTERPOLATION_USE_END_VALUES ) 
          {
            slope = (___id->OutValues[index] - ___id->OutValues[index - 1U]) / (timeFromZero[index] - timeFromZero[index - 1U]);
            ___id->repeatingValues[sampleCount] = slope * (tempTime - timeFromZero[index - 1U]) + ___id->OutValues[index - 1U];
            sampleCount++;
          } else if (___id->LookupMeth == Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_NEAREST) {
            if ( tempTime - timeFromZero[index - 1U] >= timeFromZero[index] - tempTime ) 
            {
              ___id->repeatingValues[sampleCount] = ___id->OutValues[index];
            } else
            {
              ___id->repeatingValues[sampleCount] = ___id->OutValues[index - 1U];
              sampleCount++;
            }
          } else if (___id->LookupMeth == Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_BELOW) {
            ___id->repeatingValues[sampleCount] = ___id->OutValues[index - 1U];
            ___id->prevTime = (___SimulationRuntime_simTime);
            sampleCount++;
          } else if (___id->LookupMeth == Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_ABOVE) {
            ___id->repeatingValues[sampleCount] = ___id->OutValues[index];
            sampleCount++;
          } else
          {
            /* 
             * dummy else to comply with R.15.7 MISRA C 2012
             */

          }
        } else
        {
          ___id->repeatingValues[sampleCount] = ___id->OutValues[0U];
          sampleCount++;
        }
      }
    }
    ___id->count = 1U;
    ___id->tempOut = ___id->repeatingValues[___id->count];
    ___id->count++;
  } else
  {
    if ( ___id->count == (((uint8_t )(total)) + 1U) ) 
    {
      ___id->count = 0U;
    }
    ___id->tempOut = ___id->repeatingValues[___id->count];
    ___id->count++;
  }
  
  
  
}

/* 
 * Execution function for block FromWorkspace
 */
void  Cla_Sources____FromWorkspace_execute(Cla_Sources____FromWorkspace_data_t *___id, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block In1
 */
void  Cla_Sources____In1_execute(void *___nothing, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block SignalBuilder
 */
void  Cla_Sources____SignalBuilder_execute(void *___nothing, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block RandomNumbercal
 */
void  Cla_Sources____RandomNumbercal_execute(Cla_Sources____RandomNumbercal_data_t *___id, double in1, double *out1) 
{
  double sigma;
  double min;
  double max;
  double fx;
  double variant;
  double pmVariant;
  
  
  
  
  sigma = sqrt(___id->Variance);
  min = 0.0;
  max = 1.0 / (sigma * sqrt(2.0 * 3.14159));
  fx = (((double )(rand())) * (max - min)) / (((double )(RAND_MAX))) + min;
  variant = log(max / fx) * (2.0 * ___id->Variance);
  pmVariant = (in1 >= 0.0) ? (((double )(sqrt(variant)))) : (((double )(-sqrt(variant))));
  (*out1) = pmVariant + ___id->Mean;
  
  
  
}

