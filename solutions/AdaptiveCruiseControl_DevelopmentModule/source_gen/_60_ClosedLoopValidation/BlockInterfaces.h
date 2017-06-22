#ifndef BLOCKINTERFACES_H
#define BLOCKINTERFACES_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include "Cla_Discrete.h"

#include "Unittest_Helper_NonIsolated.h"



#ifdef __cplusplus
extern "C" {
#endif

/* 
 * This computes the safe distance between the ACC and leading vehicle
 */
typedef void ((*(BlockInterfaces____ssd_safe_distance_computationInterface_executeFunctionTypedef))(void *,double ,double ,double *));
/* 
 * This computes the safe distance between the ACC and leading vehicle
 */
typedef void ((*(BlockInterfaces____ssd_safe_distance_computationInterface_updateFunctionTypedef))(void *,double ,double ));
/* 
 * This computes which mode the ACC vehicle is supposed to be in - Distrance Follwing mode or
 * cruise mode
 */
typedef void ((*(BlockInterfaces____ssd_mode_computeInterface_executeFunctionTypedef))(void *,double ,double ,double *));
/* 
 * This computes which mode the ACC vehicle is supposed to be in - Distrance Follwing mode or
 * cruise mode
 */
typedef void ((*(BlockInterfaces____ssd_mode_computeInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____ssd_distance_errorInterface_executeFunctionTypedef))(void *,double ,double ,double *));
typedef void ((*(BlockInterfaces____ssd_distance_errorInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____ssd_cruise_modeInterface_executeFunctionTypedef))(void *,double ,double *));
typedef void ((*(BlockInterfaces____ssd_cruise_modeInterface_updateFunctionTypedef))(void *,double ));
typedef void ((*(BlockInterfaces____ssd_setpointInterface_executeFunctionTypedef))(void *,double ,double ,double ,double *));
typedef void ((*(BlockInterfaces____ssd_setpointInterface_updateFunctionTypedef))(void *,double ,double ,double ));
typedef void ((*(BlockInterfaces____ssd_update_pidInterface_executeFunctionTypedef))(void *,double ,double ,double *));
typedef void ((*(BlockInterfaces____ssd_update_pidInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____ssd_distance_following_modeInterface_executeFunctionTypedef))(void *,double ,double ,double ,double *));
typedef void ((*(BlockInterfaces____ssd_distance_following_modeInterface_updateFunctionTypedef))(void *,double ,double ,double ));
typedef void ((*(BlockInterfaces____ssd_setpoint_computeInterface_executeFunctionTypedef))(void *,double ,double ,double ,double ,double ,double *));
typedef void ((*(BlockInterfaces____ssd_setpoint_computeInterface_updateFunctionTypedef))(void *,double ,double ,double ,double ,double ));
/* 
 * This sets the speed - it analyzes all the sensor inouts and makes the speed decision
 */
typedef void ((*(BlockInterfaces____acc_speed_setpointInterface_executeFunctionTypedef))(void *,uint8_t ,double ,double ,double ,double ,double *,double *));
/* 
 * This sets the speed - it analyzes all the sensor inouts and makes the speed decision
 */
typedef void ((*(BlockInterfaces____acc_speed_setpointInterface_updateFunctionTypedef))(void *,uint8_t ,double ,double ,double ,double ));
typedef void ((*(BlockInterfaces____brakemode_errorInterface_executeFunctionTypedef))(void *,double ,double ,double *));
typedef void ((*(BlockInterfaces____brakemode_errorInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____throttlemode_brakeInterface_executeFunctionTypedef))(void *,double ,double *));
typedef void ((*(BlockInterfaces____throttlemode_brakeInterface_updateFunctionTypedef))(void *,double ));
typedef void ((*(BlockInterfaces____throttlemode_errorInterface_executeFunctionTypedef))(void *,double ,double ,double *));
typedef void ((*(BlockInterfaces____throttlemode_errorInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____st_mode_computationInterface_executeFunctionTypedef))(void *,double ,double ,double ,double ,double ,double *));
typedef void ((*(BlockInterfaces____st_mode_computationInterface_updateFunctionTypedef))(void *,double ,double ,double ,double ,double ));
typedef void ((*(BlockInterfaces____brakemode_throttleInterface_executeFunctionTypedef))(void *,double ,double *));
typedef void ((*(BlockInterfaces____brakemode_throttleInterface_updateFunctionTypedef))(void *,double ));
typedef void ((*(BlockInterfaces____st_braking_distanceInterface_executeFunctionTypedef))(void *,double ,double *));
typedef void ((*(BlockInterfaces____st_braking_distanceInterface_updateFunctionTypedef))(void *,double ));
typedef void ((*(BlockInterfaces____st_trackingInterface_executeFunctionTypedef))(void *,double ,double ,double ,double ,double ,double *,double *));
typedef void ((*(BlockInterfaces____st_trackingInterface_updateFunctionTypedef))(void *,double ,double ,double ,double ,double ));
typedef void ((*(BlockInterfaces____brakemodeInterface_executeFunctionTypedef))(void *,double ,double ,double *,double *));
typedef void ((*(BlockInterfaces____brakemodeInterface_updateFunctionTypedef))(void *,double ,double ));
typedef void ((*(BlockInterfaces____throttlemodeInterface_executeFunctionTypedef))(void *,double ,double ,double *,double *));
typedef void ((*(BlockInterfaces____throttlemodeInterface_updateFunctionTypedef))(void *,double ,double ));
/* 
 * This takes the processed speed and anlyzes with the mode and controls the throttle and brake position
 */
typedef void ((*(BlockInterfaces____acc_speed_trackingInterface_executeFunctionTypedef))(void *,double ,double ,double ,double ,double *,double *,double *));
/* 
 * This takes the processed speed and anlyzes with the mode and controls the throttle and brake position
 */
typedef void ((*(BlockInterfaces____acc_speed_trackingInterface_updateFunctionTypedef))(void *,double ,double ,double ,double ));
/* 
 * This takes the processed speed and anlyzes with the mode and controls the throttle and brake position
 */
typedef void ((*(BlockInterfaces____acc_speed_trackingInterface_Sedan_executeFunctionTypedef))(void *,double ,double ,double ,double ,double *,double *,double *));
/* 
 * This takes the processed speed and anlyzes with the mode and controls the throttle and brake position
 */
typedef void ((*(BlockInterfaces____acc_speed_trackingInterface_Sedan_updateFunctionTypedef))(void *,double ,double ,double ,double ));
typedef void ((*(BlockInterfaces____Controller_executeFunctionTypedef))(void *,double ,double *));
typedef void ((*(BlockInterfaces____Controller_updateFunctionTypedef))(void *,double ));
typedef void ((*(BlockInterfaces____acc_controlInterface_new_executeFunctionTypedef))(void *,uint8_t ,double ,double ,double ,double ,double *,double *,double *,double *));
typedef void ((*(BlockInterfaces____acc_controlInterface_new_updateFunctionTypedef))(void *,uint8_t ,double ,double ,double ,double ));
typedef void ((*(BlockInterfaces____prevent_windupInterface_executeFunctionTypedef))(void *,double ,double ,double *));
typedef void ((*(BlockInterfaces____prevent_windupInterface_updateFunctionTypedef))(void *,double ,double ));
void  BlockInterfaces___testhelper____Test_ssd_safe_distance_TableUT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures);

void  BlockInterfaces___testhelper____Test_ssd_safe_distance_cCode_UT_unittest(void *___data, void *___blockExecIfFn, void *___blockUpdateIfFn, int32_t *___failures);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
