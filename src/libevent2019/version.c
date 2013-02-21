/*
 * version.c
 *
 *  Created on: Nov 19, 2012
 *      Author: caoj7
 */
#include <stdio.h>
#include <stdlib.h>
#include <event2/event.h>

int main(int argc, char **argv){
	char *version;
	version = event_get_version();
	puts(version);
	return 0;
}

