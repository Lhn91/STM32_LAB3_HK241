/*
 * software_timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
extern int timer_flag[10];
void setTimer(int duration, int index);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
