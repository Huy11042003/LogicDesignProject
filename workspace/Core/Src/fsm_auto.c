/*
 * fsm_auto.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "fsm_auto.h"


void auto_run(){
	if (isButtonPressed(0) == 1 ){
//		HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin
//		                          |EN4_Pin|EN5_Pin, GPIO_PIN_SET);
		MODE = MODE2;
	}
	if(MODE == MODE1){
		switch(autoState){
			case LED_INIT:
				autoState = LED;
				setTimer(0, 1000);
				break;
			case LED:
				displayLed(hour);
				displayLed(minute);
				displayLed(second);
				if(timer_flag[0] == 1){
					second++;
					if(second >= 60){
						minute++;
						second = 0;
					}
					if(minute >= 60){
						hour++;
						minute = 0;
					}
					if(hour >= 12)
						hour = 0;
					setTimer(0, 1000);
				}
				break;
			default:
				break;
		}
	}
}
