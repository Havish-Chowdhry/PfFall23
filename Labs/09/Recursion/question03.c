/*
Programmer: Havish Chowdhry
Desc: GCD of two numbers using recursion and iterative solution.
Date: 13/11/2023
*/

// using recursion
#include <stdio.h>

// Recursive function to find GCD
int findGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return findGCD(num2, num1 % num2);
    }
}

int main() {
    int num1, num2, GCD;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    GCD = findGCD(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, GCD);

    return 0;
}

// Iterative solution
// Program to find the GCD of two numbers
#include <stdio.h>

int main () { // start main 
			
			int num1, num2, temp, x, GCD, product;
			int index = 1;
			
			printf("Enter the first number: ");
			scanf("%d", &num1);
			
			printf("Enter the second number: ");
			scanf("%d", &num2);
			x = num2;
			
			while (num2 != 0) { // start while loop
				temp = num2;
				num2 = (num1 % num2);
				num1 = temp
				;
			} // end while loop
			
			GCD = num1;
			
			printf("The GCD of %d an %d is: %d\n", num1,x, GCD);
			return 0;
} // end main 
