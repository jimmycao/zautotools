/*
 * xmalloc.c
 *
 *  Created on: Nov 10, 2012
 *      Author: caoj7
 */
#include "xmalloc.h"
#include "xerrno.h"
#include <stdio.h>
#include <stdlib.h>

void *xmalloc(size_t size)
{
	void *new = malloc(size);
	if(new)
		return new;
	else{
		x_perror("memory allocation failed.");
	}
}

