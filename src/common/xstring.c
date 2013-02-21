/*
 * xstring.c
 *
 *  Created on: Nov 10, 2012
 *      Author: caoj7
 */


#include "xstring.h"
#include "xmalloc.h"
#include <string.h>  //don't forget

char *xstrdup(const char* str)
{
	size_t len = strlen(str) + 1;
	char *new = (char *)xmalloc(len);
	return (char*)memcpy(new, str, len);
}
