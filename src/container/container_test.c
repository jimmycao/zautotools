/*
 * container_run.c
 *
 *  Created on: Nov 2, 2012
 *      Author: caoj7
 */
#include<stdlib.h>
#include<stdio.h>
#include "container.h"

int main(int argc, char **argv){
	container_t c;

	init_default_container_config(&c);
	print_container_config(&c);

	puts("=======after set=========");
	set_container_config(2, 2048.00, &c);
	print_container_config(&c);
	return 0;
}

