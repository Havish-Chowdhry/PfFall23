/* 
Programmer : Havish Chowdhry
Desc: Create a C program that swaps the values of two integers using a user-defined function, swapIntegers. The user
inputs two integer values, and the program uses the function to swap them. It should perform the swap, and display
the updated values.
Date: 24/10/2023
*/

// method 1: through pointers
#include <stdio.h>

void swapIntegers (int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main ()
{
	int a,b;
	printf("Enter a value for a: ");
	scanf("%d", &a);
	
	printf("Enter value for b: ");
	scanf("%d", &b);
	
	swapIntegers(&a, &b);
	printf("After swapping a is: %d\n", a);
	printf("After swapping a is: %d\n", b);
  return 0;
}

// method 2: without pointers or temp varibale 

#include <stdio.h>
 
void swapIntegers(int num1, int num2)
{
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2; 
	
	printf("After swapping num1 is %d\n", num1);
	printf("After swapping num1 is %d", num2);
}

int main ()
{
	int num1, num2;
	
	printf("Enter a value for num1: ");
	scanf("%d", &num1);
	
	printf("Enter value for num 2: ");
	scanf("%d", &num2);
	
	swapIntegers(num1, num2);
	
	return 0;
}
