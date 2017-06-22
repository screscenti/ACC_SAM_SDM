#ifndef ___SIMULATIONRUNTIME_H
#define ___SIMULATIONRUNTIME_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

void  ___SimulationRuntime_initTimeVars(double startTime, double ti);

void  ___SimulationRuntime_setSimVars(double time, double incr, uint64_t step, double startTime);

void  ___SimulationRuntime_incrSimVars(void);

uint64_t  ___SimulationRuntime_getValueInUInt64(double value);

extern uint64_t ___SimulationRuntime_simStep;

extern double ___SimulationRuntime_simTime;

extern double ___SimulationRuntime_simTimeIncr;

extern double ___SimulationRuntime_simStartTime;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
