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

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    Date Today;
    
    printf("Enter today's day: ");
    scanf("%d", &Today.Day);
    
	printf("Enter today's month: ");
    scanf("%d", &Today.Month);
    
	printf("Enter today's year: ");
    scanf("%d", &Today.Year);
    
    Today.Day += 45;

    while (Today.Day > 30 || Today.Month > 12)
    {
        // Case of months with 31 days
        if (Today.Month == 1 || Today.Month == 3 || Today.Month == 5 || Today.Month == 7 || Today.Month == 8 || Today.Month == 10 || Today.Month == 12)
        {
            if (Today.Day > 31)
            {
                Today.Day = Today.Day - 31;
                Today.Month = Today.Month + 1;
            }
        }
        // Case of months with 30 days
        else if (Today.Month == 4 || Today.Month == 6 || Today.Month == 9 || Today.Month == 11)
        {
            if (Today.Day > 30)
            {
                Today.Day = Today.Day - 30;
                Today.Month = Today.Month + 1;
            }
        }
        // February 28 days and leap year case
        else
        {
            // Leap year
            if (isLeapYear(Today.Year))
            {
                if (Today.Day > 29)
                {
                    Today.Day = Today.Day - 29;
                    Today.Month = Today.Month + 1;
                }
            }
            // Non-leap year
            else
            {
                if (Today.Day > 28)
                {
                    Today.Day = Today.Day - 28;
                    Today.Month = Today.Month + 1;
                }
            }
        }

        if (Today.Month > 12)
        {
            Today.Year += 1;
            Today.Month -= 12;
        }
    }

    printf("The date after 45 days will be:\n");
    printf("%d/%d/%d", Today.Day, Today.Month, Today.Year);

    return 0;
}
