/*
 * timex.c
 *
 *  Created on: 14 Jul 2024
 *      Author: aroma
 */

#include "timex.h"


void Delay(uint32_t delay)
{
	uint32_t milliseconds = 1000 * delay;
	clock_t startDelay = clock();	// returns current clock time

	while(clock() < startDelay + milliseconds)
		;
	// Will now loop until current time exceeds the delay time
}

void DelayMS(uint32_t delayMs)
{
	clock_t startDelay = clock();	// returns current clock time

	while(clock() < startDelay + delayMs)
		;
}
