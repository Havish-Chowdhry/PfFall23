/*
Programmer: Havish Chowdhry
Desc: 4. Write a structure to store the names, salary and hours of work per day of 10 employees in a
      company. Write a program to increase the salary depending on the number of hours of work per
      day as follows and then print the name of all the employees along with their final salaries.
      ● Hours of work per day 8 10 >=12
      ● Increase in salary $50 $100 $150
Date: 21/11/2023
*/


#include <stdio.h>

typedef struct 
{
    char Name[50];
    double salary;
    int hoursWorked;
    
} Employees;

double calcSalaryIncrease(int hoursWorked)
{
    if (hoursWorked >= 12)
    {
        return 150.0;
    }
    else if (hoursWorked >= 10)
    {
        return 100.0;
    }
    else if (hoursWorked >=8)
    {
        return 50.0;
    }
    else 
    {
        return 0.0;
    }
}

int main()
{
    Employees employees[10];
    
    int index;
    for (index = 0; index < 10; index++)
    {
        printf("Enter the details for employee %d\n", index + 1);
        printf("Enter the name: ");
        scanf("%s", employees[index].Name);
        printf("Enter the base salary: ");
        scanf("%lf", &employees[index].salary);
        printf("Enter the hours worked per day: ");
        scanf("%d", &employees[index].hoursWorked);
    }
    
    for (index = 0; index < 10; index++)
    {
        double increment = calcSalaryIncrease(employees[index].hoursWorked);
        employees[index].salary += increment;
    }
    
    
    printf("\nFinal salaries of all the employees:\n");
    for (index = 0; index < 10; index++)
        printf("Employee %d: %s - Salary: $%.2lf\n", index + 1, employees[index].Name, employees[index].salary);

    return 0;
}
