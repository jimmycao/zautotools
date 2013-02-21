/*
 * container.h
 *
 *  Created on: Nov 2, 2012
 *      Author: caoj7
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "common.h"
BEGIN_C_DECLS

struct container{
	int cores;
	double memory;
};

typedef struct container container_t;

extern void init_default_container_config(container_t *c);

extern void set_container_config(int core, double mem, container_t *c);

extern void print_container_config(container_t *c);

BEGIN_C_DECLS
#endif /* CONTAINER_H_ */
