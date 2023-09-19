// The program takes char input from the user and checks for it to be smallcase, capital letter, number or special case letters.

#include <stdio.h>

int main () { // start main 
	
	char input;
	
	printf("Enter a character: ");
	scanf(" %c", &input);
	
	// starting to check the input from the user
	if (input>= 'a' && input <= 'z') {
		printf("The input character is a small case letter: %c\n", input);
	} else if (input>= 'A' && input <= 'Z') {
		printf("The input character is a capital letter: %c\n", input);
	} else if (input>= '0' && input <= '9') {
		printf("The input character is a number: %c\n", input);
	} else {
		printf("The input character is a special case letter: %c", input);
	} // end else
	return 0;
} // end main
