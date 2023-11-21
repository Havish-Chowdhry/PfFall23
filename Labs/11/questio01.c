/*
Programmer: Havish Chowdhry
Desc: 1. Create a structure to specify data on students given below:
        Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450 students in the college.
        ● Print names of all students who joined in a particular year.
        ● Print the data of a student whose roll number is given.
Date: 21/11/2023
*/

#include <stdio.h>

typedef struct 
{
	int rollNum;
	char Name[450];
	char department[450];
	char course[450];
	int joinYear;
} stdDetails;

int main ()
{
	int numStudents, index;
	printf("Enter the number of students: ");
	scanf("%d", &numStudents);
	
	stdDetails student[numStudents];
	
	for (index=0; index<numStudents; index++)
	{	
		printf("Enter the details for student %d:\n", index+1);
		printf("Enter roll no: ");
		scanf("%d", &student[index].rollNum);
		printf("Enter name: ");
		scanf("%s", &student[index].Name);
		printf("Enter department: ");
		scanf("%s", &student[index].department);
		printf("Enter course name: ");
		scanf("%s", &student[index].course);
		printf("Enter the joining year of the student: ");
		scanf("%d", &student[index].joinYear);
	}
	
	int particularYear;
	printf("Enter the year for which you want the names of the students: ");
	scanf("%d", &particularYear);
	
	for (index=0; index<numStudents; index++)
	{
		if (student[index].joinYear == particularYear)
		{
			printf("%s\n", student[index].Name);
		}
	}
	
	int rollNumber;
	printf("\nEnter the roll no of the student of whom you require the details: ");
	scanf("%d",&rollNumber);
	
	for (index = 0; index<numStudents; index++)
	{
		if (student[index].rollNum == rollNumber)
		{
			printf("Roll Number: %d\n", student[index].rollNum);
			printf("Name: %s\n", student[index].Name);
			printf("Department: %s\n", student[index].department);
			printf("Course: %s\n", student[index].course);
			printf("Joining Year: %d\n", student[index].joinYear);
			break;
		}
	}
	return 0;
}
