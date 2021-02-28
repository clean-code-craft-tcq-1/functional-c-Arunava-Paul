/*
 * BMS_Sys_Temperature_eavaluation.c
 *
 *  Created on: Feb 28, 2021
 *      Author: PUL1KOR
 */

#include "BMS_System_Check.h"
#include "BMS_Sensor_Core.h"

extern Sysfault_type_en Sysfault_global;
extern Fault_type_en Fault_type_global;

void Fc_Temperature_Sensor_check(void)
{
	int Retval;
	float temp;
	/*Read appropriate sensor*/
	Retval = Sys_Temp_sr(&temp);
	/*************************/
	if(Retval)
	{
		/*Sensor error*/
		Sysfault_global = Sysfault_Shutdown;
		Fault_type_global = Fault_sensor_failure;
	}
	else
	{
		if(temp < MIN_OPERATIONAL_TEMPERATURE)
		{
			Fault_type_global = Fault_low_temp;
			Sysfault_global = Sysfault_Sleep;
		}
		else if(temp > MAX_OPERATIONAL_TEMPERATURE)
		{
			Fault_type_global = Fault_high_temp;
			Sysfault_global = Sysfault_Shutdown;
		}
		else
		{
			//Do nothing,system normal
		}
	}
}/*end of Fc_Temperature_Sensor_check*/
