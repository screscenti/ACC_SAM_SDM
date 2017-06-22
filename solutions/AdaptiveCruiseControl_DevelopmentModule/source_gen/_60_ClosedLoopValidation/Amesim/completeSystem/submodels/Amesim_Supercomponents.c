#include "Amesim_Supercomponents.h"


#include "Cla_CommonUnits.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"









































































void  Amesim_Supercomponents____HMI_input_flattened_execute(Amesim_Supercomponents____HMI_input_flattened_data_t *___id, double *desVehSpeed, double *vehicle_speed) 
{
  {
    {
      
      
      ___id->i__exprsource__HMI_input__vehicle_speed2_res = AMESIM_SUPERCOMPONENTS______exprsource__HMI_input__vehicle_speed2_execute();
      
      
    }
    {
      
      
      ___id->i__exprsource__HMI_input__desVehSpeed0_res = AMESIM_SUPERCOMPONENTS______exprsource__HMI_input__desVehSpeed0_execute();
      
      
    }
    
    *vehicle_speed = ___id->i__exprsource__HMI_input__vehicle_speed2_res;
    *desVehSpeed = ___id->i__exprsource__HMI_input__desVehSpeed0_res;
  }
  end:

  0;
  
}

void  Amesim_Supercomponents____chassis_input_flattened_execute(Amesim_Supercomponents____chassis_input_flattened_data_t *___id, double *driving, double *roadProfile) 
{
  {
    {
      
      
      ___id->i__exprsource__chassis_input__roadProfile2_res = AMESIM_SUPERCOMPONENTS______exprsource__chassis_input__roadProfile2_execute();
      
      
    }
    {
      
      
      ___id->i__exprsource__chassis_input__driving0_res = AMESIM_SUPERCOMPONENTS______exprsource__chassis_input__driving0_execute();
      
      
    }
    
    *roadProfile = ___id->i__exprsource__chassis_input__roadProfile2_res;
    *driving = ___id->i__exprsource__chassis_input__driving0_res;
  }
  end:

  0;
  
}

void  Amesim_Supercomponents____engine_input_flattened_execute(Amesim_Supercomponents____engine_input_flattened_data_t *___id, double *load, double *speed) 
{
  {
    {
      
      
      ___id->i__exprsource__engine_input__speed2_res = AMESIM_SUPERCOMPONENTS______exprsource__engine_input__speed2_execute();
      
      
    }
    {
      
      
      ___id->i__exprsource__engine_input__load0_res = AMESIM_SUPERCOMPONENTS______exprsource__engine_input__load0_execute();
      
      
    }
    
    *speed = ___id->i__exprsource__engine_input__speed2_res;
    *load = ___id->i__exprsource__engine_input__load0_res;
  }
  end:

  0;
  
}

void  Amesim_Supercomponents____GPS_Distance_Calculator_flattened_execute(Amesim_Supercomponents____GPS_Distance_Calculator_flattened_data_t *___id, double *leadingVehicleDist) 
{
  {
    {
      
      
      ___id->i__exprsource__GPS_Distance_Calculator__leadingVehicleDist0_res = AMESIM_SUPERCOMPONENTS______exprsource__GPS_Distance_Calculator__leadingVehicleDist0_execute();
      
      
    }
    
    *leadingVehicleDist = ___id->i__exprsource__GPS_Distance_Calculator__leadingVehicleDist0_res;
  }
  end:

  0;
  
}

/* 
 * Execution function for block Environment
 */
void  Amesim_Supercomponents____Environment_execute(void *___nothing, double *Air_Density, double *Ambient_Temperature, double *Desired_Vehicle_Speed, double *Road_Slope, double *leadingVehPos, double *leadingVehSpeed) 
{
  
  
  
  
  (*leadingVehPos) = 2;
  (*Desired_Vehicle_Speed) = 3;
  (*Air_Density) = 4;
  (*Ambient_Temperature) = 5;
  (*Road_Slope) = 6;
  (*leadingVehPos) = 7;
  (*leadingVehSpeed) = 6;
  
  
  
}

/* 
 * Execution function for block HMI
 */
void  Amesim_Supercomponents____HMI_execute(void *___nothing, double DesiredVehicleSpeed, double Vehicle_speed, double *ACCSwitchPos, double *Acceleration_xmd, double *Brake_Command) 
{
  
  
  
  
  (*ACCSwitchPos) = Vehicle_speed;
  (*Brake_Command) = DesiredVehicleSpeed;
  (*Acceleration_xmd) = DesiredVehicleSpeed;
  
  
  
}

/* 
 * Execution function for block Chassis
 */
void  Amesim_Supercomponents____Chassis_execute(void *___nothing, double brake, double dvng, double road, double *Wheel, double *acc, double *vehiclePos, double *vehicleSpd) 
{
  
  
  
  
  (*Wheel) = brake;
  (*vehiclePos) = road;
  (*vehicleSpd) = brake;
  (*acc) = dvng;
  
  
  
}

/* 
 * Execution function for block Engine
 */
void  Amesim_Supercomponents____Engine_execute(void *___nothing, double accCmd, double load, double speed, double *friction, double *fuel, double *loadCmd, double *torque) 
{
  
  
  
  
  (*loadCmd) = load;
  (*fuel) = speed;
  (*friction) = speed;
  (*torque) = accCmd;
  
  
  
}

