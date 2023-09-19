// The program takes light sensor values form 0-1000 inclusive and prints the brightness as sunshine, evening, lighting.

#include <stdio.h>

int main () { // start main 
	
	int intensityOflight;
	
	printf("Enter the value of light intensity from 0-1000 inclusive: ");
	scanf("%d", &intensityOflight);
	
	if (intensityOflight > 500 && intensityOflight<=1000) {
		printf("The brightness is very high (Sunshine)\n");
	} else if (intensityOflight >= 100 && intensityOflight<=500) {
		printf("The brightness is mild (Lighting)\n");
	} else if (intensityOflight >= 0 && intensityOflight<100) {
		printf("The brightness is low (Evening)\n");
	} else {
		printf("Invalid Input for intensity of light\n");
	}
	return 0;
	
} // end main 
