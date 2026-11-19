#include <stdio.h>
//declares c stands input/output library header available. provides printf();

#include <stdlib.h>
//declares c standard processing library header available. provides malloc(), free(), exit.

int main(void){//programs entry/execution point. takes no arguments.

	unsigned int request_id = 42;//nonnegative integer variable value.
	
	printf("request id 0: %d\n", request_id);

	//reassigning request_id value to 0.
	request_id = 99;
	
	printf("request id 1: %d\n", request_id);

	request_id = 7;

	printf("request id 2: %d\n", request_id);
	return 0;//returns an integer of 0 to runtime to indicate successful compilation.
}
/*
from ~/systems-engineering$

mkdir -p build/firmware/ex-01-variables

gcc -std=c11 -Wall -Wextra -Wpedantic \
    firmware/ex-01-variables/main.c \
    -o build/firmware/ex-01-variables/main

*/
