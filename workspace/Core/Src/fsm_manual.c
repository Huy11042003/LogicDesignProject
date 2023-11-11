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
