/*
 * User_Interface.h
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */

#ifndef USER_INTERFACE_H_
#define USER_INTERFACE_H_

extern void Fc_Display_Msg(void);

struct user_interface_st
{
	unsigned int sys_failure_identifier;
	char *user_msg_string;
};

#endif /* USER_INTERFACE_H_ */
