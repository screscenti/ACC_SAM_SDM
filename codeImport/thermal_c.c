#include "thermal_c.h"

// Units: /degC 
static double const amb_correction = 1.0;
// Units: m3ps/m^2/K
static double const radiator_factor = 1.0; 
// Units: m^2
static double const area = 1.0;

#define ARRSIZE 7

 #ifdef SOFTCONTROL
     double const vehVel[] = {-2.1, 1.2, 2.4, 3.8, 10.2, 20.6, 30.8};
     double const velocityCorrFactor[] = {1.3, 2.5, 4.1, 3.7, 5.8, 6.1, 6.5};
 #endif
 
 #ifdef HARDCONTROL
     double const vehVelx[] = {-2.1, 1.2, 2.4, 3.8, 10.2, 30.8};
     double const velocityCorrFactorx[] = {1.3, 2.5, 4.1, 3.7, 5.8, 6.5};
 #endif

double calc_coolant_flow(double tamb, double tact, double tdesd, double vel)
{ 
	double coolant_flow_desd, velCorrFac;

#ifdef SOFTCONTROL
	if (vel < vehVel[0]) {
		velCorrFac = velocityCorrFactor[0];
	}
	else {
		int idx;
		for (idx=0; idx<ARRSIZE; idx++) {
			if (vel < vehVel[idx+1]) {
				velCorrFac = velocityCorrFactor[idx];
				break;
			}
		}
	}
#endif
#ifdef HARDCONTROL
	if (vel < vehVelx[0]) {
		velCorrFac = velocityCorrFactorx[0];
	}
	else {
		int idx;
		for (idx=0; idx<ARRSIZE; idx++) {
			if (vel < vehVelx[idx+1]) {
				velCorrFac = velocityCorrFactorx[idx];
				break;
			}
		}
	}
#endif
	coolant_flow_desd = (tact - tdesd) * (tamb - 2.5E1) * amb_correction/
				    radiator_factor / area * velCorrFac; 

	return coolant_flow_desd; 
}
