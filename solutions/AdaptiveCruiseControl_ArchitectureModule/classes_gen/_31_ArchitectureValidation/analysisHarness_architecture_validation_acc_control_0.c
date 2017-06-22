#include "analysisHarness_architecture_validation_acc_control_0.h"


#include "___SimulationRuntime.h"
#include "Unittest_Helper.h"
#include "Top_Level_System.h"
#include "___BlockMessages.h"





void  analysisHarness_architecture_validation_acc_control_0_entryFor__DEEP_acc_control_acc_speed_setpointInterface_speed_setpoint(void) 
{
  
  /* 
   * time variables for 'sim-only' blocks
   */

  double __simTime;
  double ___tmpVar_9;
  __simTime = ___tmpVar_9;
  __CPROVER_assume( (__simTime >= 0 && __simTime <= 5));
  
  
  double __simTimeIncr;
  double ___tmpVar_19;
  __simTimeIncr = ___tmpVar_19;
  __CPROVER_assume( (__simTimeIncr >= 0 && __simTimeIncr <= 1));
  
  
  uint64_t __simStep;
  ___SimulationRuntime_initTimeVars(__simTime, __simTimeIncr);
  
  /* 
   * variables for ports of the top analyzed composite component
   */

  uint8_t ACC_switch;
  double brake;
  double d_brake;
  double d_lead;
  double d_safe_new;
  double throttle;
  double v_acc;
  double v_lead;
  double v_ref;
  /* 
   * variables for parameters of the top analyzed composite component
   */

  double ___simIncr;
  /* 
   * variables for ports of all block instances
   */

  uint8_t speed_setpoint___ACC_switch;
  double speed_setpoint___d_lead;
  double speed_setpoint___d_safe_new;
  double speed_setpoint___v_acc;
  double speed_setpoint___v_lead;
  double speed_setpoint___v_ref;
  double speed_setpoint___v_set;
  double speed_tracking___b1;
  double speed_tracking___dLead;
  double speed_tracking___dSafe;
  double speed_tracking___d_brake;
  double speed_tracking___t1;
  double speed_tracking___v_acc;
  double speed_tracking___v_set;
  /* 
   * variables for parameters of all block instances
   */

  /* 
   * ports wiring for deeper connections
   */

  /* 
   * parameters wiring for deeper connections
   */

  /* 
   * ports wiring for connections in the analyzed composite component
   */

  __CPROVER_assume( speed_setpoint___ACC_switch == ACC_switch);
  __CPROVER_assume( speed_setpoint___v_acc == v_acc);
  __CPROVER_assume( speed_setpoint___v_lead == v_lead);
  __CPROVER_assume( speed_setpoint___v_ref == v_ref);
  __CPROVER_assume( speed_setpoint___d_lead == d_lead);
  __CPROVER_assume( speed_tracking___dLead == d_lead);
  __CPROVER_assume( speed_tracking___v_acc == v_acc);
  __CPROVER_assume( speed_tracking___dSafe == speed_setpoint___d_safe_new);
  __CPROVER_assume( speed_tracking___v_set == speed_setpoint___v_set);
  __CPROVER_assume( d_safe_new == speed_setpoint___d_safe_new);
  __CPROVER_assume( brake == speed_tracking___b1);
  __CPROVER_assume( d_brake == speed_tracking___d_brake);
  __CPROVER_assume( throttle == speed_tracking___t1);
  /* 
   * preconditions for the top level block
   */

  __CPROVER_assume( ACC_switch == 1);
  __CPROVER_assume( (v_ref >= 0.0) && (v_ref <= 50.0));
  __CPROVER_assume( (v_acc >= 0.0) && (v_acc <= 50.0));
  __CPROVER_assume( (d_lead > 0.0));
  __CPROVER_assume( 0 <= v_acc && v_acc <= 50);
  __CPROVER_assume( 0 <= v_lead && v_lead <= 50);
  __CPROVER_assume( 0 <= d_lead && d_lead <= 1000);
  __CPROVER_assume( 0 <= v_ref && v_ref <= 50);
  __CPROVER_assume( 0 <= ACC_switch && ACC_switch <= 1);
  /* 
   * assumptions for all preconditions apart from the analyzed block instance
   */

  __CPROVER_assume( (speed_tracking___v_acc > 0.0) && (speed_tracking___v_acc < 50.0));
  __CPROVER_assume( speed_tracking___v_set > 0.0 && speed_tracking___v_set < 50.0);
  __CPROVER_assume( (speed_tracking___dLead >= 0.0) && (speed_tracking___dSafe > 0.0) && (speed_tracking___dLead < 300.0));
  /* 
   * assumptions for all postconditions apart from the analyzed block instance
   */

  __CPROVER_assume( 0 <= speed_tracking___d_brake && speed_tracking___d_brake <= 140);
  
  /* 
   * preconditions checks for the current block instance
   */

  if ( (!(speed_setpoint___ACC_switch == 1U)) ) 
  {
    blockInstance__speed_setpoint__cond__ACC_on:

    0;
  }
  if ( (!((speed_setpoint___v_ref >= 0.0) && (speed_setpoint___v_ref <= 50.0))) ) 
  {
    blockInstance__speed_setpoint__cond__v_ref_positive:

    0;
  }
  if ( (!((speed_setpoint___v_acc >= 0.0) && (speed_setpoint___v_acc <= 50.0))) ) 
  {
    blockInstance__speed_setpoint__cond__v_acc_positive:

    0;
  }
  if ( (!((speed_setpoint___v_lead >= 0.0) && (speed_setpoint___v_lead <= 50.0))) ) 
  {
    blockInstance__speed_setpoint__cond__v_lead_positive:

    0;
  }
  if ( (!((speed_setpoint___d_lead >= 0.0) && (speed_setpoint___d_lead < 1000.0))) ) 
  {
    blockInstance__speed_setpoint__cond__d_lead_positive:

    0;
  }
  if ( (!(0 <= speed_setpoint___v_acc && speed_setpoint___v_acc <= 50)) ) 
  {
    blockInstance__speed_setpoint__cond__v_acc_constraint_0_v_acc:

    0;
  }
  if ( (!(0 <= speed_setpoint___v_lead && speed_setpoint___v_lead <= 50)) ) 
  {
    blockInstance__speed_setpoint__cond__v_lead_constraint_0_v_lead:

    0;
  }
  if ( (!(0 <= speed_setpoint___v_ref && speed_setpoint___v_ref <= 50)) ) 
  {
    blockInstance__speed_setpoint__cond__v_ref_constraint_0_v_ref:

    0;
  }
  if ( (!(0 <= speed_setpoint___d_lead && speed_setpoint___d_lead <= 1000)) ) 
  {
    blockInstance__speed_setpoint__cond__d_lead_constraint_0_d_lead:

    0;
  }
  if ( (!(0 <= speed_setpoint___ACC_switch && speed_setpoint___ACC_switch <= 1)) ) 
  {
    blockInstance__speed_setpoint__cond__ACC_switch_constraint_0_ACC_switch:

    0;
  }
  
  /* 
   * postconditions checks for the current block instance
   */

  if ( !(!(((speed_setpoint___d_lead > 300.0) && (speed_setpoint___d_lead < 1000.0))) || (speed_setpoint___v_ref == speed_setpoint___v_set)) ) 
  {
    blockInstance__speed_setpoint__cond__No_leading_vehicle:

    0;
  }
  if ( !(!(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_acc)) ) 
  {
    blockInstance__speed_setpoint__cond__vehicle_too_close:

    0;
  }
  if ( !(!(((speed_setpoint___d_lead > speed_setpoint___d_safe_new) && (speed_setpoint___d_lead < 300))) || (speed_setpoint___v_ref == speed_setpoint___v_set)) ) 
  {
    blockInstance__speed_setpoint__cond__vehicle_in_long_front:

    0;
  }
  if ( !(!(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_ref)) ) 
  {
    blockInstance__speed_setpoint__cond__user_speed_override:

    0;
  }
  if ( !(0 <= speed_setpoint___v_set && speed_setpoint___v_set <= 50) ) 
  {
    blockInstance__speed_setpoint__cond__v_set_constraint_0_v_set:

    0;
  }
  if ( !(0 <= speed_setpoint___d_safe_new && speed_setpoint___d_safe_new <= 1000) ) 
  {
    blockInstance__speed_setpoint__cond__d_safe_new_constraint_0_d_safe_new:

    0;
  }
  
  
}

void  analysisHarness_architecture_validation_acc_control_0_entryFor__DEEP_acc_control_acc_speed_trackingInterface_speed_tracking(void) 
{
  
  /* 
   * time variables for 'sim-only' blocks
   */

  double __simTime;
  double ___tmpVar_9;
  __simTime = ___tmpVar_9;
  __CPROVER_assume( (__simTime >= 0 && __simTime <= 5));
  
  
  double __simTimeIncr;
  double ___tmpVar_19;
  __simTimeIncr = ___tmpVar_19;
  __CPROVER_assume( (__simTimeIncr >= 0 && __simTimeIncr <= 1));
  
  
  uint64_t __simStep;
  ___SimulationRuntime_initTimeVars(__simTime, __simTimeIncr);
  
  /* 
   * variables for ports of the top analyzed composite component
   */

  uint8_t ACC_switch;
  double brake;
  double d_brake;
  double d_lead;
  double d_safe_new;
  double throttle;
  double v_acc;
  double v_lead;
  double v_ref;
  /* 
   * variables for parameters of the top analyzed composite component
   */

  double ___simIncr;
  /* 
   * variables for ports of all block instances
   */

  uint8_t speed_setpoint___ACC_switch;
  double speed_setpoint___d_lead;
  double speed_setpoint___d_safe_new;
  double speed_setpoint___v_acc;
  double speed_setpoint___v_lead;
  double speed_setpoint___v_ref;
  double speed_setpoint___v_set;
  double speed_tracking___b1;
  double speed_tracking___dLead;
  double speed_tracking___dSafe;
  double speed_tracking___d_brake;
  double speed_tracking___t1;
  double speed_tracking___v_acc;
  double speed_tracking___v_set;
  /* 
   * variables for parameters of all block instances
   */

  /* 
   * ports wiring for deeper connections
   */

  /* 
   * parameters wiring for deeper connections
   */

  /* 
   * ports wiring for connections in the analyzed composite component
   */

  __CPROVER_assume( speed_setpoint___ACC_switch == ACC_switch);
  __CPROVER_assume( speed_setpoint___v_acc == v_acc);
  __CPROVER_assume( speed_setpoint___v_lead == v_lead);
  __CPROVER_assume( speed_setpoint___v_ref == v_ref);
  __CPROVER_assume( speed_setpoint___d_lead == d_lead);
  __CPROVER_assume( speed_tracking___dLead == d_lead);
  __CPROVER_assume( speed_tracking___v_acc == v_acc);
  __CPROVER_assume( speed_tracking___dSafe == speed_setpoint___d_safe_new);
  __CPROVER_assume( speed_tracking___v_set == speed_setpoint___v_set);
  __CPROVER_assume( d_safe_new == speed_setpoint___d_safe_new);
  __CPROVER_assume( brake == speed_tracking___b1);
  __CPROVER_assume( d_brake == speed_tracking___d_brake);
  __CPROVER_assume( throttle == speed_tracking___t1);
  /* 
   * preconditions for the top level block
   */

  __CPROVER_assume( ACC_switch == 1);
  __CPROVER_assume( (v_ref >= 0.0) && (v_ref <= 50.0));
  __CPROVER_assume( (v_acc >= 0.0) && (v_acc <= 50.0));
  __CPROVER_assume( (d_lead > 0.0));
  __CPROVER_assume( 0 <= v_acc && v_acc <= 50);
  __CPROVER_assume( 0 <= v_lead && v_lead <= 50);
  __CPROVER_assume( 0 <= d_lead && d_lead <= 1000);
  __CPROVER_assume( 0 <= v_ref && v_ref <= 50);
  __CPROVER_assume( 0 <= ACC_switch && ACC_switch <= 1);
  /* 
   * assumptions for all preconditions apart from the analyzed block instance
   */

  __CPROVER_assume( speed_setpoint___ACC_switch == 1U);
  __CPROVER_assume( (speed_setpoint___v_ref >= 0.0) && (speed_setpoint___v_ref <= 50.0));
  __CPROVER_assume( (speed_setpoint___v_acc >= 0.0) && (speed_setpoint___v_acc <= 50.0));
  __CPROVER_assume( (speed_setpoint___v_lead >= 0.0) && (speed_setpoint___v_lead <= 50.0));
  __CPROVER_assume( (speed_setpoint___d_lead >= 0.0) && (speed_setpoint___d_lead < 1000.0));
  __CPROVER_assume( 0 <= speed_setpoint___v_acc && speed_setpoint___v_acc <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___v_lead && speed_setpoint___v_lead <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___v_ref && speed_setpoint___v_ref <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___d_lead && speed_setpoint___d_lead <= 1000);
  __CPROVER_assume( 0 <= speed_setpoint___ACC_switch && speed_setpoint___ACC_switch <= 1);
  /* 
   * assumptions for all postconditions apart from the analyzed block instance
   */

  __CPROVER_assume( !(((speed_setpoint___d_lead > 300.0) && (speed_setpoint___d_lead < 1000.0))) || (speed_setpoint___v_ref == speed_setpoint___v_set));
  __CPROVER_assume( !(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_acc));
  __CPROVER_assume( !(((speed_setpoint___d_lead > speed_setpoint___d_safe_new) && (speed_setpoint___d_lead < 300))) || (speed_setpoint___v_ref == speed_setpoint___v_set));
  __CPROVER_assume( !(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_ref));
  __CPROVER_assume( 0 <= speed_setpoint___v_set && speed_setpoint___v_set <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___d_safe_new && speed_setpoint___d_safe_new <= 1000);
  
  /* 
   * preconditions checks for the current block instance
   */

  if ( (!((speed_tracking___v_acc > 0.0) && (speed_tracking___v_acc < 50.0))) ) 
  {
    blockInstance__speed_tracking__cond__valid_v_acc:

    0;
  }
  if ( (!(speed_tracking___v_set > 0.0 && speed_tracking___v_set < 50.0)) ) 
  {
    blockInstance__speed_tracking__cond__valid_v_set:

    0;
  }
  if ( (!((speed_tracking___dLead >= 0.0) && (speed_tracking___dSafe > 0.0) && (speed_tracking___dLead < 300.0))) ) 
  {
    blockInstance__speed_tracking__cond__valid_distances:

    0;
  }
  
  /* 
   * postconditions checks for the current block instance
   */

  if ( !(0 <= speed_tracking___d_brake && speed_tracking___d_brake <= 140) ) 
  {
    blockInstance__speed_tracking__cond__d_brake_constraint_0_d_brake:

    0;
  }
  
  
}

void  analysisHarness_architecture_validation_acc_control_0_entryFor__DEEP_acc_control(void) 
{
  
  /* 
   * time variables for 'sim-only' blocks
   */

  double __simTime;
  double ___tmpVar_9;
  __simTime = ___tmpVar_9;
  __CPROVER_assume( (__simTime >= 0 && __simTime <= 5));
  
  
  double __simTimeIncr;
  double ___tmpVar_19;
  __simTimeIncr = ___tmpVar_19;
  __CPROVER_assume( (__simTimeIncr >= 0 && __simTimeIncr <= 1));
  
  
  uint64_t __simStep;
  ___SimulationRuntime_initTimeVars(__simTime, __simTimeIncr);
  
  /* 
   * variables for ports of the top analyzed composite component
   */

  uint8_t ACC_switch;
  double brake;
  double d_brake;
  double d_lead;
  double d_safe_new;
  double throttle;
  double v_acc;
  double v_lead;
  double v_ref;
  /* 
   * variables for parameters of the top analyzed composite component
   */

  double ___simIncr;
  /* 
   * variables for ports of all block instances
   */

  uint8_t speed_setpoint___ACC_switch;
  double speed_setpoint___d_lead;
  double speed_setpoint___d_safe_new;
  double speed_setpoint___v_acc;
  double speed_setpoint___v_lead;
  double speed_setpoint___v_ref;
  double speed_setpoint___v_set;
  double speed_tracking___b1;
  double speed_tracking___dLead;
  double speed_tracking___dSafe;
  double speed_tracking___d_brake;
  double speed_tracking___t1;
  double speed_tracking___v_acc;
  double speed_tracking___v_set;
  /* 
   * variables for parameters of all block instances
   */

  /* 
   * ports wiring for deeper connections
   */

  /* 
   * parameters wiring for deeper connections
   */

  /* 
   * ports wiring for connections in the analyzed composite component
   */

  __CPROVER_assume( speed_setpoint___ACC_switch == ACC_switch);
  __CPROVER_assume( speed_setpoint___v_acc == v_acc);
  __CPROVER_assume( speed_setpoint___v_lead == v_lead);
  __CPROVER_assume( speed_setpoint___v_ref == v_ref);
  __CPROVER_assume( speed_setpoint___d_lead == d_lead);
  __CPROVER_assume( speed_tracking___dLead == d_lead);
  __CPROVER_assume( speed_tracking___v_acc == v_acc);
  __CPROVER_assume( speed_tracking___dSafe == speed_setpoint___d_safe_new);
  __CPROVER_assume( speed_tracking___v_set == speed_setpoint___v_set);
  __CPROVER_assume( d_safe_new == speed_setpoint___d_safe_new);
  __CPROVER_assume( brake == speed_tracking___b1);
  __CPROVER_assume( d_brake == speed_tracking___d_brake);
  __CPROVER_assume( throttle == speed_tracking___t1);
  /* 
   * preconditions for the top level block
   */

  __CPROVER_assume( ACC_switch == 1);
  __CPROVER_assume( (v_ref >= 0.0) && (v_ref <= 50.0));
  __CPROVER_assume( (v_acc >= 0.0) && (v_acc <= 50.0));
  __CPROVER_assume( (d_lead > 0.0));
  __CPROVER_assume( 0 <= v_acc && v_acc <= 50);
  __CPROVER_assume( 0 <= v_lead && v_lead <= 50);
  __CPROVER_assume( 0 <= d_lead && d_lead <= 1000);
  __CPROVER_assume( 0 <= v_ref && v_ref <= 50);
  __CPROVER_assume( 0 <= ACC_switch && ACC_switch <= 1);
  /* 
   * assumptions for all preconditions apart from the analyzed block instance
   */

  __CPROVER_assume( speed_setpoint___ACC_switch == 1U);
  __CPROVER_assume( (speed_setpoint___v_ref >= 0.0) && (speed_setpoint___v_ref <= 50.0));
  __CPROVER_assume( (speed_setpoint___v_acc >= 0.0) && (speed_setpoint___v_acc <= 50.0));
  __CPROVER_assume( (speed_setpoint___v_lead >= 0.0) && (speed_setpoint___v_lead <= 50.0));
  __CPROVER_assume( (speed_setpoint___d_lead >= 0.0) && (speed_setpoint___d_lead < 1000.0));
  __CPROVER_assume( 0 <= speed_setpoint___v_acc && speed_setpoint___v_acc <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___v_lead && speed_setpoint___v_lead <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___v_ref && speed_setpoint___v_ref <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___d_lead && speed_setpoint___d_lead <= 1000);
  __CPROVER_assume( 0 <= speed_setpoint___ACC_switch && speed_setpoint___ACC_switch <= 1);
  __CPROVER_assume( (speed_tracking___v_acc > 0.0) && (speed_tracking___v_acc < 50.0));
  __CPROVER_assume( speed_tracking___v_set > 0.0 && speed_tracking___v_set < 50.0);
  __CPROVER_assume( (speed_tracking___dLead >= 0.0) && (speed_tracking___dSafe > 0.0) && (speed_tracking___dLead < 300.0));
  /* 
   * assumptions for all postconditions apart from the analyzed block instance
   */

  __CPROVER_assume( !(((speed_setpoint___d_lead > 300.0) && (speed_setpoint___d_lead < 1000.0))) || (speed_setpoint___v_ref == speed_setpoint___v_set));
  __CPROVER_assume( !(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_acc));
  __CPROVER_assume( !(((speed_setpoint___d_lead > speed_setpoint___d_safe_new) && (speed_setpoint___d_lead < 300))) || (speed_setpoint___v_ref == speed_setpoint___v_set));
  __CPROVER_assume( !(((speed_setpoint___v_lead < speed_setpoint___v_acc) && (speed_setpoint___d_lead < speed_setpoint___d_safe_new))) || (speed_setpoint___v_set <= speed_setpoint___v_ref));
  __CPROVER_assume( 0 <= speed_setpoint___v_set && speed_setpoint___v_set <= 50);
  __CPROVER_assume( 0 <= speed_setpoint___d_safe_new && speed_setpoint___d_safe_new <= 1000);
  __CPROVER_assume( 0 <= speed_tracking___d_brake && speed_tracking___d_brake <= 140);
  
  /* 
   * postconditions checks for the top block
   */

  if ( !(!(((d_lead < d_brake) && (d_safe_new < d_brake))) || brake > 0.0) ) 
  {
    postCond__Assert_braking:

    0;
  }
  
}

