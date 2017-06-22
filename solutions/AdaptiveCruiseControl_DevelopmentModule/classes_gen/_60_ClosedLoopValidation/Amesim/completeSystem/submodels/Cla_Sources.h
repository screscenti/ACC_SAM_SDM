#ifndef CLA_SOURCES_H
#define CLA_SOURCES_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0

#include "Cla_Operators.h"

#include "Cla_PredefinedConstants.h"



#ifdef __cplusplus
extern "C" {
#endif

typedef struct Cla_Sources____rb_PulseGeneratorSampleInternal_out1 Cla_Sources____rb_PulseGeneratorSampleInternal_out1_t;
struct Cla_Sources____rb_PulseGeneratorSampleInternal_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Sources____rb_SinTimeExternal_out1 Cla_Sources____rb_SinTimeExternal_out1_t;
struct Cla_Sources____rb_SinTimeExternal_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Sources____rb_SinTimeInternal_out1 Cla_Sources____rb_SinTimeInternal_out1_t;
struct Cla_Sources____rb_SinTimeInternal_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Sources____rb_SinSampleInternal_out1 Cla_Sources____rb_SinSampleInternal_out1_t;
struct Cla_Sources____rb_SinSampleInternal_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Sources____rb_CounterFreeRunning_out1 Cla_Sources____rb_CounterFreeRunning_out1_t;
struct Cla_Sources____rb_CounterFreeRunning_out1 {
  uint64_t data[1];
  uint8_t pos;
};

typedef struct Cla_Sources____rb_CounterLimited_out1 Cla_Sources____rb_CounterLimited_out1_t;
struct Cla_Sources____rb_CounterLimited_out1 {
  uint64_t data[1];
  uint8_t pos;
};

#define CLA_SOURCES_TOL (1E-12)
typedef enum Cla_Sources_LookupMethod_Rep_Seq_Interpolated Cla_Sources_LookupMethod_Rep_Seq_Interpolated_t;
enum Cla_Sources_LookupMethod_Rep_Seq_Interpolated{
  Cla_Sources_LookupMethod_Rep_Seq_Interpolated__INTERPOLATION_USE_END_VALUES,
  Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_NEAREST,
  Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_BELOW,
  Cla_Sources_LookupMethod_Rep_Seq_Interpolated__USE_INPUT_ABOVE
};

typedef enum Cla_Sources_WaveFormOptions Cla_Sources_WaveFormOptions_t;
enum Cla_Sources_WaveFormOptions{
  Cla_Sources_WaveFormOptions__SINE,
  Cla_Sources_WaveFormOptions__SQUARE,
  Cla_Sources_WaveFormOptions__SAWTOOTH,
  Cla_Sources_WaveFormOptions__RANDOM
};

typedef enum Cla_Sources_SignalGenUnits Cla_Sources_SignalGenUnits_t;
enum Cla_Sources_SignalGenUnits{
  Cla_Sources_SignalGenUnits__HERTZ,
  Cla_Sources_SignalGenUnits__RADPS
};

#define CLA_SOURCES______smartcon__Ramp__product1_out1__sum2_plus_execute(in)((((double )(in))))
#define CLA_SOURCES______smartcon__Ramp__step1_out1__product1_multiply_execute(in)((((double )(in))))
#define CLA_SOURCES______smartcon__Ramp__sum1_out1__product1_multiply_execute(in)((((double )(in))))
#define CLA_SOURCES______smartcon__RandomNumber__UFRR_out1__RandomNo_in1_execute(in)((((double )(in))))
#define CLA_SOURCES______smartcon__BandLimitedWhiteNoise__WhiteNoise_res__k_in1_execute(in)((((double )(in))))
typedef struct Cla_Sources____Clock_data Cla_Sources____Clock_data_t;
/* 
 * instance data for block Clock
 */
struct Cla_Sources____Clock_data {
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____Constant_data Cla_Sources____Constant_data_t;
/* 
 * instance data for block Constant
 */
struct Cla_Sources____Constant_data {
  double Value;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____DigitalClock_data Cla_Sources____DigitalClock_data_t;
/* 
 * instance data for block DigitalClock
 */
struct Cla_Sources____DigitalClock_data {
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____PulseGeneratorTimeInternal_data Cla_Sources____PulseGeneratorTimeInternal_data_t;
/* 
 * instance data for block PulseGeneratorTimeInternal
 */
struct Cla_Sources____PulseGeneratorTimeInternal_data {
  double Amplitude;
  double Period;
  double PulseWidth;
  double PhaseDelay;
  double ___simIncr;
  double PulseWidthSec;
  double startTime;
  bool __preconditionFailed_IntegralMultiples;
  bool __preconditionFailed_ValidPercentage;
  bool __preconditionFailed_Minstep;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____PulseGeneratorTimeExternal_data Cla_Sources____PulseGeneratorTimeExternal_data_t;
/* 
 * instance data for block PulseGeneratorTimeExternal
 */
struct Cla_Sources____PulseGeneratorTimeExternal_data {
  double Amplitude;
  double Period;
  double PulseWidth;
  double PhaseDelay;
  double ___simIncr;
  double PulseWidthSec;
  double startTime;
  bool __preconditionFailed_IntegralMultiples;
  bool __preconditionFailed_ValidPercentage;
  bool __preconditionFailed_Minstep;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____PulseGeneratorSampleInternal_data Cla_Sources____PulseGeneratorSampleInternal_data_t;
/* 
 * instance data for block PulseGeneratorSampleInternal
 */
struct Cla_Sources____PulseGeneratorSampleInternal_data {
  double Amplitude;
  uint32_t Period;
  uint32_t PulseWidth;
  uint32_t PhaseDelay;
  double ___simIncr;
  double startTime;
  double prevTime;
  Cla_Sources____rb_PulseGeneratorSampleInternal_out1_t ___out1_history;
  bool __preconditionFailed_IntegralMultiples;
  bool __preconditionFailed_ValidPulseWidth;
  bool __preconditionFailed_NonZeroParam;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____SinTimeExternal_data Cla_Sources____SinTimeExternal_data_t;
/* 
 * instance data for block SinTimeExternal
 */
struct Cla_Sources____SinTimeExternal_data {
  double Amplitude;
  double Bias;
  double Frequency;
  double Phase;
  double ___simIncr;
  double prevTime;
  bool firstTime;
  Cla_Sources____rb_SinTimeExternal_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____SinTimeInternal_data Cla_Sources____SinTimeInternal_data_t;
/* 
 * instance data for block SinTimeInternal
 */
struct Cla_Sources____SinTimeInternal_data {
  double Amplitude;
  double Bias;
  double Frequency;
  double Phase;
  double ___simIncr;
  double prevTime;
  Cla_Sources____rb_SinTimeInternal_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____SinSampleInternal_data Cla_Sources____SinSampleInternal_data_t;
/* 
 * instance data for block SinSampleInternal
 */
struct Cla_Sources____SinSampleInternal_data {
  double Amplitude;
  double Bias;
  uint16_t Samples;
  uint16_t Offset;
  double ___simIncr;
  double prevTime;
  Cla_Sources____rb_SinSampleInternal_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____Step_data Cla_Sources____Step_data_t;
/* 
 * instance data for block Step
 */
struct Cla_Sources____Step_data {
  double Time;
  double Before;
  double After;
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____SignalGeneratorTimeInternal_data Cla_Sources____SignalGeneratorTimeInternal_data_t;
/* 
 * instance data for block SignalGeneratorTimeInternal
 */
struct Cla_Sources____SignalGeneratorTimeInternal_data {
  Cla_Sources_WaveFormOptions_t WaveForm;
  double Amplitude;
  double Frequency;
  Cla_Sources_SignalGenUnits_t Units;
  double ___simIncr;
  double startTime;
  double tempOut;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____SignalGeneratorTimeExternal_data Cla_Sources____SignalGeneratorTimeExternal_data_t;
/* 
 * instance data for block SignalGeneratorTimeExternal
 */
struct Cla_Sources____SignalGeneratorTimeExternal_data {
  Cla_Sources_WaveFormOptions_t WaveForm;
  double Amplitude;
  double Frequency;
  Cla_Sources_SignalGenUnits_t Units;
  double ___simIncr;
  double startTime;
  double tempOut;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____ChirpSignal_data Cla_Sources____ChirpSignal_data_t;
/* 
 * instance data for block ChirpSignal
 */
struct Cla_Sources____ChirpSignal_data {
  double f1;
  double T;
  double f2;
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____UniformRandomNumber_data Cla_Sources____UniformRandomNumber_data_t;
/* 
 * instance data for block UniformRandomNumber
 */
struct Cla_Sources____UniformRandomNumber_data {
  double Minimum;
  double Maximum;
  int32_t Seed;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____RepeatingSequence_data Cla_Sources____RepeatingSequence_data_t;
/* 
 * instance data for block RepeatingSequence
 */
struct Cla_Sources____RepeatingSequence_data {
  double rep_seq_t[10];
  double rep_seq_y[10];
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____CounterFreeRunning_data Cla_Sources____CounterFreeRunning_data_t;
/* 
 * instance data for block CounterFreeRunning
 */
struct Cla_Sources____CounterFreeRunning_data {
  uint32_t NumBits;
  double ___simIncr;
  Cla_Sources____rb_CounterFreeRunning_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____CounterLimited_data Cla_Sources____CounterLimited_data_t;
/* 
 * instance data for block CounterLimited
 */
struct Cla_Sources____CounterLimited_data {
  double uplimit;
  Cla_Sources____rb_CounterLimited_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____RepeatingSequenceStair_data Cla_Sources____RepeatingSequenceStair_data_t;
/* 
 * instance data for block RepeatingSequenceStair
 */
struct Cla_Sources____RepeatingSequenceStair_data {
  double OutValues[10];
  double ___simIncr;
  double outValue;
  int8_t count;
  uint8_t keepCount;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____RepeatingSequenceInterpolated_data Cla_Sources____RepeatingSequenceInterpolated_data_t;
/* 
 * instance data for block RepeatingSequenceInterpolated
 */
struct Cla_Sources____RepeatingSequenceInterpolated_data {
  double OutValues[10];
  double TimeValues[10];
  Cla_Sources_LookupMethod_Rep_Seq_Interpolated_t LookupMeth;
  double ___simIncr;
  double prevTime;
  double tempOut;
  double repeatingValues[100];
  uint8_t count;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____FromWorkspace_data Cla_Sources____FromWorkspace_data_t;
/* 
 * instance data for block FromWorkspace
 */
struct Cla_Sources____FromWorkspace_data {
  char *Data;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Sources____RandomNumbercal_data Cla_Sources____RandomNumbercal_data_t;
/* 
 * instance data for block RandomNumbercal
 */
struct Cla_Sources____RandomNumbercal_data {
  double Mean;
  double Variance;
  int32_t Seed;
  double prevTime;
  double outValue;
  double tempOut;
  bool __anyPreconditionFailed;
};

void  Cla_Sources_Errors_PulseGenTime(uint8_t ContractID, char *loc);

void  Cla_Sources_Errors_PulseGenSample(uint8_t ContractID, char *loc);

void  Cla_Sources_Errors_BandLimWN(uint8_t ContractID, char *loc);

void  Cla_Sources____PulseGeneratorTimeInternal_init(Cla_Sources____PulseGeneratorTimeInternal_data_t *___id);

void  Cla_Sources____PulseGeneratorTimeExternal_init(Cla_Sources____PulseGeneratorTimeExternal_data_t *___id);

void  Cla_Sources____PulseGeneratorSampleInternal_init(Cla_Sources____PulseGeneratorSampleInternal_data_t *___id);

void  Cla_Sources____SinTimeExternal_init(Cla_Sources____SinTimeExternal_data_t *___id);

void  Cla_Sources____SinTimeInternal_init(Cla_Sources____SinTimeInternal_data_t *___id);

void  Cla_Sources____SinSampleInternal_init(Cla_Sources____SinSampleInternal_data_t *___id);

void  Cla_Sources____SignalGeneratorTimeInternal_init(Cla_Sources____SignalGeneratorTimeInternal_data_t *___id);

void  Cla_Sources____SignalGeneratorTimeExternal_init(Cla_Sources____SignalGeneratorTimeExternal_data_t *___id);

void  Cla_Sources____UniformRandomNumber_init(Cla_Sources____UniformRandomNumber_data_t *___id);

void  Cla_Sources____CounterFreeRunning_init(Cla_Sources____CounterFreeRunning_data_t *___id);

void  Cla_Sources____CounterLimited_init(Cla_Sources____CounterLimited_data_t *___id);

void  Cla_Sources____RepeatingSequenceStair_init(Cla_Sources____RepeatingSequenceStair_data_t *___id);

void  Cla_Sources____RepeatingSequenceInterpolated_init(Cla_Sources____RepeatingSequenceInterpolated_data_t *___id);

void  Cla_Sources____RandomNumbercal_init(Cla_Sources____RandomNumbercal_data_t *___id);

void  Cla_Sources____Clock_execute(Cla_Sources____Clock_data_t *___id, double *out1);

void  Cla_Sources____Constant_execute(Cla_Sources____Constant_data_t *___id, double *out1);

void  Cla_Sources____DigitalClock_execute(Cla_Sources____DigitalClock_data_t *___id, double *out1);

void  Cla_Sources____Ground_execute(void *___nothing, double *out1);

void  Cla_Sources____PulseGeneratorTimeInternal_execute(Cla_Sources____PulseGeneratorTimeInternal_data_t *___id, double *out1);

void  Cla_Sources____PulseGeneratorTimeExternal_execute(Cla_Sources____PulseGeneratorTimeExternal_data_t *___id, double in1_extTime, double *out1);

void  Cla_Sources____PulseGeneratorSampleInternal_execute(Cla_Sources____PulseGeneratorSampleInternal_data_t *___id, double *out1);

void  Cla_Sources____SinTimeExternal_execute(Cla_Sources____SinTimeExternal_data_t *___id, double in1_extTime, double *out1);

void  Cla_Sources____SinTimeInternal_execute(Cla_Sources____SinTimeInternal_data_t *___id, double *out1);

void  Cla_Sources____SinSampleInternal_execute(Cla_Sources____SinSampleInternal_data_t *___id, double *out1);

void  Cla_Sources____Step_execute(Cla_Sources____Step_data_t *___id, double *out1);

void  Cla_Sources____SignalGeneratorTimeInternal_execute(Cla_Sources____SignalGeneratorTimeInternal_data_t *___id, double *out1);

void  Cla_Sources____SignalGeneratorTimeExternal_execute(Cla_Sources____SignalGeneratorTimeExternal_data_t *___id, double in1_extTime, double *out1);

void  Cla_Sources____ChirpSignal_execute(Cla_Sources____ChirpSignal_data_t *___id, double *out1);

void  Cla_Sources____UniformRandomNumber_execute(Cla_Sources____UniformRandomNumber_data_t *___id, double *out1);

void  Cla_Sources____RepeatingSequence_execute(Cla_Sources____RepeatingSequence_data_t *___id, double *out1);

void  Cla_Sources____CounterFreeRunning_execute(Cla_Sources____CounterFreeRunning_data_t *___id, uint64_t *out1);

void  Cla_Sources____CounterLimited_execute(Cla_Sources____CounterLimited_data_t *___id, uint64_t *out1);

void  Cla_Sources____RepeatingSequenceStair_execute(Cla_Sources____RepeatingSequenceStair_data_t *___id, double *out1);

void  Cla_Sources____RepeatingSequenceInterpolated_execute(Cla_Sources____RepeatingSequenceInterpolated_data_t *___id, double *out1);

void  Cla_Sources____FromWorkspace_execute(Cla_Sources____FromWorkspace_data_t *___id, double *out1);

void  Cla_Sources____In1_execute(void *___nothing, double *out1);

void  Cla_Sources____SignalBuilder_execute(void *___nothing, double *out1);

void  Cla_Sources____RandomNumbercal_execute(Cla_Sources____RandomNumbercal_data_t *___id, double in1, double *out1);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
