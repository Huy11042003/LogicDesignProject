/*
 * fsm_auto.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "fsm_auto.h"


void auto_run(){
	if (isButtonPressed(0) == 1 ){
		MODE = MODE2;
		displayLed(12);
		setTimer(3, 25);
	}
	if(MODE == MODE1){
		switch(autoState){
			case LED_INIT:
				autoState = LED;
				displayLed(12);
				displayLed(hour%12);
				displayLed(minute/5);
				displayLed(second/5);
				setTimer(0, 100);
				break;
			case LED:
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
					displayLed(12);
					displayLed(hour%12);
					displayLed(minute/5);
					displayLed(second/5);
					second++;
					setTimer(0, 100);
				}
				break;
			default:
				break;
		}
	}
}
