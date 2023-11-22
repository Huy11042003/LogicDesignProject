/*
 * 7_seg.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "display_led.h"


void displayLed(int num){
	switch(num){
	case 12:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 0);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 0);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 0);
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 0);
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 0);
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 0);
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 0);
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, 0);
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, 0);
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, 0);
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, 0);
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, 1);
		break;
	case 3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, 1);
		break;
	case 4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, 1);
		break;
	case 5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, 1);
		break;
	case 6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, 1);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, 1);
		break;
	case 9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, 1);
		break;
	case 10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, 1);
		break;
	case 11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, 1);
		break;
	case 0:
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, 1);
		break;
	 default:
		 break;
	}
}


void toggleLeds(int num){
	switch(num){
		case 1:
			HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
			break;
		case 4:
			HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
			break;
		case 5:
			HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
			break;
		case 6:
			HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);
			break;
		case 7:
			HAL_GPIO_TogglePin(LED7_GPIO_Port, LED7_Pin);
			break;
		case 8:
			HAL_GPIO_TogglePin(LED8_GPIO_Port, LED8_Pin);
			break;
		case 9:
			HAL_GPIO_TogglePin(LED9_GPIO_Port, LED9_Pin);
			break;
		case 10:
			HAL_GPIO_TogglePin(LED10_GPIO_Port, LED10_Pin);
			break;
		case 11:
			HAL_GPIO_TogglePin(LED11_GPIO_Port, LED11_Pin);
			break;
		case 0:
			HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
			break;
		 default:
			 break;
		}
}
