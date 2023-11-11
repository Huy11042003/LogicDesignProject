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
			if(timer_flag[3] == 1){
				toggleLeds(second/60);
				setTimer(3, 25);
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
				if(hour >= 12)
					hour = 0;

			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				setTimer(3, 25);
				MODE = MODE3;
			}

			break;
		case MODE3:
			if(timer_flag[3] == 1){
				toggleLeds(minute/60);
				setTimer(3, 25);
			}
			if (isButtonPressed(1)==1){
				minute++;
				if(minute > 59){
					hour++;
					minute = 0;
				}
				if(hour >= 12)
					hour = 0;
			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE4;
				setTimer(3, 25);
			}
			break;
		case MODE4:
			if(timer_flag[3] == 1){
				setTimer(3, 25);
			}
			if (isButtonPressed(1)==1){
				hour++;
				if(hour >= 12)
					hour = 0;

			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
}
