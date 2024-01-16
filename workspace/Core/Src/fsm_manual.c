/*
 * fsm_manual.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */

#include "fsm_manual.h"

void manual_run(){
	switch(MODE){
		case MODE2:
			if(timer_flag[2] == 1){
				displayOnly_fsm(second);
				setTimer(2, 1);
			}
			if (isButtonPressed(1)==1){
				second++;
				if(second > 59){
					minute++;
					second = 0;
				}
				if(minute > 59){
					hour++;
					minute = 0;
				}
				if(hour >= 24)
					hour = 0;
			}
			if (isButtonPressed(2)==1){
				second--;
				if(second < 0){
					minute--;
					second = 59;
				}
				if(minute < 0){
					hour--;
					minute = 59;
				}
				if(hour < 0)
					hour = 23;
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE3;
				STATE = STATE1;
			}

			break;
		case MODE3:
			if(timer_flag[2] == 1){
				displayOnly_fsm(minute);
				setTimer(2, 1);
			}
			if (isButtonPressed(1)==1){
				minute++;
				if(minute > 59){
					hour++;
					minute = 0;
				}
				if(hour >= 24)
					hour = 0;
			}
			if (isButtonPressed(2)==1){
				minute--;
				if(minute < 0){
					hour--;
					minute = 59;
				}
				if(hour < 0)
					hour = 23;
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE4;
				STATE = STATE1;
			}
			break;
		case MODE4:
			if(timer_flag[2] == 1){
				displayOnly_fsm(hour);
				setTimer(2, 1);
			}
			if (isButtonPressed(1)==1){
				hour++;
				if(hour >= 24)
					hour = 0;

			}
			if (isButtonPressed(2)==1){
				hour--;
				if(hour < 0)
					hour = 23;
			}
			if (isButtonPressed(0) == 1){
				setValues();
				setTimer(0, 100);
				setTimer(1, 1);
			}
			break;
		default:
			break;
	}
}
