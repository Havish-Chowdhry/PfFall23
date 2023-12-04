/*
Programmer: Havish Chowdhry 
Desc: You need to implement the following 2 struct.
      struct Student{}; struct Register{};

      Student contains attributes StudentId, FirstName, LastName, cellno, email.
      Register contains the attributes CourseId, CourseName.
      Now you need to inherit the Register struct in Student struct. It means that the student struct holds the
      variable of Register struct variable. After that you need to take input for 5 students and then print them
      [Hint: Declare array of struct Student std[5]; for 5 students ] 
Date: 04/12/2023
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int CourseId;
    char CourseName[50];
} Register;

typedef struct {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    char cellno[20];
    char email[50];
    Register reg;
} Student;

int main() {
    Student stdDetails[5];
    int index;

    for (index = 0; index < 5; index++) {
        printf("Enter the details for student %d\n", index + 1);

        printf("Enter Student ID: ");
        scanf("%d", &stdDetails[index].StudentId);

        // Clear the input buffer
        while (getchar() != '\n');

        printf("Enter First Name: ");
        fgets(stdDetails[index].FirstName, sizeof(stdDetails[index].FirstName), stdin);

        stdDetails[index].FirstName[strcspn(stdDetails[index].FirstName, "\n")] = '\0'; // Removing newline character

        printf("Enter Last Name: ");
        fgets(stdDetails[index].LastName, sizeof(stdDetails[index].LastName), stdin);

        stdDetails[index].LastName[strcspn(stdDetails[index].LastName, "\n")] = '\0'; // Removing newline character

        printf("Enter Cell No.: ");
        fgets(stdDetails[index].cellno, sizeof(stdDetails[index].cellno), stdin);

        stdDetails[index].cellno[strcspn(stdDetails[index].cellno, "\n")] = '\0'; // Removing newline character

        printf("Enter Email ID: ");
        fgets(stdDetails[index].email, sizeof(stdDetails[index].email), stdin);

        stdDetails[index].email[strcspn(stdDetails[index].email, "\n")] = '\0'; // Removing newline character

        printf("Enter Course ID: ");
        scanf("%d", &stdDetails[index].reg.CourseId);

        // Clear the input buffer
        while (getchar() != '\n');

        printf("Enter Course Name: ");
        fgets(stdDetails[index].reg.CourseName, sizeof(stdDetails[index].reg.CourseName), stdin);

        stdDetails[index].reg.CourseName[strcspn(stdDetails[index].reg.CourseName, "\n")] = '\0'; // Removing newline character
    }

    printf("\nDetails of 5 students:\n");
    for (index = 0; index < 5; index++) {
        printf("Student %d:\n", index + 1);
        printf("  Student ID: %d\n", stdDetails[index].StudentId);
        printf("  Name: %s %s\n", stdDetails[index].FirstName, stdDetails[index].LastName);
        printf("  Cell Number: %s\n", stdDetails[index].cellno);
        printf("  Email: %s\n", stdDetails[index].email);
        printf("  Course ID: %d\n", stdDetails[index].reg.CourseId);
        printf("  Course Name: %s\n", stdDetails[index].reg.CourseName);
        printf("\n");
    }

    return 0;
}
