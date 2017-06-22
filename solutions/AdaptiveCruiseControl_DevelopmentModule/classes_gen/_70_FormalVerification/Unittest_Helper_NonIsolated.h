#ifndef UNITTEST_HELPER_NONISOLATED_H
#define UNITTEST_HELPER_NONISOLATED_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include "Unittest_Helper.h"



#ifdef __cplusplus
extern "C" {
#endif

void  Unittest_Helper_NonIsolated_run_tests(Unittest_Helper_TestSuite_t *(suites[]), uint32_t suite_count);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
