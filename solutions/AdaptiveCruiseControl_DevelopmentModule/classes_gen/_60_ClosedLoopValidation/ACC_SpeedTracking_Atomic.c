#include "ACC_SpeedTracking_Atomic.h"


#include "CommonUnits.h"
#include "SIUnits.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>









#define ACC_SPEEDTRACKING_ATOMIC_mISNAN(x)((x != x))
















static void  ACC_SpeedTracking_Atomic_ContractFailures_contractFailed(uint8_t contractID, char *loc);

static void  ACC_SpeedTracking_Atomic_Data_Dicitonary_Constraint_Violation_d_brake_range_Data_Dicitonary_Constraint_Violation(double actual, uint8_t maximum, uint8_t minimum, char *loc);

static double  ACC_SpeedTracking_Atomic_blockexpr_st_mode_table_20(double d_safe1, double d_lead_safe, double v_acc1, double v_set1, double d_lead1);

/* 
 * Message Reporting Function
 */
static void  ACC_SpeedTracking_Atomic_ContractFailures_contractFailed(uint8_t contractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("contractFailed: pre- or postcondition failed (");;
  printf("contractID=%d",(((uint8_t )(contractID))));
  printf(" ,location=@%s) \n",loc);;
}

double  ACC_SpeedTracking_Atomic_st_mode_table(double v_acc1, double v_set1, double d_lead1, double d_safe1, double d_lead_safe) 
{
  if ( ACC_SPEEDTRACKING_ATOMIC_mISNAN(v_acc1) || ACC_SPEEDTRACKING_ATOMIC_mISNAN(v_set1) || ACC_SPEEDTRACKING_ATOMIC_mISNAN(d_lead1) || ACC_SPEEDTRACKING_ATOMIC_mISNAN(d_safe1) ) 
  {
    return -1.0;
  } else
  {
    return ACC_SpeedTracking_Atomic_blockexpr_st_mode_table_20(d_safe1, d_lead_safe, v_acc1, v_set1, d_lead1);
  }
}

/* 
 * Message Reporting Function
 */
static void  ACC_SpeedTracking_Atomic_Data_Dicitonary_Constraint_Violation_d_brake_range_Data_Dicitonary_Constraint_Violation(double actual, uint8_t maximum, uint8_t minimum, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("Data_Dicitonary_Constraint_Violation: The actual value of d_brake is outside the specified range defined in DataDictionary (");;
  printf("actual=%f",(((double )(actual))));
  printf(", maximum=%d",(((uint8_t )(maximum))));
  printf(", minimum=%d",(((uint8_t )(minimum))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Execution function for block st_mode_computation
 */
void  ACC_SpeedTracking_Atomic____st_mode_computation_execute(void *___nothing, double d_brake, double d_lead, double d_safe_new, double v_acc, double v_set, double *st_mode) 
{
  
  
  
  
  (*st_mode) = ACC_SpeedTracking_Atomic_st_mode_table(v_acc, v_set, d_lead, d_safe_new, d_brake);
  
  
  
  {
    bool __assertCondition;
    __assertCondition = !((d_lead > d_safe_new)) || ((*st_mode) == 1.0);
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SpeedTracking_Atomic_st_mode_computation_Cruise_mode", "BlockInterfaces:st_mode_computationInterface?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182438");
      printf("st_mode=%f\n",(*st_mode));;
      printf("d_safe_new=%f\n",d_safe_new);;
      printf("d_lead=%f\n",d_lead);;
    }
  }
}

/* 
 * Execution function for block st_braking_distance
 */
void  ACC_SpeedTracking_Atomic____st_braking_distance_execute(void *___nothing, double v_acc, double *d_brake) 
{
  
  
  
  
  {
    double const  actual = v_acc * v_acc / (2.0 * 0.7 * 9.814);
    if ( actual < 0 || actual > 140 ) 
    {
      ACC_SpeedTracking_Atomic_Data_Dicitonary_Constraint_Violation_d_brake_range_Data_Dicitonary_Constraint_Violation(actual, 140, 0, "ACC_SpeedTracking_Atomic:___st_braking_distance_execute?null");
    }
    (*d_brake) = actual;
  }
  
  
  
  
}

/* 
 * Execution function for block throttlemode_error
 */
void  ACC_SpeedTracking_Atomic____throttlemode_error_execute(void *___nothing, double v_acc, double v_set, double *v_error) 
{
  
  
  
  
  (*v_error) = ((v_set - v_acc));
  
  
  
}

/* 
 * Execution function for block brakemode_error
 */
void  ACC_SpeedTracking_Atomic____brakemode_error_execute(void *___nothing, double v_acc, double v_set, double *v_error) 
{
  
  
  
  
  (*v_error) = ((v_set + v_acc));
  
  
  
}

/* 
 * Execution function for block throttlemode_brake
 */
void  ACC_SpeedTracking_Atomic____throttlemode_brake_execute(void *___nothing, double throttle1, double *brake1) 
{
  
  
  
  
  if ( throttle1 < 0.0 ) 
  {
    (*brake1) = -1.0 * throttle1;
  } else
  {
    (*brake1) = 0.0;
  }
  
  
  
}

/* 
 * Execution function for block brakemode_throttle
 */
void  ACC_SpeedTracking_Atomic____brakemode_throttle_execute(void *___nothing, double brake1, double *throttle1) 
{
  
  
  
  
  if ( (brake1 < 0.0) ) 
  {
    (*throttle1) = -1.0 * brake1;
  } else
  {
    (*throttle1) = 0.0;
  }
  
  
  
}

/* 
 * Execution function for block st_tracking
 */
void  ACC_SpeedTracking_Atomic____st_tracking_execute(void *___nothing, double b_brake, double b_throttle, double st_mode1, double t_brake, double t_throttle, double *brake, double *throttle) 
{
  
  
  
  
  if ( st_mode1 >= 1.0 ) 
  {
    /* 
     * Throttle mode
     */

    (*throttle) = t_throttle;
    (*brake) = t_brake;
  } else
  {
    (*throttle) = b_throttle;
    (*brake) = b_brake;
  }
  
  
  
  {
    bool __assertCondition;
    __assertCondition = ((*throttle) >= 0.0) && ((*throttle) <= 100.0) && ((*brake) >= 0.0) && ((*brake) <= 100.0);
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SpeedTracking_Atomic_st_tracking_out_in_pct", "BlockInterfaces:st_trackingInterface?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182503");
      printf("brake=%f\n",(*brake));;
      printf("throttle=%f\n",(*throttle));;
      printf("throttle=%f\n",(*throttle));;
      printf("brake=%f\n",(*brake));;
    }
  }
}

static double  ACC_SpeedTracking_Atomic_blockexpr_st_mode_table_20(double d_safe1, double d_lead_safe, double v_acc1, double v_set1, double d_lead1) 
{
  if ( v_set1 > v_acc1 ) 
  {
    if ( d_lead1 > d_safe1 ) 
    {
      return 1.0;
    }
    if ( (d_lead1 < d_safe1) && (d_lead1 > d_lead_safe) ) 
    {
      return 1.0;
    }
    if ( d_lead1 <= d_lead_safe ) 
    {
      return 0.0;
    }
  }
  if ( v_set1 <= v_acc1 ) 
  {
    if ( d_lead1 > d_safe1 ) 
    {
      return 1.0;
    }
    if ( (d_lead1 < d_safe1) && (d_lead1 > d_lead_safe) ) 
    {
      return 0.0;
    }
    if ( d_lead1 <= d_lead_safe ) 
    {
      return 0.0;
    }
  }
  return -1.0;
}

