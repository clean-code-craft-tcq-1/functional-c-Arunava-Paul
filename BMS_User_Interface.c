/*
 * User_Interface.c
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */
#include "BMS_System_Check.h"
#include "BMS_Common_Include.h"
#include "BMS_User_Interface.h"
#include "BMS_User_Interface_Cfg.h"

extern Fault_type_en Fault_type_global;
int Data_transmission_global = FALSE;
const struct user_interface_st usr_interface[Fault_max_condition] = USER_INTERFACE_ACCUMULATED_DATA;

void Fc_Display_Msg(void)
{	
	int idx;
	for(idx = 0 ; idx < Fault_max_condition ; idx++)
	{
		if(usr_interface[idx].sys_failure_identifier == Fault_type_global)
		{
			printf("\n%s\n", usr_interface[idx].user_msg_string);
		}		
	}
	Data_transmission_global = TRUE;
}/*end of Fc_Display_Msg*/
