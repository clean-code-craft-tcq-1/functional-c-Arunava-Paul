/*
 * BMS_Cyclic_Task.h
 *
 *  Created on: Feb 27, 2021
 *      Author: PUL1KOR
 */

#ifndef BMS_CYCLIC_TASK_H_
#define BMS_CYCLIC_TASK_H_

void Fc_Cyclic_task(void);


#define NULL_PTR  (void*)0
typedef void (*CyclicTask_funcptr)(void);
typedef void (*BckTask_funcptr)(void);


#endif /* BMS_CYCLIC_TASK_H_ */
