#ifndef UNITTESTMESSAGES_H
#define UNITTESTMESSAGES_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0



#ifdef __cplusplus
extern "C" {
#endif

void  UnitTestMessages____testing_runningTest(char *loc);

void  UnitTestMessages____testing_FAILED(int8_t testID, char *loc);

void  UnitTestMessages____testing_FAILED_INT(int8_t testID, int32_t act, char *loc);

void  UnitTestMessages____testing_FAILED_INT_STR(int8_t testID, int32_t act, char *exp, char *loc);

void  UnitTestMessages____testing_FAILED_INT_INT(int8_t testID, int32_t act, char *op, int32_t exp, char *loc);

void  UnitTestMessages____testing_FAILED_DOUBLE(int8_t testID, double act, char *loc);

void  UnitTestMessages____testing_FAILED_DOUBLE_STR(int8_t testID, double act, char *exp, char *loc);

void  UnitTestMessages____testing_FAILED_DOUBLE_DOUBLE(int8_t testID, double act, char *op, double exp, char *loc);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
