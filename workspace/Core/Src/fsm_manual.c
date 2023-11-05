/*
 * fsm_manual.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */

#include "fsm_manual.h"

void mode2_run(){
	switch(mode2Toggle){
		case TOGGLE_INIT:
			mode2Toggle = TOGGLE;
			setTimer(3, 25);
			break;
		case TOGGLE:
			if(timer_flag[3] == 1){
				toggleLeds(hour%12);
				setTimer(3, 25);
			}
			break;
		default:
			break;
	}

	switch(mode2Increase){
			case INCREASE_INIT:
				if (isButtonPressed(1)==1){
					mode2Increase = INCREASE;
					hour++;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					hour++;

					if(hour >= 12) hour = 0;
				}
				if (isButtonPressed(2)==1){
					MODE = MODE1;
					setValues();
				}
				break;

			default:
				break;
		}

}

void mode3_run(){
	switch(mode3Toggle){
		case TOGGLE_INIT:
			mode3Toggle = TOGGLE;
			setTimer(5, 25);
			break;
		case TOGGLE:
			if(timer_flag[5] == 1){
				toggleLeds(minute/5);
				setTimer(5, 25);
			}
			break;
		default:
			break;
	}

	switch(mode3Increase){
			case INCREASE_INIT:
				if (isButtonPressed(1)==1){
					mode3Increase = INCREASE;
					minute++;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					minute++;
					if(minute >= 60) minute = 0;
				}
				if (isButtonPressed(2)==1){
					MODE = MODE1;
					setValues();
				}
				break;

			default:
				break;
		}
}

void mode4_run(){
	switch(mode4Toggle){
		case TOGGLE_INIT:
			mode4Toggle = TOGGLE;
			setTimer(7, 25);
			break;
		case TOGGLE:
			if(timer_flag[7] == 1){
				toggleLeds(second/5);
				setTimer(7, 25);
			}
			break;
		default:
			break;
	}

	switch(mode4Increase){
			case INCREASE_INIT:
				if (isButtonPressed(1)==1){
					mode4Increase = INCREASE;
					second++;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					second++;
					if(second >= 60) second = 0;
				}
				if (isButtonPressed(2)==1){
					MODE = MODE1;
					setValues();
				}
				break;

			default:
				break;
		}
}

void manual_run(){
	switch(MODE){
		case MODE2:
			mode2_run();
			if (isButtonPressed(0) == 1){
				MODE = MODE3;
			}
			break;
		case MODE3:
			mode3_run();
			if (isButtonPressed(0) == 1){
				MODE = MODE4;
			}
			break;
		case MODE4:
			mode4_run();
			if (isButtonPressed(0) == 1){
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
}
