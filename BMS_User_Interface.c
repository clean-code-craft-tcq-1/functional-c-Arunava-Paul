/*
 * User_Interface.c
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */
#include "BMS_Common_Include.h"
#include "BMS_User_Interface.h"
#include "BMS_System_Check.h"

extern Fault_type_en Fault_type_global;
int Data_transmission_global = FALSE;

void Fc_Display_Msg(void)
{
	switch(Fault_type_global)
	{
	case Fault_none:
		printf("\n System Ok \n");
		break;
	case Fault_low_temp:
		printf("\n Warning!! System temperature low \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_high_temp:
		printf("\n Warning!! System temperature high, Putting system into standby \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_soc_low:
		printf("\n Warning!! System SOC low ,  Putting system into sleep , Please connect the vehicle to charge \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_soc_high:
		printf("\n Warning!! System SOC is high, disconnecting from charger \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_chargeRate_low:
		printf("\n Warning!! System charge rate is low \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_chargeRate_high:
		printf("\n Warning!! System charge rate is high , disconnecting from charger \n");
			Data_transmission_global = TRUE;
		break;
	case Fault_sensor_failure:
		printf("\n Warning!! Sensor failure, Shutting down system \n");
			Data_transmission_global = TRUE;
		break;
	default:
		printf("\n Error!! Abnormal system condition. Putting system into sleep \n");
			Data_transmission_global = TRUE;
		break;
	}
	
}/*end of Fc_Display_Msg*/

