/*
Programmer: Havish Chowdhry
Desc:   Pioneers Limited corporation has 4 departments: HR, Finance, Marketing, Logistics. Each
	department consists of 5 employee’s roles/ positions with the following attributes: Name, Role,
	Communication, Teamwork, Creativity. The values for communication, teamwork, and creativity
	should be between 1 and 100 (inclusive).
	Your program must use structures to implement the following:
	A) For each of the 4 departments, initialize the attributes of their employees randomly using
	the rand () function.
	a. Create an initial pool of 20 names from which the names will be randomly assigned
	to each employee. A name cannot be repeated twice. If your names are same as
	any other student, then you will be awarded 0 marks.
	b. Each department will have exactly the following roles: Director, Executive,
	Manager, Employee, Trainee. A role cannot be repeated twice in the same
	department. The values for communication, teamwork, and creativity should be
	between 1 and 100 (inclusive), also randomly assigned.
	
	B) The retail company wants to give an award for “Best Department”. To find this out, you
	must compute the sum of values of each employee for all the departments. Then compare
	these 4 sums with each other to find out the best department. Your program should
	output the sum for each department along with the winner of the award of “Best
	Department”. You must print the Best Department details in the tabular form with all
	employees and their attributes.
Date: 07/12/2023

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
    char name[50];
    char role[50];
    int communication;
    int teamwork;
    int creativity;
} Employee;

typedef struct 
{
    char department[20];
    Employee emp[5];
} Department;

int isNameUsed(int usedNames[], int index) 
{
    return usedNames[index];
}

const char *generateNames(int availableNames[])
{
    char* names[20] = {"Abdullah", "Haris", "Havish", "Rishabh", "Sindhya", "Krish", "Vayk", "Sineha", "Minerva", "Devin", "Vivan", "Sufyan", "Parshant", "Ashvin", "Taha", "Zaidi", "Nauman", "Shahmir", "Nabira", "Nafae"}; 
    int randomIndex;
    do {
        randomIndex = rand() % 20;
    } while (isNameUsed(availableNames, randomIndex));
    
    availableNames[randomIndex] = 1;  
    return names[randomIndex];
}

void initializeEmployee(Employee *emp, int availableNames[])
{
    strcpy(emp->name, generateNames(availableNames));
    char* roles[5] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
    
    int roleIndex = rand() % 5;
    strcpy(emp->role, roles[roleIndex]);
    emp->communication = rand() % 100 + 1;
    emp->teamwork = rand() % 100 + 1;
    emp->creativity = rand() % 100 + 1;
}

void initializeDepartment(Department *department) 
{
    int index;
    int usedNames[20] = {0};
    for (index = 0; index < 5; index++) {
        initializeEmployee(&department->emp[index], usedNames);
    }
}

int DepartmentSum(Department *dept)
{
    int index, total = 0;
    for (index = 0; index < 5; index++)
    {
        total += dept->emp[index].communication +  dept->emp[index].teamwork + dept->emp[index].creativity;
    } 
    return total;
}

void printDepartmentDetails(Department *dept)
{
	//padding is used just to make the output look presentable
    printf("Department: %s\n", dept->department);
    printf("| %-15s | %-15s | %-15s | %-15s | %-15s | %-15s |\n", "Name", "Role", "Communication", "Teamwork", "Creativity", "Total"); 
    int index;
    for (index = 0; index < 5; index++)
    {
        printf("| %-15s | %-15s | %-15d | %-15d | %-15d | %-15d |\n", dept->emp[index].name, dept->emp[index].role,
               dept->emp[index].communication, dept->emp[index].teamwork, dept->emp[index].creativity,
               dept->emp[index].communication + dept->emp[index].teamwork + dept->emp[index].creativity);
    }

    printf("\n");
}


int main() 
{
	srand(time(NULL));
    Department departments[4]; // object of the struct
    
    strcpy(departments[0].department, "HR");
    initializeDepartment(&departments[0]);

    strcpy(departments[1].department, "Marketing");
    initializeDepartment(&departments[1]);

    strcpy(departments[2].department, "Finance");
    initializeDepartment(&departments[2]);

    strcpy(departments[3].department, "Logistics");
    initializeDepartment(&departments[3]);

    // Compute and compare the sums
    int maxSum = -1;
    int bestDepartmentIndex = -1;
    int x;
    
    for (x = 0; x < 4; x++)
    {
        int sum = DepartmentSum(&departments[x]);
        printDepartmentDetails(&departments[x]);

        if (sum > maxSum)
        {
            maxSum = sum;
            bestDepartmentIndex = x;
        }
    }
    
    printf("Best Department: %s\n", departments[bestDepartmentIndex].department);
    return 0;   
}
