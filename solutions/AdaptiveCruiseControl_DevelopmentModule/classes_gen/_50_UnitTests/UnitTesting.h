#ifndef UNITTESTING_H
#define UNITTESTING_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include "BlockInterfaces.h"

#include "ACC_SafeDistance_Atomic.h"

#include "Unittest_Helper_NonIsolated.h"



#ifdef __cplusplus
extern "C" {
#endif

int32_t  UnitTesting_main(int32_t argc, char **argv);

int32_t  UnitTesting_Test_ssd_safe_distance_TableUT_testCase_0(void);

int32_t  UnitTesting_Test_ssd_safe_distance_cCode_UT_testCase_1(void);

int32_t  UnitTesting_Implementation_UT_testCase_2(void);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
