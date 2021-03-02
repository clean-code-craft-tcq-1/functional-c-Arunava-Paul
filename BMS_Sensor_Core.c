/*
 * BMS_Sensor_Core.c
 *
 *  Created on: Feb 28, 2021
 *      Author: PUL1KOR
 */
#include "BMS_Common_Include.h"
#include "BMS_Sensor_Core.h"


int Sys_Temp_sr(float *temp)
{
	/*Core sensor read is presnt*/
	*temp = 90.0;
	/****************************/
	return 0;
}/*end of Sys_Temp_sr*/

int Sys_SOC_sr(float *soc)
{
	/*Core sensor read is presnt*/
	*soc = 35.5;
	/****************************/
	return 0;
}/*end of Sys_SOC_sr*/

int Sys_C_rate_sr(float *c_rate)
{
	/*Core sensor read is presnt*/
	*c_rate = 0.5;
	/****************************/
	return 0;
}/*end of Sys_C_rate_sr*/
