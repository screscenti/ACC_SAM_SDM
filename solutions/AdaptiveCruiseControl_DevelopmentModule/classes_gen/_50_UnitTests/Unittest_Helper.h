#ifndef UNITTEST_HELPER_H
#define UNITTEST_HELPER_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t Unittest_Helper_test_state;
#define UNITTEST_HELPER_ERROR_TEST_NOT_FOUND (255)
#define UNITTEST_HELPER_TEST_STATE_NOT_RUN (0)
#define UNITTEST_HELPER_TEST_STATE_SUCCESSFUL (1)
#define UNITTEST_HELPER_TEST_STATE_ERROR (2)
#define UNITTEST_HELPER_TEST_STATE_FAILURE (3)
typedef struct Unittest_Helper_Test Unittest_Helper_Test_t;
struct Unittest_Helper_Test {
  char *name;
  uint8_t assertions;
  char *classname;
  Unittest_Helper_test_state state;
};

typedef struct Unittest_Helper_TestSuite Unittest_Helper_TestSuite_t;
struct Unittest_Helper_TestSuite {
  uint8_t test_count;
  uint8_t failed_count;
  uint8_t error_count;
  char *name;
  uint8_t ((*(runner))(uint8_t ));
  void ((*(init))());
  Unittest_Helper_Test_t tests[256];
};

void  Unittest_Helper_init_testsuite(Unittest_Helper_TestSuite_t **suites, uint32_t suiteCount);

void  Unittest_Helper_log_assert_range_int(char const  *testName, char const  *expected, int64_t actual, char const  *nodeId, char const  *modelId);

void  Unittest_Helper_log_assert_fail_range_int(char const  *testName, char const  *expected, int64_t actual, char const  *nodeId, char const  *modelId, char const  *msg);

void  Unittest_Helper_log_assert_int(char const  *testName, int64_t expected, int64_t actual, char const  *nodeId, char const  *modelId);

void  Unittest_Helper_log_assert_fail_int(char const  *testName, int64_t expected, int64_t actual, char const  *nodeId, char const  *modelId, char const  *msg);

void  Unittest_Helper_log_assert_double(char const  *testName, double expected, double actual, char const  *nodeId, char const  *modelId);

void  Unittest_Helper_log_assert_fail_double(char const  *testName, double expected, double actual, char const  *nodeId, char const  *modelId, char const  *msg);

void  Unittest_Helper_log_assert_bool(char const  *testName, bool expected, bool actual, char const  *nodeId, char const  *modelId);

void  Unittest_Helper_log_assert_fail_bool(char const  *testName, bool expected, bool actual, char const  *nodeId, char const  *modelId, char const  *msg);

int32_t  Unittest_Helper_finish_testsuite(Unittest_Helper_TestSuite_t **suites, uint32_t suiteCount);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
