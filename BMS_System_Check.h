/*
 * BMS_System_Check.h
 *
 *  Created on: Feb 28, 2021
 *      Author: PUL1KOR
 */

#ifndef BMS_SYSTEM_CHECK_H_
#define BMS_SYSTEM_CHECK_H_


typedef enum
{
	Fault_none,
	Fault_low_temp,
	Fault_high_temp,
	Fault_soc_low,
	Fault_soc_high,
	Fault_chargeRate_high,
	Fault_chargeRate_low,
	Fault_sensor_failure,
	Fault_max_condition
}Fault_type_en;

typedef enum
{
	Sysfault_none,
	SysFault_Standby,
	Sysfault_Shutdown,
	Sysfault_Sleep,
	Sysfault_disconnect_charger,
    Sysfault_max_condition
}Sysfault_type_en;

extern void Fc_Temperature_Sensor_check(void);
extern void Fc_SOC_Sensor_check(void);
extern void Fc_Charge_Rate_Sensor_check(void);
extern void Fc_System_init(void);
extern void Fc_Battery_Check(void);

#endif /* BMS_SYSTEM_CHECK_H_ */
