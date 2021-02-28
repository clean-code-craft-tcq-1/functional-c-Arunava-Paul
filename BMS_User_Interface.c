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
int Data_transmission_global;

void Fc_Display_Msg(void)
{
	switch(Fault_type_global)
	{
	case Fault_low_temp:
		printf("Warning!! System temperature low");
		break;
	case Fault_high_temp:
		printf("Warning!! System temperature high, Putting system into standby");
		break;
	case Fault_soc_low:
		printf("Warning!! System SOC low ,  Putting system into sleep , Please connect the vehicle to charge");
		break;
	case Fault_soc_high:
		printf("Warning!! System SOC is high, disconnecting from charger");
		break;
	case Fault_chargeRate_low:
		printf("Warning!! System charge rate is low");
		break;
	case Fault_chargeRate_high:
		printf("Warning!! System charge rate is high , disconnecting from charger");
		break;
	case Fault_sensor_failure:
		printf("Warning!! Sensor failure, Shutting down system");
		break;
	default:
		printf("Error!! Abnormal system condition. Putting system into sleep");
		break;
	}
	Data_transmission_global = TRUE;
}/*end of Fc_Display_Msg*/

