/*
 * networkStartup.c
 *
 *  Created on: 14 Jul 2024
 *      Author: aroma
 */

#include <stdio.h>
#include <winsock2.h>
#include <winsock.h>
#include <iphlpapi.h>
#include <ws2tcpip.h>

//#pragma comment (lib, "ws2_32.lib")

// Functions Declerations
int NetworkInit(void);

// Function Defintions
int NetworkInit()
{
	WSADATA d;
	if (WSAStartup(MAKEWORD(2, 2), &d)) {
		printf("Failed to initialize.\n");
		return -1;
	}
	WSACleanup();
	printf("Ok.\n");
	return 0;
}

