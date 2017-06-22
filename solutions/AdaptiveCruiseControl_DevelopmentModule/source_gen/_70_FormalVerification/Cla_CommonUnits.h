#ifndef CLA_COMMONUNITS_H
#define CLA_COMMONUNITS_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

#define CLA_COMMONUNITS_ms_to_s_any(val)((val) / 1000)
#define CLA_COMMONUNITS_s_to_ms_any(val)((val) * 1000)
#define CLA_COMMONUNITS_deg_to_rad_double(val)((val) * 3.14159265358979 / 180)
#define CLA_COMMONUNITS_rad_to_deg_double(val)((val) * 180 / 3.14159265358979)
#define CLA_COMMONUNITS_deg_to_rev_double(val)((val) / 360)
#define CLA_COMMONUNITS_rad_to_rev_double(val)((val) / 6.28318530717959)
#define CLA_COMMONUNITS_rev_to_deg_double(val)((val) * 360)
#define CLA_COMMONUNITS_rev_to_rad_double(val)((val) * 6.28318530717959)
#define CLA_COMMONUNITS_min_to_s_double(val)((val) * 60)
#define CLA_COMMONUNITS_s_to_min_double(val)((val) / 60)
#define CLA_COMMONUNITS_rpm_to_radps_double(val)((val) * 3.14159265358979 / 30)
#define CLA_COMMONUNITS_radps_to_rpm_double(val)((val) * 30 / 3.14159265358979)
#define CLA_COMMONUNITS_degC_to_K_double(val)((val) * 1 / 1 + 273.15)
#define CLA_COMMONUNITS_K_to_degC_double(val)(((val) - 273.15) * 1 / 1)
#define CLA_COMMONUNITS_W_to_kW_double(val)((val) / 1000)
#define CLA_COMMONUNITS_kW_to_W_double(val)((val) * 1000)
#define CLA_COMMONUNITS_W_to_MW_double(val)((val) / 1000 / 1000)
#define CLA_COMMONUNITS_MW_to_W_double(val)((val) * 1000 * 1000)
#define CLA_COMMONUNITS_Pa_to_kPa_double(val)((val) / 1000)
#define CLA_COMMONUNITS_Pa_to_MPA_double(val)((val) / 1000 / 1000)
#define CLA_COMMONUNITS_kPa_to_Pa_double(val)((val) * 1000)
#define CLA_COMMONUNITS_kPa_to_MPA_double(val)((val) / 1000)
#define CLA_COMMONUNITS_MPA_to_Pa_double(val)((val) * 1000 * 1000)
#define CLA_COMMONUNITS_MPA_to_kPa_double(val)((val) * 1000)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
