// The program makes a calculator using switch case statments. 

# include <stdio.h>

int main () { // start main 

		int num1, num2, answer;
		char operation;
		int index = 1;
		while (index) {
			printf("Enter num1: ");
			scanf("%d", &num1);
			printf("Enter num2: ");
			scanf("%d", &num2);
			printf("Enter the operation to be performed (+,-,*,/): ");
			scanf(" %c", &operation);
			
			switch (operation) { // start switch 
			
				case '+':
					answer = num1 + num2;
					printf("The answer for %d + %d is: %d\n", num1, num2, answer);
					break;
				case '-':
					answer = num1 - num2;
					printf("The answer for %d - %d is: %d\n", num1, num2, answer);
					break;
				case '*':
					answer = num1 * num2;
					printf("The answer for %d * %d is: %d\n", num1, num2, answer);
					break;
				case '/':
					if (num2>0) {
						answer = num1 / num2;
						printf("The answer for %d / %d is: %d\n", num1, num2, answer);
					} // end if 
					else {
						printf("Invalid input\n");	
					} // end else block
					break;
				default:
					printf("Invalid Input\n");
			
			} // end switch
			
			printf("Do you want to continue (1 for yes and 0 for no): ");
			scanf("%d", &index);
		}		
		return 0;
} // end main
