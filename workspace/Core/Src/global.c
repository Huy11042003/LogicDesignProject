/*
 * global.c
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */
#include "global.h"

enum ModeState MODE;

enum LedToggleState mode2Toggle;
enum IncreaseDelayState mode2Increase;

enum LedToggleState mode3Toggle;
enum IncreaseDelayState mode3Increase;

enum LedToggleState mode4Toggle;
enum IncreaseDelayState mode4Increase;

enum AutoState autoState;
int hour;
int minute;
int second;

void setValues(void){
	MODE = MODE1;

	autoState = LED_INIT;

	mode2Toggle = TOGGLE_INIT;
	mode2Increase = INCREASE_INIT;

	mode3Toggle = TOGGLE_INIT;
	mode3Increase = INCREASE_INIT;

	mode4Toggle = TOGGLE_INIT;
	mode4Increase = INCREASE_INIT;

	hour = 5;
	minute = 39;
	second = 30;
}
