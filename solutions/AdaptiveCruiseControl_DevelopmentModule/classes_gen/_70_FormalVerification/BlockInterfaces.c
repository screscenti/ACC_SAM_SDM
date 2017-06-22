#include "BlockInterfaces.h"


#include "CommonUnits.h"
#include <stdio.h>
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include "UnitTestMessages.h"













































void  BlockInterfaces___testhelper____Test_ssd_safe_distance_TableUT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures) 
{
  void *___id = NULL;
  double v_acc_demo_hatchback;
  double v_lead;
  double d_safe;
  /* 
   * Abstract Block; use passed in stuff
   */

  ___id = ___data;
  
  /* 
   * Test
   */

  v_acc_demo_hatchback = 20;
  v_lead = 18;
  {
  }
  (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_executeFunctionTypedef )(___blockExecIfFn)))(___id,v_acc_demo_hatchback,v_lead,&d_safe);
  if ( ___blockUpdateIfFn != NULL ) 
  {
    (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_updateFunctionTypedef )(___blockUpdateIfFn)))(___id,v_acc_demo_hatchback,v_lead);
  }
  
  
  
  {
    double ___actual = d_safe;
    uint8_t volatile  const  ___expected = 14;
    
    bool condition = false;
    
    if ( !(___actual == ___expected) ) 
    {
      Unittest_Helper_log_assert_fail_int("", ___expected, ___actual, "3980660603150539564", "r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)", "%d is not equal to %d");
      
      (*___failures)++;;
      UnitTestMessages____testing_FAILED_DOUBLE_DOUBLE(0, ___actual, "assert-equals", ___expected, "BlockInterfaces:Test_ssd_safe_distance_TableUT?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#3980660603150539564");
      
    } else
    {
      Unittest_Helper_log_assert_int("", ___expected, ___actual, "3980660603150539564", "r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)");
    }
  }
  
  /* 
   * Test
   */

  v_acc_demo_hatchback = 21.7;
  v_lead = 16.2;
  {
  }
  (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_executeFunctionTypedef )(___blockExecIfFn)))(___id,v_acc_demo_hatchback,v_lead,&d_safe);
  if ( ___blockUpdateIfFn != NULL ) 
  {
    (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_updateFunctionTypedef )(___blockUpdateIfFn)))(___id,v_acc_demo_hatchback,v_lead);
  }
  
  
  
  {
    double ___actual = d_safe;
    uint8_t volatile  const  ___expected = 20;
    
    bool condition = false;
    
    if ( !(___actual == ___expected) ) 
    {
      Unittest_Helper_log_assert_fail_int("", ___expected, ___actual, "3980660603150545985", "r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)", "%d is not equal to %d");
      
      (*___failures)++;;
      UnitTestMessages____testing_FAILED_DOUBLE_DOUBLE(1, ___actual, "assert-equals", ___expected, "BlockInterfaces:Test_ssd_safe_distance_TableUT:1?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#3980660603150545985");
      
    } else
    {
      Unittest_Helper_log_assert_int("", ___expected, ___actual, "3980660603150545985", "r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)");
    }
  }
  
  
  
}

void  BlockInterfaces___testhelper____Test_ssd_safe_distance_cCode_UT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures) 
{
  void *___id = NULL;
  double v_acc_demo_hatchback;
  double v_lead;
  double d_safe;
  /* 
   * Abstract Block; use passed in stuff
   */

  ___id = ___data;
  
  double __pv_safe_dis_handler;
  
  /* 
   * Test
   */

  v_acc_demo_hatchback = 28;
  v_lead = 29;
  {
  }
  (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_executeFunctionTypedef )(___blockExecIfFn)))(___id,v_acc_demo_hatchback,v_lead,&d_safe);
  if ( ___blockUpdateIfFn != NULL ) 
  {
    (*((BlockInterfaces____ssd_safe_distance_computationInterface_hatchback_updateFunctionTypedef )(___blockUpdateIfFn)))(___id,v_acc_demo_hatchback,v_lead);
  }
  
  
  
  __pv_safe_dis_handler = d_safe;
  
  
  if ( (__pv_safe_dis_handler) >= 10 ) 
  {
    printf("Safe distance achieved");
  }
  
  
  
}

