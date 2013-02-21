/*
 * common_test.c
 *
 *  Created on: Nov 10, 2012
 *      Author: caoj7
 */
#include "common/xmalloc.h"
#include "common/common.h"
#include "common/xstring.h"
#include "common/xerrno.h"

struct stu{
	int age;
	char *name;
};

typedef struct stu stu_t;

int main(){
	stu_t *stu1 = (stu_t *)xmalloc(sizeof(stu_t));
	stu1->age = 19;
	stu1->name = xstrdup("amao");
	printf("age = %d, name = %s\n", stu1->age, stu1->name);
	puts("=========================");

	x_set_errnum(32);
	x_perror ("send...");
	return 0;
}

