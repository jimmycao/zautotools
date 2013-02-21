/*
 * container.c
 *
 *  Created on: Nov 2, 2012
 *      Author: caoj7
 */
#include"container.h"

void init_default_container_config(container_t *c)
{
	c->cores = 1;
	c->memory = 1024.0;
}

void set_container_config(int core, double mem, container_t *c)
{
	c->cores = core;
	c->memory = mem;
}

void print_container_config(container_t *c)
{
	printf("Container: cores = %d, memory = %f\n", c->cores, c->memory);
}


