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
