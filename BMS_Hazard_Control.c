/*
 * BMS_Harzard_Protection.c
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */
#include "BMS_Common_Include.h"
#include "BMS_System_Check.h"
#include "BMS_Hazard_Control.h"

extern Sysfault_type_en Sysfault_global;
extern int Data_transmission_global;

Hazard_Control_st Hazard_Control[Sysfault_max_condition] = {												\
	{											\
		Sysfault_none,						\
		0,						\
	},											\
	{											\
		SysFault_Standby,						\
		Fc_System_Standby,						\
	},											\
	{											\
		Sysfault_Shutdown,						\
		Fc_System_shutdown,					\
	},											\
	{											\
		Sysfault_Sleep,							\
		Fc_System_Sleep,						\
	},											\
	{											\
		Sysfault_disconnect_charger,			\
		Fc_Disconnect_Charger					\
	}											\
};

void Fc_Hazard_Control(void)
{
	(Hazard_Control[Sysfault_global].hazard_ctrl_pfcpt)();
}/*end of Fc_Hazard_Control*/

void Fc_System_shutdown(void)
{
	/***Shutdown Code**/
	/*check the data transmission is done**/
}

void Fc_Disconnect_Charger(void)
{
	/**Disconnect charger code**/
	/*check the data transmission is done**/
}

void Fc_System_Sleep(void)
{
	/**System Sleep code**/
	/*check the data transmission is done**/
}

void Fc_System_Standby(void)
{
	/**System Standby Code**/
	/*check the data transmission is done**/
	if(Data_transmission_global == TRUE)
	{
		exit(0);
	}
}
