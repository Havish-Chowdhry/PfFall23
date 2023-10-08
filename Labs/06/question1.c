/*
Programmer: Havish Chowdhry
Description: Write a C Program that takes any number from the user and identifies if the number is a perfect number or not.
Date: 03/10/2023
*/

#include <stdio.h>
int main()  
{
 	int index = 2, total = 1;
 	int number;
 	
 	printf("Enter a number: ");
 	scanf("%d", &number);

	for (index=1; (index <= number/2); index++) 
	{
		if (number % index == 0) 
		{
			total+=index; 
		}
	}
	if (total==number)
	{
		printf("The number is a perfect number %d ", number);
	}
	else 
	{
		printf("the number is not a perfect number");
	}
	return 0;
}
