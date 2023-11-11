/*
 * fsm_auto.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "fsm_auto.h"


void auto_run(){
	if(MODE == MODE1){
			switch(autostate){
				case AUTO_INIT:
					autostate = RED_GREEN;
					setTimer(0, 100);
					break;
				case RED_GREEN:
					if (isButtonPressed(0) == 1 ){
						MODE = MODE2;
						displayFirstLedCouple(LED_INIT);
						displaySecondLedCouple(LED_INIT);
						setTimer(3, 25);
						break;
					}
					displayFirstLedCouple(RED);
					displaySecondLedCouple(GREEN);
					displaySEG7(countdownFirstCoupleLed-1);
					if(timer_flag[0] == 1){
						countdownFirstCoupleLed--;
						countdownSecondCoupleLed--;
						if(countdownSecondCoupleLed == 0){
							countdownSecondCoupleLed = yellowDelay;
							autostate = RED_YELLOW;
						}
						setTimer(0, 100);
					}
					break;
				case RED_YELLOW:
					if (isButtonPressed(0) == 1 ){
						MODE = MODE2;
						displayFirstLedCouple(LED_INIT);
						displaySecondLedCouple(LED_INIT);
						setTimer(3, 25);
						break;
					}
					displayFirstLedCouple(RED);
					displaySecondLedCouple(YELLOW);
					displaySEG7(countdownFirstCoupleLed-1);
					if(timer_flag[0] == 1){
						countdownFirstCoupleLed--;
						countdownSecondCoupleLed--;
						if(countdownSecondCoupleLed == 0){
							countdownSecondCoupleLed = redDelay;
							countdownFirstCoupleLed = greenDelay;
							autostate = GREEN_RED;
						}
						setTimer(0, 100);
					}
					break;
				case GREEN_RED:
					if (isButtonPressed(0) == 1 ){
						MODE = MODE2;
						displayFirstLedCouple(LED_INIT);
						displaySecondLedCouple(LED_INIT);
						setTimer(3, 25);
						break;
					}
					displayFirstLedCouple(GREEN);
					displaySecondLedCouple(RED);
					displaySEG7(countdownFirstCoupleLed-1);
					if(timer_flag[0] == 1){
						countdownFirstCoupleLed--;
						countdownSecondCoupleLed--;
						if(countdownFirstCoupleLed == 0){
							countdownFirstCoupleLed = yellowDelay;
							autostate = YELLOW_RED;
						}
						setTimer(0, 100);
					}
					break;
				case YELLOW_RED:
					if (isButtonPressed(0) == 1 ){
						MODE = MODE2;
						displayFirstLedCouple(LED_INIT);
						displaySecondLedCouple(LED_INIT);
						setTimer(3, 25);
						break;
					}
					displayFirstLedCouple(YELLOW);
					displaySecondLedCouple(RED);
					displaySEG7(countdownFirstCoupleLed-1);
					if(timer_flag[0] == 1){
						countdownFirstCoupleLed--;
						countdownSecondCoupleLed--;
						if(countdownFirstCoupleLed == 0){
							countdownSecondCoupleLed = greenDelay;
							countdownFirstCoupleLed = redDelay;
							autostate = RED_GREEN;
						}
						setTimer(0, 100);
					}
					break;
			}
	}
}
