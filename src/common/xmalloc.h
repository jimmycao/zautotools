/*
 * xmalloc.h
 *
 *  Created on: Nov 14, 2012
 *      Author: caoj7
 */

#ifndef XMALLOC_H_
#define XMALLOC_H_

#include "common.h"
BEGIN_C_DECLS

#define XMALLOC(type, num)                                  \
        ((type *) xmalloc ((num) * sizeof(type)))

extern void *xmalloc(size_t size);

END_C_DECLS


#endif /* XMALLOC_H_ */
