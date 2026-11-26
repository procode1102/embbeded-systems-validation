#include <stdio.h>
#include <stdlib.h>

int main(void){

	//unsigned int/non-negative numbers
	//unsigend int - 4 bytes in memmory usage size.

	unsigned int minimum_mv = 3200;
	unsigned int maximum_mv = 3400;
	unsigned int pass_count = 0;//successful condition counter.

	unsigned int fail_count = 0;//failure counter.
	
	printf("size of unsigned int %lu\n\n", sizeof(fail_count));
	
for(unsigned int voltage_mv = 3100;
	voltage_mv <= 3500;
	voltage_mv += 50){
	
	printf("voltage: %u mV -> ", voltage_mv);
	
	if(voltage_mv < minimum_mv){
		printf("FAIL: voltage too low\n\n");
		fail_count++; //increments number of fails.
	}else if(voltage_mv > maximum_mv){
		printf("FAIL: voltage too high\n\n");
		fail_count++; //increments number of fails.
	}else{
		printf("PASS\n");
		pass_count++;//counting the number of passes.
	}
}
	printf("\nSummary: %u passed, %u failed\n", pass_count, fail_count);
	return 0;
}
