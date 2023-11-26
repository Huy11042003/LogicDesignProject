/*
 * global.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "global.h"

enum ModeState MODE;
enum DisplayState STATE;

int countdownFirstCoupleLed;
int countdownSecondCoupleLed;

int hour = 5;
int minute = 39;
int second = 50;

void setValues(void){
	MODE = MODE1;
	STATE = STATE1;
}

