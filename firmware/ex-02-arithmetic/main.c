#include <stdio.h>//declares c standard library for i/o processing using printf();
#include <stdlib.h>//declares c standard library for data processing and system utilities such as malloc(), free(), exit.
//using two variables to perform arithmetic and understand integer division.

int main(void){//program entry point
	//
	unsigned int a = 17;
	unsigned int b = 5;

	printf("a: %u\n", a);
	printf("b: %u\n", b);
	
//arithmetic evaluation
	printf("addition: %u\n", a + b);
	printf("subtraction: %u\n", a - b);
	printf("multiplication: %u\n", a * b);
	printf("integer division: %u\n", a / b);
	printf("remainder: %u\n\n", a % b);
	return 0;//returns a succesful compilation and closes function body.
}
