/* 
Programmer : Havish Chowdhry
Desc: In this C program, you are tasked with creating a function called decideCarUsage that helps users decide whether
they should use their car on a particular day of the week. Users provide the numeric part of their car's number and
the day of the week (1 to 7). The program applies a simple rule: even-numbered cars should be used on even days,
and odd-numbered cars on odd days. The function returns 1 if the car should be used and 0 if it should not.
Date: 24/10/2023
*/

#include <stdio.h>

int decideCarUsage(int days, int carNum)
{
	if (days % 2 == 0 && carNum % 2 == 0) || (days %2 != 0 && carNum % 2 != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	} 
}

int main ()
{
	int day, carNum; 
	
	printf("Enter the number of the day from 1 to 7 inclusive: ");
	scanf("%d", &day);
	
	printf("Enter the numeric part of the car: ");
	scanf("%d", &carNum);
	
	if (day>=1 && day<=7)
	{
		if (decideCarUsage(day,carNum))
		{
			printf("You can use your car today");
		}
		else 
		{
			printf("You can not use your car today");
		}
	}
	else
	{
		printf("Invalid Input. Enter the number of the day from 1 to 7 inclusive: ");
		scanf("%d", &day);
	}
	
	return 0; 
}
