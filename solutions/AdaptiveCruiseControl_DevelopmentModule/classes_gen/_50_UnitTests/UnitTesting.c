#include "UnitTesting.h"


#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include "UnitTestMessages.h"

static void  UnitTesting___testhelper____Implementation_UT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures);

static uint8_t  UnitTesting_interfaceTesting_run_test(uint8_t test);

static void  UnitTesting_closure_a5a5(void);

static Unittest_Helper_TestSuite_t UnitTesting_interfaceTesting_testsuite = {
  3,  0,  0,  "_50_UnitTests.interfaceTesting",  &UnitTesting_interfaceTesting_run_test,  &UnitTesting_closure_a5a5,  {
    {
      "Test_ssd_safe_distance_TableUT_testCase_0",      0,      "Test_ssd_safe_distance_TableUT_testCase_0",      UNITTEST_HELPER_TEST_STATE_NOT_RUN    },    {
      "Test_ssd_safe_distance_cCode_UT_testCase_1",      0,      "Test_ssd_safe_distance_cCode_UT_testCase_1",      UNITTEST_HELPER_TEST_STATE_NOT_RUN    },    {
      "Implementation_UT_testCase_2",      0,      "Implementation_UT_testCase_2",      UNITTEST_HELPER_TEST_STATE_NOT_RUN    }  }};

static void  UnitTesting___testhelper____Implementation_UT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures) 
{
  void *___id;
  double v_acc_demo;
  double v_lead;
  double d_safe;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t instance = {
    0  };
  ___id = NULL;
  /* 
   * Concrete Block: create and init instance
   */

  instance.T_SAFE = 2;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(&instance);
  ___id = &instance;
  /* 
   * Test
   */

  v_acc_demo = 28;
  v_lead = 27;
  {
  }
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(___id, v_acc_demo, v_lead, &d_safe);
  
  
  
  {
    double ___actual;
    uint8_t volatile  const  ___expected = 9;
    bool condition;
    ___actual = d_safe;
    
    condition = false;
    
    if ( !(___actual == ___expected) ) 
    {
      Unittest_Helper_log_assert_fail_int("", ___expected, ___actual, "3980660603152320167", "r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)", "%d is not equal to %d");
      
      (*___failures)++;;
      UnitTestMessages____testing_FAILED_DOUBLE_DOUBLE(0, ___actual, "assert-equals", ___expected, "UnitTesting:Implementation_UT?r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)#3980660603152320167");
    } else
    {
      Unittest_Helper_log_assert_int("", ___expected, ___actual, "3980660603152320167", "r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)");
    }
  }
  /* 
   * Test
   */

  v_acc_demo = 28;
  v_lead = 29;
  {
  }
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(___id, v_acc_demo, v_lead, &d_safe);
  
  
  
  {
    double ___actual;
    ___actual = d_safe;
    if ( !((___actual >= ((2) - 5) && ___actual <= ((2) + 5))) ) 
    {
      (*___failures)++;;
      Unittest_Helper_log_assert_fail_range_int("", "[((2) - 5)..((2) + 5)]", ___actual, "3980660603152326252", "r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)", "actual value is out of range");
    } else
    {
      Unittest_Helper_log_assert_range_int("", "[((2) - 5)..((2) + 5)]", ___actual, "3980660603152326252", "r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)");
    }
  }
  
  
}

int32_t  main(int32_t argc, char **argv) 
{
  struct Unittest_Helper_TestSuite *(all_suites[1]) = {
    &UnitTesting_interfaceTesting_testsuite  };
  uint32_t suites_count;
  suites_count = 1;
  Unittest_Helper_init_testsuite(all_suites, suites_count);
  Unittest_Helper_NonIsolated_run_tests(all_suites, suites_count);
  
  return Unittest_Helper_finish_testsuite(all_suites, suites_count);
}

int32_t  UnitTesting_Test_ssd_safe_distance_TableUT_testCase_0(void) 
{
  int32_t ___failuresVal;
  int32_t *___failures;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t instance;
  ___failuresVal = 0;
  ___failures = &___failuresVal;
  UnitTestMessages____testing_runningTest("BlockInterfaces:Test_ssd_safe_distance_TableUT?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#3980660603150528821");
  instance.T_SAFE = 2;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(&instance);
  BlockInterfaces___testhelper____Test_ssd_safe_distance_TableUT_unittest(&instance, &ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute, NULL, ___failures);
  
  return ___failuresVal;
}

int32_t  UnitTesting_Test_ssd_safe_distance_cCode_UT_testCase_1(void) 
{
  int32_t ___failuresVal;
  int32_t *___failures;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t instance;
  ___failuresVal = 0;
  ___failures = &___failuresVal;
  UnitTestMessages____testing_runningTest("BlockInterfaces:Test_ssd_safe_distance_cCode_UT?r:f599b715-12fa-44c1-a288-a72fd0bffe50(_30_Architecture)#6427938858666183513");
  instance.T_SAFE = 2;
  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(&instance);
  BlockInterfaces___testhelper____Test_ssd_safe_distance_cCode_UT_unittest(&instance, &ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute, NULL, ___failures);
  
  return ___failuresVal;
}

int32_t  UnitTesting_Implementation_UT_testCase_2(void) 
{
  int32_t ___failuresVal;
  int32_t *___failures;
  ___failuresVal = 0;
  ___failures = &___failuresVal;
  UnitTestMessages____testing_runningTest("UnitTesting:Implementation_UT?r:221d17b6-0d30-436d-93ec-0fdb6b1be14f(_50_UnitTests)#3980660603152168580");
  UnitTesting___testhelper____Implementation_UT_unittest(NULL, NULL, NULL, ___failures);
  return ___failuresVal;
}

static uint8_t  UnitTesting_interfaceTesting_run_test(uint8_t test) 
{
  switch (test)
  {
    case 0: {
      return UnitTesting_Test_ssd_safe_distance_TableUT_testCase_0();
      break;
    }
    case 1: {
      return UnitTesting_Test_ssd_safe_distance_cCode_UT_testCase_1();
      break;
    }
    case 2: {
      return UnitTesting_Implementation_UT_testCase_2();
      break;
    }
  }

  return UNITTEST_HELPER_ERROR_TEST_NOT_FOUND;
}

static void  UnitTesting_closure_a5a5(void) 
{
}

