/*
 * fsm_manual.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */

#include "fsm_manual.h"

void mode2_run(){
	displaySEG7(redDelay);
	switch(mode2Toggle){
		case TOGGLE_INIT:
			HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			mode2Toggle = TOGGLE;
			setTimer(3, 25);
			break;
		case TOGGLE:
			if(timer_flag[3] == 1){
				toggleLeds(RED);
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
					redDelay +=1;
					greenDelay +=1;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					redDelay +=1;
					greenDelay +=1;

					if(redDelay > 9) redDelay = 1;
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
	displaySEG7(yellowDelay);
	switch(mode3Toggle){
		case TOGGLE_INIT:
			HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			mode3Toggle = TOGGLE;
			setTimer(5, 25);
			break;
		case TOGGLE:
			if(timer_flag[5] == 1){
				toggleLeds(YELLOW);
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
					yellowDelay +=1;
					redDelay +=1;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					yellowDelay +=1;
					redDelay +=1;
					if(yellowDelay > 9) yellowDelay = 1;
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
	displaySEG7(greenDelay);
	switch(mode4Toggle){
		case TOGGLE_INIT:
			HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			mode4Toggle = TOGGLE;
			setTimer(7, 25);
			break;
		case TOGGLE:
			if(timer_flag[7] == 1){
				toggleLeds(GREEN);
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
					greenDelay +=1;
					redDelay +=1;
				}

				break;
			case INCREASE:
				if (isButtonPressed(1)==1){
					greenDelay +=1;
					redDelay +=1;
					if(greenDelay > 9) greenDelay = 1;
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
