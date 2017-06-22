#include "analysisHarness_ACC_Analysis_ssd_safe_distance_computation_0.h"


#include "___SimulationRuntime.h"
#include "CommonUnits.h"
#include "SIUnits.h"
#include <math.h>
#include "Top_Level_System.h"
#include "Unittest_Helper.h"
#include "ACC_SafeDistance_Atomic.h"
#include "___BlockMessages.h"



void  analysisHarness_ACC_Analysis_ssd_safe_distance_computation_0_entryFor_ssd_safe_distance_computation(void) 
{
  /* 
   * input and output ports
   */

  double v_acc_demo_hatchback;
  double v_lead;
  double d_safe;
  
  /* 
   * history of input and output ports - we need it here since the history update in execute() hapens before we check the property
   */

  
  
  /* 
   * initialize the history
   */

  
  void *___data = NULL;
  
  struct ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data instance;
  
  double ___tmpVar_34;
  instance.T_SAFE = ___tmpVar_34;
  
  
  
  
  ___data = &instance;
  
  
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(___data);
  
  /* 
   * main loop
   */

  for ( uint64_t ___crtStep = 0 ; ___crtStep < 1; ___crtStep++ )
  {
    
    /* 
     * initialize inputs
     */

    double ___tmpVar_68;
    v_acc_demo_hatchback = ___tmpVar_68;
    
    double ___tmpVar_70;
    v_lead = ___tmpVar_70;
    
    __CPROVER_assume( v_acc_demo_hatchback > v_lead + 2);
    
    
    /* 
     * execute the block
     */

    ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(___data,v_acc_demo_hatchback,v_lead,&d_safe);
    
    /* 
     * update the block state
     */

    
    
    /* 
     * generate labels for postconditions
     */

    if ( !(d_safe >= COMMONUNITS_cm_to_m_double(150)) ) 
    {
      postCond__valid_d_safe:

      0;
    }
    if ( !(!((v_acc_demo_hatchback > (v_lead + 2))) || d_safe > 0) ) 
    {
      postCond__temporalCondition:

      0;
    }
    
    
    
    
    /* 
     * update history
     */

    
  }
  
  
}

