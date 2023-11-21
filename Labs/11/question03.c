/*
Programmer: Havish Chowdhry
Desc: Write a program to compare two dates entered by the user. Make a structure named Date to store
the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal"
otherwise display "Dates are not equal".
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
	Date date1;
	
	printf("Enter the first date (day,month,year): ");
	scanf("%d/%d/%d", &date1.Day, &date1.Month, &date1.Year);
	
	Date date2;
	printf("Enter the second date (day,month,year): ");
	scanf("%d/%d/%d", &date2.Day, &date2.Month, &date2.Year);
	
	if (date1.Day==date2.Day && date1.Month==date2.Month && date1.Year==date2.Year)
	{
		printf("Dates are Equal");
	}
	else 
	{
		printf("Dates are not equal");
	}
	
	return 0;
}
