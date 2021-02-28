/*
 * BMS_Harzard_Protection.c
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */
#include "BMS_Common_Include.h"
#include "BMS_Hazard_Control.h"
#include "BMS_System_Check.h"

extern Sysfault_type_en Sysfault_global;
extern int Data_transmission_global;

void Fc_Hazard_Control(void)
{
	switch(Sysfault_global)
	{
	case Sysfault_none:
		/*System cool*/
		break;
	case SysFault_Standby:
		Fc_System_Standby();
		break;
	case Sysfault_Shutdown:
		Fc_System_shutdown();
		break;
	case Sysfault_Sleep:
		Fc_System_Sleep();
		break;
	case Sysfault_disconnect_charger:
		Fc_Disconnect_Charger();
		break;
	default:
		Fc_System_shutdown();
		break;
	}/*end of switch case*/
}/*end of Fc_Hazard_Control*/

void Fc_System_shutdown(void)
{
	/***Shutdown Code**/
	/*check the data transmission is done**/
}/*end of Fc_System_shutdown*/

void Fc_Disconnect_Charger(void)
{
	/**Disconnect charger code**/
	/*check the data transmission is done**/
}/*end of Fc_Disconnect_Charger*/

void Fc_System_Sleep(void)
{
	/**System Sleep code**/
	/*check the data transmission is done**/
}/*end of Fc_System_Sleep*/

void Fc_System_Standby(void)
{
	/**System Standby Code**/
	/*check the data transmission is done**/
}/*end of Fc_System_Standby*/
