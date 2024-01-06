/*
 * 7_seg.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "display_led.h"

void displaySEG7(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 1 ) ;
			break;

		case 1:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 1 ) ;
			break;

		case 2:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 3:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 4:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 5:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 6:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 7:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 1 ) ;
			break;

		case 8:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;

		case 9:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 ) ;
			break;


		default:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 1 ) ;
			break;
  }
}
void enable(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , 0 ) ;
			break;
		case 1:
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , 1 ) ;
			break;
		case 2:
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , 1 ) ;
			break;
		case 3:
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , 0 ) ;
			HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , 1 ) ;
			break;
		case 4:
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , 1 ) ;
			HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , 0 ) ;
			break;
		default:
			break;
	}
}
void display_fsm(){
	switch (STATE){
		case STATE1:
			displaySEG7(hour/10);
			enable(1);
			STATE = STATE2;
			break;
		case STATE2:
			displaySEG7(hour%10);
			enable(2);
			STATE = STATE3;
			break;
		case STATE3:
			displaySEG7(minute/10);
			enable(3);
			STATE = STATE4;
			break;
		case STATE4:
			displaySEG7(minute%10);
			enable(4);
			STATE = STATE1;
			break;
		default:
			break;
	}
}

void displayOnly_fsm(int num){
	switch (STATE){
		case STATE1:
			displaySEG7(0);
			enable(1);
			STATE = STATE2;
			break;
		case STATE2:
			displaySEG7(0);
			enable(2);
			STATE = STATE3;
			break;
		case STATE3:
			displaySEG7(num/10);
			enable(3);
			STATE = STATE4;
			break;
		case STATE4:
			displaySEG7(num%10);
			enable(4);
			STATE = STATE1;
			break;
		default:
			break;
	}}
