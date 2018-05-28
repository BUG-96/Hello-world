//!	Filename:	test.c	
//!	Author:		never
//!	Date:		2018.5.28

#include "stdio.h"

void fun(int i){
	if (i > 0)
	{
		fun(i / 2);
	}
	printf("%d\n", i);
}			


int main(void){
	fun(10);
	return 0;
}