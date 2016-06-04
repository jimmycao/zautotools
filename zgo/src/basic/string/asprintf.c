#include <stdio.h>
#include <stdlib.h>

void sprint(){
	char buffer[50];
	int n, a=5, b=3;
	n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
	printf ("[%s] is a %d char long string\n",buffer,n);
}


void get_str(char **str_pt){
	char *str;
	asprintf(&str, "%s", "hello world!");
	*str_pt = str;
}

int main(int argc, char *argv[]){

	char *str;
	char str2[128];
	//======================
	asprintf(&str, "my name = %s, age = %d\n", "jimmy cao", 31);
	puts(str);
	//=======================
	sprintf(str2, "my name = %s, age = %d\n", "cao jimmy", 13);
	puts(str2);
	//================
	get_str(&str);
	puts(str);
	//=================
	sprint();
	return 0;
}
