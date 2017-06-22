#ifndef AMESIM_SUPERCOMPONENTS_H
#define AMESIM_SUPERCOMPONENTS_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

#define AMESIM_SUPERCOMPONENTS______exprsource__HMI_input__desVehSpeed0_execute()(6)
#define AMESIM_SUPERCOMPONENTS______exprsource__HMI_input__vehicle_speed2_execute()(5)
#define AMESIM_SUPERCOMPONENTS______exprsource__chassis_input__driving0_execute()(3)
#define AMESIM_SUPERCOMPONENTS______exprsource__chassis_input__roadProfile2_execute()(2)
#define AMESIM_SUPERCOMPONENTS______exprsource__engine_input__load0_execute()(3)
#define AMESIM_SUPERCOMPONENTS______exprsource__engine_input__speed2_execute()(4)
#define AMESIM_SUPERCOMPONENTS______exprsource__GPS_Distance_Calculator__leadingVehicleDist0_execute()(2)
typedef struct Amesim_Supercomponents____HMI_input_flattened_data Amesim_Supercomponents____HMI_input_flattened_data_t;
struct Amesim_Supercomponents____HMI_input_flattened_data {
  double i__exprsource__HMI_input__vehicle_speed2_res;
  double i__exprsource__HMI_input__desVehSpeed0_res;
  bool __anyPreconditionFailed;
};

typedef struct Amesim_Supercomponents____chassis_input_flattened_data Amesim_Supercomponents____chassis_input_flattened_data_t;
struct Amesim_Supercomponents____chassis_input_flattened_data {
  double i__exprsource__chassis_input__roadProfile2_res;
  double i__exprsource__chassis_input__driving0_res;
  bool __anyPreconditionFailed;
};

typedef struct Amesim_Supercomponents____engine_input_flattened_data Amesim_Supercomponents____engine_input_flattened_data_t;
struct Amesim_Supercomponents____engine_input_flattened_data {
  double i__exprsource__engine_input__speed2_res;
  double i__exprsource__engine_input__load0_res;
  bool __anyPreconditionFailed;
};

typedef struct Amesim_Supercomponents____GPS_Distance_Calculator_flattened_data Amesim_Supercomponents____GPS_Distance_Calculator_flattened_data_t;
struct Amesim_Supercomponents____GPS_Distance_Calculator_flattened_data {
  double i__exprsource__GPS_Distance_Calculator__leadingVehicleDist0_res;
  bool __anyPreconditionFailed;
};

void  Amesim_Supercomponents____HMI_input_flattened_execute(Amesim_Supercomponents____HMI_input_flattened_data_t *___id, double *desVehSpeed, double *vehicle_speed);

void  Amesim_Supercomponents____chassis_input_flattened_execute(Amesim_Supercomponents____chassis_input_flattened_data_t *___id, double *driving, double *roadProfile);

void  Amesim_Supercomponents____engine_input_flattened_execute(Amesim_Supercomponents____engine_input_flattened_data_t *___id, double *load, double *speed);

void  Amesim_Supercomponents____GPS_Distance_Calculator_flattened_execute(Amesim_Supercomponents____GPS_Distance_Calculator_flattened_data_t *___id, double *leadingVehicleDist);

void  Amesim_Supercomponents____Environment_execute(void *___nothing, double *Air_Density, double *Ambient_Temperature, double *Desired_Vehicle_Speed, double *Road_Slope, double *leadingVehPos, double *leadingVehSpeed);

void  Amesim_Supercomponents____HMI_execute(void *___nothing, double DesiredVehicleSpeed, double Vehicle_speed, double *ACCSwitchPos, double *Acceleration_xmd, double *Brake_Command);

void  Amesim_Supercomponents____Chassis_execute(void *___nothing, double brake, double dvng, double road, double *Wheel, double *acc, double *vehiclePos, double *vehicleSpd);

void  Amesim_Supercomponents____Engine_execute(void *___nothing, double accCmd, double load, double speed, double *friction, double *fuel, double *loadCmd, double *torque);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
