#ifndef LIBRARY_H
#define LIBRARY_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include "BlockInterfaces.h"

#include "Cla_Discrete.h"



#ifdef __cplusplus
extern "C" {
#endif

typedef struct Library____rb_IntegratorICInt_in1 Library____rb_IntegratorICInt_in1_t;
struct Library____rb_IntegratorICInt_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Library____rb_IntegratorICInt_out1 Library____rb_IntegratorICInt_out1_t;
struct Library____rb_IntegratorICInt_out1 {
  double data[1];
  uint8_t pos;
};

#define LIBRARY______smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_execute(in)((((double )(in))))
typedef struct Library____Gain_data Library____Gain_data_t;
/* 
 * instance data for block Gain
 */
struct Library____Gain_data {
  double Gain;
  bool __anyPreconditionFailed;
};

typedef struct Library____Sum_data Library____Sum_data_t;
/* 
 * instance data for block Sum
 */
struct Library____Sum_data {
  bool __preconditionFailed_Atleast2Inputs;
  bool __anyPreconditionFailed;
};

typedef struct Library____IntegratorICInt_data Library____IntegratorICInt_data_t;
/* 
 * instance data for block IntegratorICInt
 */
struct Library____IntegratorICInt_data {
  double gainval;
  double InitialCondition;
  double ___simIncr;
  double prevTime;
  Library____rb_IntegratorICInt_in1_t ___in1_history;
  Library____rb_IntegratorICInt_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

double  Library_IntegratorOutput(double gainval, double sampletime, double prevIn, double prevOut, double initcond, double prevTime, double curTime, bool resetSig, double UpperSaturationLimit, double LowerSaturationLimit);

void  Library____Sum_init(Library____Sum_data_t *___id, uint8_t minus_connectionCount, uint8_t plus_connectionCount);

void  Library____IntegratorICInt_init(Library____IntegratorICInt_data_t *___id);

void  Library____Gain_execute(Library____Gain_data_t *___id, double in1, double *out1);

void  Library____Sum_execute(Library____Sum_data_t *___id, double minus[10], double plus[10], double *out1, uint8_t minus_connectionCount, uint8_t plus_connectionCount);

void  Library____IntegratorICInt_execute(Library____IntegratorICInt_data_t *___id, double in1, double *out1);

void  Library____IntegratorICInt_update(Library____IntegratorICInt_data_t *___id, double in1);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
