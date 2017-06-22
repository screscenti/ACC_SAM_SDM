/* Submodel Closed_Loop_Simulation_Models_control skeleton created by AME Submodel editing utility
   Wed Jun 21 19:36:24 2017 */



#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "ameutils.h"
#include "SimulationHelper.h"
#include "Closed_Loop_Simulation_Models.h"

#define _SUBMODELNAME_ "CLOSED_LOOP_SIMULATION_MODELS_CONTROL"
/* *******************************************************************************
TITLE :

------------------------------------------------------------------------------
DESCRIPTION :

------------------------------------------------------------------------------
USAGE :

------------------------------------------------------------------------------
PARAMETER SETTINGS :

------------------------------------------------------------------------------
REVISIONS :

******************************************************************************* */


/* >>>>>>>>>>>>Insert Private Code Here. */
/* <<<<<<<<<<<<End of Private Code. */



void closed_loop_simulation_models_controlin_(int *n , double rp[1], double c[1], int  ic[5])

{
int loop, error;
/* >>>>>>>>>>>>Extra Initialization Function Declarations Here. */
Closed_Loop_Simulation_Models____control_flattened_data_t *blockStruct;
/* <<<<<<<<<<<<End of Extra Initialization declarations. */
   loop=0;
   error=0;

/*
  If necessary, check values of the following:

  rp[0..1]
  *actRelec
  *energyRelec


*/
/* >>>>>>>>>>>>Initialization Function Check Statements. */

/* <<<<<<<<<<<<End of Initialization Check Statements. */

/*   Integer parameter checking:   *//*
   if(error ==1)
   {
   amefprintf(stderr, "\nWarning in %s instance %d.\n", _SUBMODELNAME_, *n);
   }
   else if(error == 2)
   {
   amefprintf(stderr, "\nFatal error in %s instance %d.\n", _SUBMODELNAME_, *block_struct);
   amefprintf(stderr, "Terminating the program.\n");
   AmeExit(1);
   }
*/
/* >>>>>>>>>>>>Initialization Function Executable Statements. */   // state variable code - BEGIN
   blockStruct = (Closed_Loop_Simulation_Models____control_flattened_data_t *)malloc(sizeof(Closed_Loop_Simulation_Models____control_flattened_data_t));
   ic[4]=(int )blockStruct;
   Closed_Loop_Simulation_Models____control_flattened_init(blockStruct);
    c[0] = getstarttime_();
   // state variable code - END
/* <<<<<<<<<<<<End of Initialization Executable Statements. */
}
void closed_loop_simulation_models_control_(int *n ,double *ACC_switch, double *d_lead, double *v_acc, double *v_lead, double *v_ref, double *brake, double *d_brake, double *d_safe_new, double *throttle, double rp[1], double c[1], int  ic[5], int *flag, double *t)

{
   int loop;
/* >>>>>>>>>>>>Extra Calculation Function Declarations Here. */
   Closed_Loop_Simulation_Models____control_flattened_data_t *blockStruct;
/* <<<<<<<<<<<<End of Extra Calculation declarations. */
/*



/* >>>>>>>>>>>>Calculation Function Executable Statements. */
   blockStruct = (Closed_Loop_Simulation_Models____control_flattened_data_t * )ic[4];
   if (*flag == 0)
   {
	   if(*t >= c[0])
	   {
		   if (c[0] <= (getfinaltime_() - rp[0]))
		   {
			   ___SimulationRuntime_setSimVars(*t, rp[0], getSimStep(*t, rp[0], getstarttime_()), getstarttime_());
			   c[0] = c[0] + rp[0];
			   Closed_Loop_Simulation_Models____control_flattened_execute( blockStruct ,*ACC_switch,*d_lead,*v_acc,*v_lead,*v_ref,brake,d_brake,d_safe_new,throttle);
		   }
	   }
   }
   distim_(&c [0]);
/* <<<<<<<<<<<<End of Calculation Executable Statements. */
}