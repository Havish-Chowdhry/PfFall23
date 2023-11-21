/*
Programmer: Havish Chowdhry
Desc: Create a structure named Date having day, month and year as its elements. Store the current
date in the structure. Now add 45 days to the current date and display the final date.
Date: 21/11/2023
*/

#include <stdio.h>

typedef struct
{
	int Day;
	int Month;
	int Year;
} Date;

int main ()
{
	Date Today;
	Today.Day = 21;
	Today.Month = 11;
	Today.Year = 2023;
	 
	Today.Day += 45;
	
	while(Today.Day>30 && Today.Month<=12)
	{
		if (Today.Day>30)
		{
			Today.Day=Today.Day-30;
			Today.Month = Today.Month+1;
		}
		
		if (Today.Month>=12)
		{
			Today.Year +=1;
			Today.Month -= 12;
		}
	}
	
	printf("The date after 45 days will be:\n");
	printf("%d/%d/%d", Today.Day, Today.Month, Today.Year);
}
