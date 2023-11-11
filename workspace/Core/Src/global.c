/*
 * global.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "global.h"

enum ModeState MODE;
enum AutoState autostate;

enum LedState firstCoupleLedAutoState;
enum LedState secondCoupleLedAutoState;

int redDelay = 7;
int greenDelay = 4;
int yellowDelay = 3;


int countdownFirstCoupleLed;
int countdownSecondCoupleLed;

void setValues(void){
	MODE = MODE1;
	autostate = AUTO_INIT;

	firstCoupleLedAutoState = LED_INIT;
	secondCoupleLedAutoState = LED_INIT;

	countdownFirstCoupleLed = redDelay;
	countdownSecondCoupleLed = greenDelay;
}

