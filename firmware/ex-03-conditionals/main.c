#include <stdio.h>
#include <stdlib.h>

/*
In validation work, you often check whether a measurement falls within an acceptable range. 

practice that using if, else if, and else.

Goal: classify a simulated voltage measurement as too low, acceptable, or too high.

boundary tests: they check the limits and values immediately outside them.
*/

int main(void){
	unsigned int voltage_mv = 3350;

	unsigned int minimum_mv = 3200;

	unsigned int maximum_mv = 3400;

	printf("measured voltage: %u mV\n", voltage_mv);

	printf("allowed range %u to %u mV\n", minimum_mv, maximum_mv);

	if(voltage_mv < minimum_mv){
		printf("FAIL: voltage is too low\n");
	}else if(voltage_mv > maximum_mv){
		printf("FAIL: voltage is too high\n");
	}else{
		printf("PASS: voltage is within range\n\n");
	}

	return 0;

}
