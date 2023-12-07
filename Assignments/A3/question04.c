/*
Programmer: Havish Chowdhry
Desc: Let's suppose you have the following three 2D arrays named Worker, Bonus, and Tile with the given data.
There is one common column i.e. Worker_ID in all these arrays.
TASK: Write a ‘C' program for each of the following tasks:
a. Display the details of the workers having a maximum salary for each department.
b. Fetch departments along with the total salaries paid for each of them. 
Date: 07/12/2023
*/

#include <string.h>
#include <stdio.h>

typedef struct
{
	char workerID[10];
	char firstName[50];
	char lastName[50];
	int salary;
	char joiningDate[50];
	char department[10];
} Worker;

typedef struct 
{
	char workerID[10];
	char joiningDate[50];
	int bonusAmount;
} Bonus;

typedef struct 
{
	char workerID[10];
	char department[20];
	char joiningDate[30];
} Title;

char *departmentName [3] = {"HR", "Admin", "Account"};

void maximumSalaryWorker(Worker workers[], int n, char *department)
{
	int maxSalary = -1, workerIndex = -1;
	int index;
	for (index=0; index<n; index++)
	{
		if (strcmp(workers[index].department, department) == 0 && (workers[index].salary > maxSalary))
		{
			maxSalary=workers[index].salary;
			workerIndex= index;
		}
	}
	
	if (workerIndex != -1) 
	{
        // Print or use the information about the worker with the max salary in a table format using padding
        printf("| %-5s | %-11s | %-11s | %-11d | %-20s | %-11s |\n", 
               workers[workerIndex].workerID, workers[workerIndex].firstName,
               workers[workerIndex].lastName, workers[workerIndex].salary,
               workers[workerIndex].joiningDate, workers[workerIndex].department);
    } 
	else 
	{
        printf("No worker found in %s department\n", department);
    }
}

int totalSalary(Worker workers[], int n, char *department)
{
	int index, totalSalary = 0; // cannot initialize to -1 as then addition would result in wrong output
	for (index=0; index<n; index++)
	{
		if (strcmp(workers[index].department, department) == 0)
		{
			totalSalary = totalSalary + workers[index].salary;
		}
	}
	return totalSalary;
}

void displayMax (Worker workers[], int n)
{
	int index; 
	for (index=0; index<3; index++)
	{
		maximumSalaryWorker(workers, n, departmentName[index]);
	}
}

void displayTotal(Worker workers[], int n)
{
	int index;
	for (index=0; index<3; index++)
	{
		printf("%s-%d\n", departmentName[index], totalSalary(workers, n, departmentName[index]));
	}
}


int main()
{
    Worker workers[8] = {
        {"001", "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {"006", "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
        {"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    Bonus bonuses[5] = {
        {1, "2016-02-20 00:00:00", 5000},
        {2, "2016-06-11 00:00:00", 3000},
        {3, "2016-02-20 00:00:00", 4000},
        {1, "2016-02-20 00:00:00", 4500},
        {2, "2016-06-11 00:00:00", 3500}
    };

    Title titles[8] = {
        {1, "Manager", "2016-02-20 00:00:00"},
        {2, "Executive", "2016-06-11 00:00:00"},
        {8, "Executive", "2016-06-11 00:00:00"},
        {5, "Manager", "2016-06-11 00:00:00"},
        {4, "Manager", "2016-06-11 00:00:00"},
        {7, "Asst. Manager", "2016-06-11 00:00:00"},
        {6, "Executive", "2016-06-11 00:00:00"},
        {3, "Lead", "2016-06-11 00:00:00"}
    };
	
	printf("Creator: Havish Chowdhry\n");
	printf("ID = 23K0058\n");
    printf("\nHighest salaries:\n");
    displayMax(workers, 8);
    printf("\nTotal salaries:\n");
    displayTotal(workers, 8);

    return 0;
}
