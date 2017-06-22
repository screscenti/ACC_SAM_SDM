#ifndef ACC_SPEEDTRACKING_ATOMIC_H
#define ACC_SPEEDTRACKING_ATOMIC_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0

#include "BlockInterfaces.h"



#ifdef __cplusplus
extern "C" {
#endif

double  ACC_SpeedTracking_Atomic_st_mode_table(double v_acc1, double v_set1, double d_lead1, double d_safe1, double d_lead_safe);

void  ACC_SpeedTracking_Atomic____st_mode_computation_execute(void *___nothing, double d_brake, double d_lead, double d_safe_new, double v_acc, double v_set, double *st_mode);

void  ACC_SpeedTracking_Atomic____st_braking_distance_execute(void *___nothing, double v_acc, double *d_brake);

void  ACC_SpeedTracking_Atomic____throttlemode_error_execute(void *___nothing, double v_acc, double v_set, double *v_error);

void  ACC_SpeedTracking_Atomic____brakemode_error_execute(void *___nothing, double v_acc, double v_set, double *v_error);

void  ACC_SpeedTracking_Atomic____throttlemode_brake_execute(void *___nothing, double throttle1, double *brake1);

void  ACC_SpeedTracking_Atomic____brakemode_throttle_execute(void *___nothing, double brake1, double *throttle1);

void  ACC_SpeedTracking_Atomic____st_tracking_execute(void *___nothing, double b_brake, double b_throttle, double st_mode1, double t_brake, double t_throttle, double *brake, double *throttle);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
