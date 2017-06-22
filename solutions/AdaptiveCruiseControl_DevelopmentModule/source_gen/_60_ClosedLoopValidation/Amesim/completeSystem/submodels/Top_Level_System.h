#ifndef TOP_LEVEL_SYSTEM_H
#define TOP_LEVEL_SYSTEM_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0

#include "Composite_Systems.h"



#ifdef __cplusplus
extern "C" {
#endif

typedef void ((*(Top_Level_System____acc_variant_selectorInterface_executeFunctionTypedef))(void *,double ,double ,double ,double ,double ,double ,double *,double *,double *));
typedef void ((*(Top_Level_System____acc_variant_selectorInterface_updateFunctionTypedef))(void *,double ,double ,double ,double ,double ,double ));

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
