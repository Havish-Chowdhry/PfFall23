/* 
Programmer : Havish Chowdhry
Desc: You are to write a program that will continually prompt the user to enter a positive integer until EOF has been entered via the keyboard. 
For each number entered your program should output the persistence of the number. 
Please note that the correct spelling of persistence is p-e-r-s-i-s-t-e-n-c-e. 
The word does not contain the letter “a”. 
Date: 1/11/2023
*/


#include <stdio.h>
#include <string.h>

int persistence (int number)
{
	int persistenceNumber = 0;
	while (number >= 10)
	{
		int result = 1;
		while (number > 0)
		{
			result =  result * (number % 10);
			number =  number/10;
		}
		number = result;
		persistenceNumber++;
		printf(" -> %d", number);
		if (number>=10)
		printf(" -> "); 
		
	}
	return persistenceNumber;
}

int main ()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	while (number != EOF)
	{
		if (number < 0)
		{	
			printf("Please enter a positive number:\n");
		}
		else 
		{
			printf("Number = %d", number);
			int findPersistence = persistence(number);
			printf("\n");
			printf("Persistence Number = %d", findPersistence);
			break;  
		}
	}
	return 0;
}
