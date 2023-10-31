/* 
Programmer : Havish Chowdhry
Desc: Write a C program with a user-defined function calculate to perform basic arithmetic operations such as addition,
subtraction, multiplication, and division. The program should take two numbers and an operation choice as input,
and then use the function to perform the operation.
Date: 24/10/2023
*/

#include <stdio.h>\

float calculator(int num1, int num2, char operation)
{
	switch (operation)
	{
		case '+':
			return num1 +  num2;
		case '-': 
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/': 
			if (num2 == 0)
			{
				printf("Zero Division Error");
				return 0;
			}
			else 
			{
				return num1/num2;
			}
		default:
			printf("Invalid input. Please enter from the options (+,-,*,/)");	
			return 0;
	}
}

int main ()
{
	float result, num1, num2;
	char operation;
	
	printf("Enter a value for num1: ");
	scanf("%f", &num1);
	
	printf("Enter a value for num2: ");
	scanf("%f", &num2);
	
	printf("Please enter from the options (+,-,*,/): ");
	scanf(" %c", &operation);
	
	result= calculator(num1, num2, operation);
	printf("Result is: %.2f, %c %.2f = %.2f\n ", num1, operation, num2, result);
	
	return 0;	
}
