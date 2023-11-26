/*
 * fsm_auto.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "fsm_auto.h"

void auto_run(){
	if(MODE == MODE1){
		if (isButtonPressed(0) == 1 ){
			STATE = STATE1;
			MODE = MODE2;
			setTimer(2, 25);
		}
		if(timer_flag[0] == 1){
			if(second > 59){
				minute++;
				second = 0;
			}
			if(minute > 59){
				hour++;
				minute = 0;
			}
			if(hour >= 12)
				hour = 0;
			second++;
			setTimer(0, 100);
		}
		if(timer_flag[1] == 1){
			display_fsm();
			setTimer(1, 25);
		}
	}
}
