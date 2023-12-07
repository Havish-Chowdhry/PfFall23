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
/*
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeToCombine(char *personalFile, char *departmentFile, char *combineFile, int totalrecordIDs)
{
    FILE *personalFptr, *departmentFptr, *combineFptr;
    char linePersonal[100], lineDepartment[100];

    personalFptr = fopen(personalFile, "r");
    if (personalFptr == NULL)
    {
        printf("Error opening Personal.txt\n");
        return;
    }

    departmentFptr = fopen(departmentFile, "r");
    if (departmentFptr == NULL)
    {
        printf("Error opening Department.txt\n");
        fclose(personalFptr);
        return;
    }

    combineFptr = fopen(combineFile, "w");
    if (combineFptr == NULL)
    {
        printf("Error opening Combine.txt\n");
        fclose(personalFptr);
        fclose(departmentFptr);
        return;
    }

    fgets(linePersonal, sizeof(linePersonal), personalFptr); // Skip header in Personal.txt
    fprintf(combineFptr, "ID Name Salary\n");

	int index;
    for (index = 0; index < totalrecordIDs; index++)
    {
        int currentRecordID;
        printf("Enter record ID %d: ", index + 1);
        scanf("%d", &currentRecordID);

        fseek(departmentFptr, 0, SEEK_SET); // Reset the departmentFptr to the beginning of the file for each recordID
        int matchFound = 0;

        while (fgets(lineDepartment, sizeof(lineDepartment), departmentFptr) != NULL)
        {
            char *departmentID = strtok(lineDepartment, " ");
            char *name = strtok(NULL, "\n");

            fseek(personalFptr, 0, SEEK_SET);
            int matchFound = 0;
            
            while (fgets(linePersonal, sizeof(linePersonal), personalFptr) != NULL)
            {
                char *personalID = strtok(linePersonal, " ");
                char *salary = strtok(NULL, "\n");

                if (strcmp(departmentID, personalID) == 0 && atoi(departmentID) == currentRecordID)
                {
                    fprintf(combineFptr, "%s %s %s\n",  departmentID, salary, name);
                    matchFound = 1;
                    break;
                }
            }
			if (matchFound)
			{
				break;	
			}		
        }
        break;
    }

    fclose(personalFptr);
    fclose(departmentFptr);
    fclose(combineFptr);
}

int main()
{
    int totalrecordIDs = 3;

    int index;
    for (index=0; index<totalrecordIDs; index++)
    {
		printf("Enter the number of records: ");
	    scanf("%d", &totalrecordIDs);    	
	}
    writeToCombine("Personal.txt", "Department.txt", "Combine.txt", totalrecordIDs);

    return 0;
}
