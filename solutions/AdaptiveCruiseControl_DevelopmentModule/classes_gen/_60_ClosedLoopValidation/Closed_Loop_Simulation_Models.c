#include "Closed_Loop_Simulation_Models.h"


#include "___SimulationRuntime.h"
#include <stdlib.h>
#include "Ame_Simulink_Result_Parser.h"
#include "Unittest_Helper.h"
#include "Cla_Discrete.h"
#include "Cla_Operators.h"
#include "Library.h"
#include "___BlockMessages.h"
#include "UnitTestMessages.h"
#include <stdio.h>





















static void  Closed_Loop_Simulation_Models___testhelper____completeSystem_SimulationBlock____blockunittest__0_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures);

static uint8_t  Closed_Loop_Simulation_Models_clsmTestSuite_run_test(uint8_t test);

static void  Closed_Loop_Simulation_Models_closure_a5a51(void);

static Unittest_Helper_TestSuite_t Closed_Loop_Simulation_Models_clsmTestSuite_testsuite = {
  1,  0,  0,  "_60_ClosedLoopValidation.clsmTestSuite",  &Closed_Loop_Simulation_Models_clsmTestSuite_run_test,  &Closed_Loop_Simulation_Models_closure_a5a51,  {
    {
      "completeSystem_SimulationBlock____blockunittest__0_testCase_0",      0,      "completeSystem_SimulationBlock____blockunittest__0_testCase_0",      UNITTEST_HELPER_TEST_STATE_NOT_RUN    }  }};

void  Closed_Loop_Simulation_Models____control_flattened_init(Closed_Loop_Simulation_Models____control_flattened_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_ACC_on = false;
      ___id->__preconditionFailed_v_ref_positive_SMC = false;
      ___id->__preconditionFailed_v_acc_positive = false;
      ___id->__preconditionFailed_d_lead_positive = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
  /* 
   * initializing parameters
   */

  ___id->i_ssd_safe_dist_compute.T_SAFE = 2.0;
  /* 
   * initializing parameters
   */

  ___id->i_i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1.delayInitVal = 0;
  /* 
   * initializing parameters
   */

  ___id->i_P.Gain = (3.0);
  /* 
   * initializing parameters
   */

  ___id->i_I.Gain = (0.5);
  /* 
   * initializing parameters
   */

  ___id->i_D.Gain = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_FilterCoefficient.Gain = (100.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_.gainval = 1;
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_.InitialCondition = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_.___simIncr = ___id->___simIncr;
  /* 
   * initializing parameters
   */

  ___id->i_Filter.gainval = 1;
  /* 
   * initializing parameters
   */

  ___id->i_Filter.InitialCondition = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Filter.___simIncr = ___id->___simIncr;
  /* 
   * initializing parameters
   */

  ___id->i_P1.Gain = (0.5);
  /* 
   * initializing parameters
   */

  ___id->i_I1.Gain = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_1.gainval = 1;
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_1.InitialCondition = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_1.___simIncr = ___id->___simIncr;
  /* 
   * initializing parameters
   */

  ___id->i_P2.Gain = (0.5);
  /* 
   * initializing parameters
   */

  ___id->i_I2.Gain = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_2.gainval = 1;
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_2.InitialCondition = (0.0);
  /* 
   * initializing parameters
   */

  ___id->i_Integrator_2.___simIncr = ___id->___simIncr;
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(&___id->i_ssd_safe_dist_compute);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_init(&___id->i_i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Library____IntegratorICInt_init(&___id->i_Integrator_);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Library____IntegratorICInt_init(&___id->i_Filter);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Cla_Operators____Sum_init(&___id->i_SumD, 1, 1);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Cla_Operators____Sum_init(&___id->i_Sum_, 0, 3);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  ACC_SafeDistance_Atomic____ssd_distance_error_init(&___id->i_ssd_dist_error);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  ACC_SafeDistance_Atomic____ssd_update_pid_init(&___id->i_ssd_upd_pid);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Library____IntegratorICInt_init(&___id->i_Integrator_1);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Cla_Operators____Sum_init(&___id->i_Sum_1, 0, 2);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Library____IntegratorICInt_init(&___id->i_Integrator_2);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Cla_Operators____Sum_init(&___id->i_Sum_2, 0, 2);
}

/* 
 * Initialization function for block __delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake
 */
void  Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_init(Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_data_t *___id) 
{
  ___id->delayedValue = ___id->delayInitVal;
}

void  Closed_Loop_Simulation_Models____completeSystem_flattened_init(Closed_Loop_Simulation_Models____completeSystem_flattened_data_t *___id) 
{
  /* 
   * initializing parameters
   */

  ___id->i_i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake.delayInitVal = 10;
  /* 
   * initializing parameters
   */

  ___id->i_Acc_control_algorithm.___simIncr = ___id->___simIncr;
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_init(&___id->i_i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake);
  /* 
   * Stateful blocks: call init functions dsthffgshdgfhfgh
   */

  Closed_Loop_Simulation_Models____control_flattened_init(&___id->i_Acc_control_algorithm);
}

static void  Closed_Loop_Simulation_Models___testhelper____completeSystem_SimulationBlock____blockunittest__0_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures) 
{
  void *___id;
  double brakeCmd;
  double throttleCmd;
  Closed_Loop_Simulation_Models____completeSystem_flattened_data_t instance = {
    0  };
  double __pv_brakeCmd;
  double __pv_throttleCmd;
  char *id;
  char *path;
  char **values_brakeCmd;
  char **values_throttleCmd;
  uint64_t size;
  uint64_t temp_var;
  ___id = NULL;
  /* 
   * Concrete Block: create and init instance
   */

  instance.___simIncr = 1.0;
  Closed_Loop_Simulation_Models____completeSystem_flattened_init(&instance);
  ___id = &instance;
  id = "0";
  path = "C:/Users/tghx1e/CHE-W14-005/00_Demos/00_ACC_withVariants/ACC_SAM_SDM/solutions/AdaptiveCruiseControl_DevelopmentModule/source_gen/_60_ClosedLoopValidation/CLSResults.xml";
  
  
  values_brakeCmd = Ame_Simulink_Result_Parser_parseDoc(path, id, "brakeCmd", "");
  values_throttleCmd = Ame_Simulink_Result_Parser_parseDoc(path, id, "throttleCmd", "");
  
  
  ___SimulationRuntime_initTimeVars(0.0, 1.0);
  size = Ame_Simulink_Result_Parser_getSize();
  while (size > 0 && (___SimulationRuntime_simStep < size))
  {
    
    /* 
     * Test
     */

    {
    }
    
    
    
    {
      if ( values_brakeCmd != NULL ) 
      {
        (__pv_brakeCmd) = strtod(values_brakeCmd[___SimulationRuntime_simStep], NULL);
      }
      
    }
    {
      if ( values_throttleCmd != NULL ) 
      {
        (__pv_throttleCmd) = strtod(values_throttleCmd[___SimulationRuntime_simStep], NULL);
      }
      
    }
    
    ___SimulationRuntime_incrSimVars();
    
  }
  /* 
   * only way to free all the allocated memebers of double pointer
   */

  temp_var = 0;
  while (size > 0 && temp_var < size)
  {
    {
      if ( values_brakeCmd != NULL ) 
      {
        free(values_brakeCmd[temp_var]);
      }
    }
    {
      if ( values_throttleCmd != NULL ) 
      {
        free(values_throttleCmd[temp_var]);
      }
    }
    temp_var++;
  }
  free(values_brakeCmd);
  free(values_throttleCmd);
  
  
  
}

int32_t  main(int32_t argc, char **argv) 
{
  struct Unittest_Helper_TestSuite *(all_suites[1]) = {
    &Closed_Loop_Simulation_Models_clsmTestSuite_testsuite  };
  uint32_t suites_count;
  suites_count = 1;
  Unittest_Helper_init_testsuite(all_suites, suites_count);
  Unittest_Helper_NonIsolated_run_tests(all_suites, suites_count);
  
  return Unittest_Helper_finish_testsuite(all_suites, suites_count);
}

void  Closed_Loop_Simulation_Models____control_flattened_execute(Closed_Loop_Simulation_Models____control_flattened_data_t *___id, uint8_t ACC_switch, double d_lead, double v_acc, double v_lead, double v_ref, double *brake, double *d_brake, double *d_safe_new, double *throttle) 
{
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_ACC_on = false;
    ___id->__preconditionFailed_v_ref_positive_SMC = false;
    ___id->__preconditionFailed_v_acc_positive = false;
    ___id->__preconditionFailed_d_lead_positive = false;
  }
  {
    bool __assertCondition;
    __assertCondition = ACC_switch == 1;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ACC_on = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Closed_Loop_Simulation_Models_control_flattened_ACC_on", "Closed_Loop_Simulation_Models:control_flattened?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182799");
      printf("ACC_switch=%d\n",ACC_switch);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (v_ref >= 0.0) && (v_ref <= 50.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_v_ref_positive_SMC = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Closed_Loop_Simulation_Models_control_flattened_v_ref_positive_SMC", "Closed_Loop_Simulation_Models:control_flattened:1?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6877816403407093286");
      printf("v_ref=%f\n",v_ref);;
      printf("v_ref=%f\n",v_ref);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (v_acc >= 0.0) && (v_acc <= 50.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_v_acc_positive = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Closed_Loop_Simulation_Models_control_flattened_v_acc_positive", "Closed_Loop_Simulation_Models:control_flattened:2?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182819");
      printf("v_acc=%f\n",v_acc);;
      printf("v_acc=%f\n",v_acc);;
    }
  }
  {
    bool __assertCondition;
    __assertCondition = (d_lead > 0.0);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_d_lead_positive = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Closed_Loop_Simulation_Models_control_flattened_d_lead_positive", "Closed_Loop_Simulation_Models:control_flattened:3?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182835");
      printf("d_lead=%f\n",d_lead);;
    }
  }
  ___id->__anyPreconditionFailed = (___id->__preconditionFailed_ACC_on) || (___id->__preconditionFailed_v_ref_positive_SMC) || (___id->__preconditionFailed_v_acc_positive) || (___id->__preconditionFailed_d_lead_positive);
  {
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_cruise_mode_execute(NULL, v_ref, &(___id->ssd_cruise_mode1_v_set));
      };
      
      
      
    }
    {
      
      
      {
        ___id->i_Integrator_1.___simIncr = ___id->___simIncr;
        Library____IntegratorICInt_execute(&(___id->i_Integrator_1), (___id->I1_out1), &(___id->Integrator_1_out1));
      };
      
      
      
    }
    {
      
      
      {
        ___id->i_Integrator_2.___simIncr = ___id->___simIncr;
        Library____IntegratorICInt_execute(&(___id->i_Integrator_2), (___id->I2_out1), &(___id->Integrator_2_out1));
      };
      
      
      
    }
    {
      
      
      {
        ___id->i_Integrator_.___simIncr = ___id->___simIncr;
        Library____IntegratorICInt_execute(&(___id->i_Integrator_), (___id->I_out1), &(___id->Integrator__out1));
      };
      
      
      
    }
    {
      
      
      {
        ___id->i_Filter.___simIncr = ___id->___simIncr;
        Library____IntegratorICInt_execute(&(___id->i_Filter), (___id->i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_out), &(___id->Filter_out1));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(&(___id->i_ssd_safe_dist_compute), v_acc, v_lead, &(___id->ssd_safe_dist_compute_d_safe));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_distance_error_execute(&(___id->i_ssd_dist_error), d_lead, (___id->ssd_safe_dist_compute_d_safe), &(___id->ssd_dist_error_d_error));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_D), (___id->ssd_dist_error_d_error), &(___id->D_out1));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_I), (___id->ssd_dist_error_d_error), &(___id->I_out1));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_P), (___id->ssd_dist_error_d_error), &(___id->P_out1));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__D_out1__SumD_plus_res = CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICInt__D_out1__SumD_plus_execute((___id->D_out1));
      
      
    }
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_mode_compute_execute(NULL, d_lead, (___id->ssd_safe_dist_compute_d_safe), &(___id->ssd_mode_compute1_ssd_mode));
      };
      
      
      
    }
    {
      double SumD_minus_ptrarr[10] = {
        (___id->Filter_out1)      };
      double SumD_plus_ptrarr[10] = {
        (___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__D_out1__SumD_plus_res)      };
      
      
      {
        Cla_Operators____Sum_execute(&(___id->i_SumD), SumD_minus_ptrarr, SumD_plus_ptrarr, &(___id->SumD_out1), 1, 1);
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_FilterCoefficient), (___id->SumD_out1), &(___id->FilterCoefficient_out1));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Sum__plus_res = CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Sum__plus_execute((___id->FilterCoefficient_out1));
      
      
    }
    {
      
      
      ___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_res = LIBRARY______smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_execute((___id->P_out1));
      
      
    }
    {
      double Sum__minus_ptrarr[10] = {
        0      };
      double Sum__plus_ptrarr[10] = {
        (___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_res),        (___id->Integrator__out1),        (___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Sum__plus_res)      };
      
      
      {
        Cla_Operators____Sum_execute(&(___id->i_Sum_), Sum__minus_ptrarr, Sum__plus_ptrarr, &(___id->Sum__out1), 0, 3);
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____st_braking_distance_execute(NULL, v_acc, &(___id->st_mode_braking_distance_d_brake));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__ssd_distance_following_mode__ssd_pid_out1__ssd_upd_pid_v_pid_res = ACC_SAFEDISTANCE_SUBSYS______smartcon__ssd_distance_following_mode__ssd_pid_out1__ssd_upd_pid_v_pid_execute((___id->Sum__out1));
      
      
    }
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_update_pid_execute(&(___id->i_ssd_upd_pid), v_acc, (___id->i__smartcon__ssd_distance_following_mode__ssd_pid_out1__ssd_upd_pid_v_pid_res), &(___id->ssd_upd_pid_v_set));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SafeDistance_Atomic____ssd_setpoint_execute(NULL, (___id->ssd_cruise_mode1_v_set), (___id->ssd_upd_pid_v_set), (___id->ssd_mode_compute1_ssd_mode), &(___id->ssd_setpoint1_v_set));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____brakemode_error_execute(NULL, v_acc, (___id->ssd_setpoint1_v_set), &(___id->bm_error_v_error));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_I2), (___id->bm_error_v_error), &(___id->I2_out1));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____st_mode_computation_execute(NULL, (___id->st_mode_braking_distance_d_brake), d_lead, (___id->ssd_safe_dist_compute_d_safe), v_acc, (___id->ssd_setpoint1_v_set), &(___id->st_mode_compute_st_mode));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_P2), (___id->bm_error_v_error), &(___id->P2_out1));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus2_res = LIBRARY______smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_execute((___id->P2_out1));
      
      
    }
    {
      double Sum_2_minus_ptrarr[10] = {
        0      };
      double Sum_2_plus_ptrarr[10] = {
        (___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus2_res),        (___id->Integrator_2_out1)      };
      
      
      {
        Cla_Operators____Sum_execute(&(___id->i_Sum_2), Sum_2_minus_ptrarr, Sum_2_plus_ptrarr, &(___id->Sum_2_out1), 0, 2);
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____brakemode_throttle_execute(NULL, (___id->Sum_2_out1), &(___id->brmode_throt_comp_throttle1));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____throttlemode_error_execute(NULL, v_acc, (___id->ssd_setpoint1_v_set), &(___id->tm_error_v_error));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_I1), (___id->tm_error_v_error), &(___id->I1_out1));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Operators____Gain_execute(&(___id->i_P1), (___id->tm_error_v_error), &(___id->P1_out1));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus1_res = LIBRARY______smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_execute((___id->P1_out1));
      
      
    }
    {
      double Sum_1_minus_ptrarr[10] = {
        0      };
      double Sum_1_plus_ptrarr[10] = {
        (___id->i__smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus1_res),        (___id->Integrator_1_out1)      };
      
      
      {
        Cla_Operators____Sum_execute(&(___id->i_Sum_1), Sum_1_minus_ptrarr, Sum_1_plus_ptrarr, &(___id->Sum_1_out1), 0, 2);
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____throttlemode_brake_execute(NULL, (___id->Sum_1_out1), &(___id->thmode_brake_comp_brake1));
      };
      
      
      
    }
    {
      
      
      {
        ACC_SpeedTracking_Atomic____st_tracking_execute(NULL, (___id->Sum_2_out1), (___id->brmode_throt_comp_throttle1), (___id->st_mode_compute_st_mode), (___id->thmode_brake_comp_brake1), (___id->Sum_1_out1), &(___id->st_track_brake), &(___id->st_track_throttle));
      };
      
      
      
    }
    {
      
      
      {
        Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_execute(&(___id->i_i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1), (___id->FilterCoefficient_out1), &(___id->i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_out));
      };
      
      
      
    }
    {
      
      Library____IntegratorICInt_update(&(___id->i_Integrator_1), (___id->I1_out1));
    }
    {
      
      Library____IntegratorICInt_update(&(___id->i_Integrator_2), (___id->I2_out1));
    }
    {
      
      Library____IntegratorICInt_update(&(___id->i_Integrator_), (___id->I_out1));
    }
    {
      
      Library____IntegratorICInt_update(&(___id->i_Filter), (___id->i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_out));
    }
    {
      
      Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_update(&(___id->i_i___delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1), (___id->FilterCoefficient_out1));
    }
    
    *d_safe_new = ___id->ssd_safe_dist_compute_d_safe;
    *d_brake = ___id->st_mode_braking_distance_d_brake;
    *brake = ___id->st_track_brake;
    *throttle = ___id->st_track_throttle;
  }
  end:

  0;
  
  {
    bool __assertCondition;
    __assertCondition = !(((d_lead < (*d_brake)) && ((*d_safe_new) < (*d_brake)))) || (*brake) > 0.0;
    if ( !__assertCondition ) 
    {
      ___BlockMessages____block_messagelist_Contract_Failed("Closed_Loop_Simulation_Models_control_flattened_Assert_braking", "Closed_Loop_Simulation_Models:control_flattened:4?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666182843");
      printf("brake=%f\n",(*brake));;
      printf("d_brake=%f\n",(*d_brake));;
      printf("d_safe_new=%f\n",(*d_safe_new));;
      printf("d_brake=%f\n",(*d_brake));;
      printf("d_lead=%f\n",d_lead);;
    }
  }
}

/* 
 * Execution function for block __delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake
 */
void  Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_execute(Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_data_t *___id, double in, double *out) 
{
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
}

/* 
 * Update function for block __delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake
 */
void  Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_update(Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

void  Closed_Loop_Simulation_Models____completeSystem_flattened_execute(Closed_Loop_Simulation_Models____completeSystem_flattened_data_t *___id, double *brakeCmd, double *throttleCmd) 
{
  {
    {
      
      
      {
        Amesim_Supercomponents____chassis_input_flattened_execute(&(___id->i_ChassisInput), &(___id->ChassisInput_driving), &(___id->ChassisInput_roadProfile));
      };
      
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____Environment_execute(NULL, &(___id->aEnvironment_Air_Density), &(___id->aEnvironment_Ambient_Temperature), &(___id->aEnvironment_Desired_Vehicle_Speed), &(___id->aEnvironment_Road_Slope), &(___id->aEnvironment_leadingVehPos), &(___id->aEnvironment_leadingVehSpeed));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__aEnvironment_Desired_Vehicle_Speed__Acc_control_algorithm_v_ref_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__aEnvironment_Desired_Vehicle_Speed__Acc_control_algorithm_v_ref_execute((___id->aEnvironment_Desired_Vehicle_Speed));
      
      
    }
    {
      
      
      {
        Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_execute(&(___id->i_i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake), (___id->i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res), &(___id->i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_out));
      };
      
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____Chassis_execute(NULL, (___id->i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_out), (___id->ChassisInput_driving), (___id->ChassisInput_roadProfile), &(___id->Chassis_Supercomponent_Wheel), &(___id->Chassis_Supercomponent_acc), &(___id->Chassis_Supercomponent_vehiclePos), &(___id->Chassis_Supercomponent_vehicleSpd));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__aEnvironment_leadingVehSpeed__Acc_control_algorithm_v_lead_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__aEnvironment_leadingVehSpeed__Acc_control_algorithm_v_lead_execute((___id->aEnvironment_leadingVehSpeed));
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____HMI_input_flattened_execute(&(___id->i_readHMIInput), &(___id->readHMIInput_desVehSpeed), &(___id->readHMIInput_vehicle_speed));
      };
      
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____HMI_execute(NULL, (___id->readHMIInput_desVehSpeed), (___id->readHMIInput_vehicle_speed), &(___id->HMI_Supercomponent_ACCSwitchPos), &(___id->HMI_Supercomponent_Acceleration_xmd), &(___id->HMI_Supercomponent_Brake_Command));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__Chassis_Supercomponent_vehicleSpd__Acc_control_algorithm_v_acc_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__Chassis_Supercomponent_vehicleSpd__Acc_control_algorithm_v_acc_execute((___id->Chassis_Supercomponent_vehicleSpd));
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____GPS_Distance_Calculator_flattened_execute(&(___id->i_LeadingVehDistance), &(___id->LeadingVehDistance_leadingVehicleDist));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__HMI_Supercomponent_ACCSwitchPos__Acc_control_algorithm_ACC_switch_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__HMI_Supercomponent_ACCSwitchPos__Acc_control_algorithm_ACC_switch_execute((___id->HMI_Supercomponent_ACCSwitchPos));
      
      
    }
    {
      
      
      {
        ___id->i_Acc_control_algorithm.___simIncr = ___id->___simIncr;
        Closed_Loop_Simulation_Models____control_flattened_execute(&(___id->i_Acc_control_algorithm), (___id->i__smartcon__completeSystem__HMI_Supercomponent_ACCSwitchPos__Acc_control_algorithm_ACC_switch_res), (___id->LeadingVehDistance_leadingVehicleDist), (___id->i__smartcon__completeSystem__Chassis_Supercomponent_vehicleSpd__Acc_control_algorithm_v_acc_res), (___id->i__smartcon__completeSystem__aEnvironment_leadingVehSpeed__Acc_control_algorithm_v_lead_res), (___id->i__smartcon__completeSystem__aEnvironment_Desired_Vehicle_Speed__Acc_control_algorithm_v_ref_res), &(___id->Acc_control_algorithm_brake), &(___id->Acc_control_algorithm_d_brake), &(___id->Acc_control_algorithm_d_safe_new), &(___id->Acc_control_algorithm_throttle));
      };
      
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__Acc_control_algorithm_d_brake__Engine_Supercomponent_accCmd_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__Acc_control_algorithm_d_brake__Engine_Supercomponent_accCmd_execute((___id->Acc_control_algorithm_d_brake));
      
      
    }
    {
      
      
      ___id->i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res = CLOSED_LOOP_SIMULATION_MODELS______smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_execute((___id->Acc_control_algorithm_d_safe_new));
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____engine_input_flattened_execute(&(___id->i_EngineInput), &(___id->EngineInput_load), &(___id->EngineInput_speed));
      };
      
      
      
    }
    {
      
      
      {
        Amesim_Supercomponents____Engine_execute(NULL, (___id->i__smartcon__completeSystem__Acc_control_algorithm_d_brake__Engine_Supercomponent_accCmd_res), (___id->EngineInput_load), (___id->EngineInput_speed), &(___id->Engine_Supercomponent_friction), &(___id->Engine_Supercomponent_fuel), &(___id->Engine_Supercomponent_loadCmd), &(___id->Engine_Supercomponent_torque));
      };
      
      
      
    }
    {
      
      Closed_Loop_Simulation_Models______delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake_update(&(___id->i_i___delay_completeSystem__i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res__Chassis_Supercomponent_brake), (___id->i__smartcon__completeSystem__Acc_control_algorithm_d_safe_new__Chassis_Supercomponent_brake_res));
    }
    
    *brakeCmd = ___id->Acc_control_algorithm_brake;
    *throttleCmd = ___id->Acc_control_algorithm_throttle;
  }
  end:

  0;
  
}

int32_t  Closed_Loop_Simulation_Models_completeSystem_SimulationBlock____blockunittest__0_testCase_0(void) 
{
  int32_t ___failuresVal;
  int32_t *___failures;
  ___failuresVal = 0;
  ___failures = &___failuresVal;
  UnitTestMessages____testing_runningTest("Closed_Loop_Simulation_Models:completeSystem_SimulationBlock____blockunittest__0?null");
  Closed_Loop_Simulation_Models___testhelper____completeSystem_SimulationBlock____blockunittest__0_unittest(NULL, NULL, NULL, ___failures);
  return ___failuresVal;
}

static uint8_t  Closed_Loop_Simulation_Models_clsmTestSuite_run_test(uint8_t test) 
{
  switch (test)
  {
    case 0: {
      return Closed_Loop_Simulation_Models_completeSystem_SimulationBlock____blockunittest__0_testCase_0();
      break;
    }
  }

  return UNITTEST_HELPER_ERROR_TEST_NOT_FOUND;
}

static void  Closed_Loop_Simulation_Models_closure_a5a51(void) 
{
}

