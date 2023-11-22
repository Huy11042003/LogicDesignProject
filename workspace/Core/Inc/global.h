/*
 * global.h
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"


enum ModeState {MODE1 = 1, MODE2 = 2, MODE3 = 3, MODE4 = 4};
//enum AutoState {LED_INIT, LED};
enum LedToggleState {TOGGLE_INIT, TOGGLE};
enum IncreaseDelayState {INCREASE_INIT, INCREASE};


extern enum ModeState MODE;

extern enum LedToggleState mode2Toggle;
extern enum IncreaseDelayState mode2Increase;

extern enum LedToggleState mode3Toggle;
extern enum IncreaseDelayState mode3Increase;

extern enum LedToggleState mode4Toggle;
extern enum IncreaseDelayState mode4Increase;

extern enum AutoState autoState;

extern int hour;
extern int minute;
extern int second;

void setValues(void);


#endif /* INC_GLOBAL_H_ */
