/*
 * BMS_Sys_SOC_eavaluation.c
 *
 *  Created on: Feb 28, 2021
 *      Author: PUL1KOR
 */
#include "BMS_Common_Include.h"
#include "BMS_System_Check.h"
#include "BMS_Sensor_Core.h"
#include "BMS_System_Threshold_Values_Cfg.h"

extern Sysfault_type_en Sysfault_global;
extern Fault_type_en Fault_type_global;

void Fc_SOC_Sensor_check(void)
{
	int Retval;
	float soc;
	/*Read appropriate sensor*/
	Retval = Sys_SOC_sr(&soc);
	/*************************/
	if(Retval)
	{
		/*Sensor error*/
		Sysfault_global = Sysfault_Shutdown;
		Fault_type_global = Fault_sensor_failure;
	}
	else
	{
		if(soc < MIN_SOC_VALUE)
		{
			Fault_type_global = Fault_soc_low;
			Sysfault_global = Sysfault_Sleep;
		}
		else if(soc > MAX_SOC_VALUE)
		{
			Fault_type_global = Fault_soc_high;
			Sysfault_global = Sysfault_disconnect_charger;
		}
		else
		{
			//system normal,do nothing
		}
	}
}/*end of Fc_SOC_Sensor_check*/
