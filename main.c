/*
 * main.c
 *
 *  Created on: 14 Jul 2024
 *      Author: aroma
 */
#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"
#include "custom/timex.h"

// Func Declarations
void app_init(void);
void app_tick(void);

int main(int argc, char **argv)
{
	time_t timer;
	DelayMS(1000);
	printf("Project Start \r\n");
	DelayMS(1000);
	app_init();
//	app_tick();

	return 0;
}

void app_init()
{
	NetworkInit();	// Init the network
}
