// The program takes input from user and checks whteher the number is a multiple of 3 or not 

 #include <stdio.h>
 
 int main() { // start main
 			
 			int number;
 			printf("Enter a number: ");
 			scanf("%d", &number);
 			
 			if (number%3 == 0) {
 				printf("The number is a multiple of 3");
 			} else {
				printf("The number is not a multiple of 3");
			}
			return 0;
} // end main 
