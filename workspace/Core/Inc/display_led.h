/*
 * 7_seg.h
 *
 *  Created on: Oct 22, 2023
 *      Author: ad
 */

#ifndef INC_DISPLAY_LED_H_
#define INC_DISPLAY_LED_H_

#include "main.h"
#include "global.h"


void displayFirstLedCouple(enum LedState state_1);

void displaySecondLedCouple(enum LedState state_2);

void toggleLeds(enum LedState state);

void displaySEG7(int num);


#endif /* INC_DISPLAY_LED_H_ */
