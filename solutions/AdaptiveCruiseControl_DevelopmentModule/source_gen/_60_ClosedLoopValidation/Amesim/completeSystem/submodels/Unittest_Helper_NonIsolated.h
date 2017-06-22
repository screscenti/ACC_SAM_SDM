#ifndef UNITTEST_HELPER_NONISOLATED_H
#define UNITTEST_HELPER_NONISOLATED_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0

#include "Unittest_Helper.h"



#ifdef __cplusplus
extern "C" {
#endif

void  Unittest_Helper_NonIsolated_run_tests(Unittest_Helper_TestSuite_t **suites, uint32_t suite_count);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
