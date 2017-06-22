#include "ACC_SafeDistance_Atomic.h"


#include "CommonUnits.h"
#include "SIUnits.h"
#include <math.h>
#include "Top_Level_System.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>

























static void  ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(double actual, uint8_t maximum, uint8_t minimum, char *loc);

/* 
 * Message Reporting Function
 */
static void  ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(double actual, uint8_t maximum, uint8_t minimum, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("Data_Dicitonary_Constraint_Violation: The actual value of v_set is outside the specified range defined in DataDictionary (");;
  printf("actual=%f",(((double )(actual))));
  printf(", maximum=%d",(((uint8_t )(maximum))));
  printf(", minimum=%d",(((uint8_t )(minimum))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Initialization function for block ssd_safe_distance_computation
 */
void  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_samplePre = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Initialization function for block ssd_distance_error
 */
void  ACC_SafeDistance_Atomic____ssd_distance_error_init(ACC_SafeDistance_Atomic____ssd_distance_error_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_valid_values = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Initialization function for block ssd_update_pid
 */
void  ACC_SafeDistance_Atomic____ssd_update_pid_init(ACC_SafeDistance_Atomic____ssd_update_pid_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_v_acc_positive = false;
      ___id->__preconditionFailed_v_pid_positive = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Execution function for block ssd_safe_distance_computation
 */
void  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t *___id, double v_acc_demo, double v_lead, double *d_safe) 
{
  double coeff_g;
  double D_BRAKE_sedan;
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_samplePre = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = v_acc_demo > v_lead + 2;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_samplePre = true;
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_safe_distance_computation_samplePre", "BlockInterfaces:ssd_safe_distance_computationInterface:1?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6504848816738695791");
      printf("v_lead=%f\n",v_lead);;
      printf("v_acc_demo=%f\n",v_acc_demo);;
    }
  }
  
  
  
  coeff_g = 0.7 * 9.807;
  
  D_BRAKE_sedan = ((v_acc_demo * v_acc_demo) / (2.0 * coeff_g));
  
  (*d_safe) = (v_acc_demo * ___id->T_SAFE) + (fabs(v_lead - v_acc_demo) * 0.2) + (D_BRAKE_sedan);
  
  
  
  
  
  {
    bool __assertCondition;
    __assertCondition = (*d_safe) >= COMMONUNITS_cm_to_m_double(150);
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_safe_distance_computation_valid_d_safe", "BlockInterfaces:ssd_safe_distance_computationInterface?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#3980660603150638789");
      printf("d_safe=%f\n",(*d_safe));;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = !((v_acc_demo > (v_lead + 2))) || (*d_safe) > 0;
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_safe_distance_computation_temporalCondition", "BlockInterfaces:ssd_safe_distance_computationInterface:2?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#3980660603150649888");
      printf("v_acc_demo=%f\n",v_acc_demo);;
      printf("v_lead=%f\n",v_lead);;
      printf("d_safe=%f\n",(*d_safe));;
    }
  }
}

/* 
 * Execution function for block ssd_distance_error
 */
void  ACC_SafeDistance_Atomic____ssd_distance_error_execute(ACC_SafeDistance_Atomic____ssd_distance_error_data_t *___id, double d_lead, double d_safe_new, double *d_error) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_valid_values = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = (d_lead > 0.0) && (d_lead < 300.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_valid_values = true;
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_distance_error_valid_values", "BlockInterfaces:ssd_distance_errorInterface?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666181855");
      printf("d_lead=%f\n",d_lead);;
      printf("d_lead=%f\n",d_lead);;
    }
  }
  
  
  
  (*d_error) = (d_safe_new - d_lead) / 1.0;
  if ( (*d_error) > 3000.0 ) 
  {
    (*d_error) = 3000.0;
  } else if ((*d_error) < -3000.0) {
    (*d_error) = -3000.0;
  } else
  {
    (*d_error) = (*d_error);
  }
  
  
  
}

/* 
 * Execution function for block ssd_mode_compute
 */
void  ACC_SafeDistance_Atomic____ssd_mode_compute_execute(void *___nothing, double d_lead, double d_safe_new, double *ssd_mode) 
{
  
  
  
  
  if ( d_lead > d_safe_new ) 
  {
    /* 
     * Distance between the vehicles is greater than safe distance
     * Cruising mode
     */

    (*ssd_mode) = 1.0;
  } else
  {
    /* 
     * Distance between the vehicles is less than are equal to safe distance
     * Distance Following mode
     */

    (*ssd_mode) = 2.0;
  }
  
  
  
}

/* 
 * Execution function for block ssd_cruise_mode
 */
void  ACC_SafeDistance_Atomic____ssd_cruise_mode_execute(void *___nothing, double v_ref, double *v_set) 
{
  
  
  
  
  {
    double const  actual = v_ref;
    if ( actual < 0 || actual > 50 ) 
    {
      ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(actual, 50, 0, "ACC_SafeDistance_Atomic:___ssd_cruise_mode_execute?null");
    }
    (*v_set) = actual;
  }
  
  
  
}

/* 
 * Execution function for block ssd_setpoint
 */
void  ACC_SafeDistance_Atomic____ssd_setpoint_execute(void *___nothing, double c_vset, double d_vset, double ssd_mode, double *v_set) 
{
  
  
  
  
  if ( ssd_mode == 1.0 ) 
  {
    {
      double const  actual = c_vset;
      if ( actual < 0 || actual > 50 ) 
      {
        ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(actual, 50, 0, "ACC_SafeDistance_Atomic:___ssd_setpoint_execute?null");
      }
      (*v_set) = actual;
    }
  } else if (ssd_mode == 2.0) {
    {
      double const  actual = d_vset;
      if ( actual < 0 || actual > 50 ) 
      {
        ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(actual, 50, 0, "ACC_SafeDistance_Atomic:___ssd_setpoint_execute:1?null");
      }
      (*v_set) = actual;
    }
    /* 
     * removed 1 mps
     */

  } else
  {
    {
      double const  actual = d_vset;
      if ( actual < 0 || actual > 50 ) 
      {
        ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(actual, 50, 0, "ACC_SafeDistance_Atomic:___ssd_setpoint_execute:2?null");
      }
      (*v_set) = actual;
    }
    /* 
     * adding else
     */

  }
  
  
  
}

/* 
 * Execution function for block ssd_update_pid
 */
void  ACC_SafeDistance_Atomic____ssd_update_pid_execute(ACC_SafeDistance_Atomic____ssd_update_pid_data_t *___id, double v_acc, double v_pid, double *v_set) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_v_acc_positive = false;
    ___id->__preconditionFailed_v_pid_positive = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = (v_acc >= 0.0) && (v_acc <= 50.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_v_acc_positive = true;
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_update_pid_v_acc_positive", "BlockInterfaces:ssd_update_pidInterface?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666181922");
      printf("v_acc=%f\n",v_acc);;
      printf("v_acc=%f\n",v_acc);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (v_pid >= 0.0) && (v_pid <= 100.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_v_pid_positive = true;
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_update_pid_v_pid_positive", "BlockInterfaces:ssd_update_pidInterface:1?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666181938");
      printf("v_pid=%f\n",v_pid);;
      printf("v_pid=%f\n",v_pid);;
    }
  }
  
  
  {
    double const  actual = v_acc - v_pid;
    if ( actual < 0 || actual > 50 ) 
    {
      ACC_SafeDistance_Atomic_Data_Dicitonary_Constraint_Violation_v_set_range_Data_Dicitonary_Constraint_Violation(actual, 50, 0, "ACC_SafeDistance_Atomic:___ssd_update_pid_execute:2?null");
    }
    (*v_set) = actual;
  }
  if ( (*v_set) < 0.0 ) 
  {
    (*v_set) = 0.0;
  }
  
  
  
  {
    bool __assertCondition;
    __assertCondition = !((v_acc >= 0.0) && (v_acc <= 50.0) && (v_pid >= 0.0) && (v_pid <= 50.0)) || ((*v_set) >= 0.0) && ((*v_set) <= 50.0);
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("ACC_SafeDistance_Atomic_ssd_update_pid_proper_v_set", "BlockInterfaces:ssd_update_pidInterface:2?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666181954");
      printf("v_set=%f\n",(*v_set));;
      printf("v_set=%f\n",(*v_set));;
      printf("v_pid=%f\n",v_pid);;
      printf("v_acc=%f\n",v_acc);;
      printf("v_acc=%f\n",v_acc);;
      printf("v_pid=%f\n",v_pid);;
    }
  }
}

/* 
 * Execution function for block acc_variant_selector
 */
void  ACC_SafeDistance_Atomic____acc_variant_selector_execute(ACC_SafeDistance_Atomic____acc_variant_selector_data_t *___id, double brake_hbk, double brake_sedan, double d_brake_hbk, double d_brake_sedan, double throttle_hbk, double throttle_sedan, double *brake, double *d_brake, double *throttle) 
{
  
  
  
  
  (*brake) = (___id->variant == ACC_SafeDistance_Atomic_variantSelector__Hatchback) ? (brake_hbk) : (brake_sedan);
  (*throttle) = (___id->variant == ACC_SafeDistance_Atomic_variantSelector__Hatchback) ? (throttle_hbk) : (throttle_sedan);
  (*d_brake) = (___id->variant == ACC_SafeDistance_Atomic_variantSelector__Hatchback) ? (d_brake_hbk) : (d_brake_sedan);
  
  
  
  
}

