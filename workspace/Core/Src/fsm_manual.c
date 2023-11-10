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
				toggleLeds(RED);
//				showTimeDelay(redDelay);
				setTimer(3, 25);
			}
			if (isButtonPressed(1)==1){
				redDelay +=1;
				greenDelay +=1;

				if(redDelay >= 99) redDelay = 1;
			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				setTimer(3, 25);
				MODE = MODE3;
				HAL_GPIO_WritePin(GPIOA, RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
										                          |YELLOW2_Pin|GREEN2_Pin, GPIO_PIN_SET);
			}

			break;
		case MODE3:
			if(timer_flag[3] == 1){
				toggleLeds(YELLOW);
//				showTimeDelay(yellowDelay);
				setTimer(3, 25);
			}
			if (isButtonPressed(1)==1){
				yellowDelay +=1;
				redDelay+=1;

				if(yellowDelay >= 99) yellowDelay = 1;
			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE4;
				setTimer(3, 25);
				HAL_GPIO_WritePin(GPIOA, RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
										                          |YELLOW2_Pin|GREEN2_Pin, GPIO_PIN_SET);
			}
			break;
		case MODE4:
			if(timer_flag[3] == 1){
				toggleLeds(GREEN);
//				showTimeDelay(greenDelay);
				setTimer(3, 25);
			}
			if (isButtonPressed(1)==1){
				redDelay +=1;
				greenDelay +=1;

				if(greenDelay >= 99) greenDelay = 1;
			}
			if (isButtonPressed(2)==1){
				MODE = MODE1;
				setValues();
			}
			if (isButtonPressed(0) == 1){
				MODE = MODE1;
				HAL_GPIO_WritePin(GPIOA, RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
										                          |YELLOW2_Pin|GREEN2_Pin, GPIO_PIN_SET);
			}
			break;
		default:
			break;
	}
}
