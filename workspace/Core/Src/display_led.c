/*
 * 7_seg.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "display_led.h"


void displayFirstLedCouple(enum LedState state_1){
	switch(state_1){
	 case LED_INIT:
			 HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			 HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			 HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			 break;
	 case RED:
			 HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			 HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			 HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 1) ;
			 break;
	 case YELLOW:
			 HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 0) ;
			 HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 1) ;
			 HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			 break;
	 case GREEN:
			 HAL_GPIO_WritePin( GREEN1_GPIO_Port , GREEN1_Pin , 1) ;
			 HAL_GPIO_WritePin( YELLOW1_GPIO_Port , YELLOW1_Pin , 0) ;
			 HAL_GPIO_WritePin( RED1_GPIO_Port , RED1_Pin , 0) ;
			 break;
	 default:
		 break;
	}
}



void displaySecondLedCouple(enum LedState state_2){
	switch(state_2){
	 	 case LED_INIT:
			 HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			 HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			 HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			 break;
		case RED:
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 1) ;
			break;
		case YELLOW:
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 0) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 1) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			break;
		case GREEN:
			HAL_GPIO_WritePin( GREEN2_GPIO_Port , GREEN2_Pin , 1) ;
			HAL_GPIO_WritePin( YELLOW2_GPIO_Port , YELLOW2_Pin , 0) ;
			HAL_GPIO_WritePin( RED2_GPIO_Port , RED2_Pin , 0) ;
			break;
		default:
		  break;
   }
}

void toggleLeds(enum LedState state){
	switch(state){
	 case GREEN:
			 HAL_GPIO_TogglePin( GREEN1_GPIO_Port , GREEN1_Pin) ;
			 HAL_GPIO_TogglePin( GREEN2_GPIO_Port , GREEN2_Pin) ;
			 break;
	 case YELLOW:
			 HAL_GPIO_TogglePin( YELLOW1_GPIO_Port , YELLOW1_Pin) ;
			 HAL_GPIO_TogglePin( YELLOW2_GPIO_Port , YELLOW2_Pin) ;
			 break;
	 case RED:
			 HAL_GPIO_TogglePin( RED1_GPIO_Port , RED1_Pin) ;
			 HAL_GPIO_TogglePin( RED2_GPIO_Port , RED2_Pin) ;
			 break;
	 default:
		 break;
	}
}


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
			break;
  }
}
