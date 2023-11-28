#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char code[10];
    char name[50];
    float gpa;
    int semester;
} Course;

// Function prototypes
void inputCourse(Course *course);
void saveToFile(Course *courses, int count);
void viewTranscript(Course *courses, int count);
float calculateCGPA(Course *courses, int count);
float calculateSGPA(Course *courses, int count, int semester);

int main()
{
    int choice;
    int count = 0;
    Course courses[50];

    do
    {
        printf("\n1. Input Course\n");
        printf("2. View Transcript\n");
        printf("3. Calculate CGPA\n");
        printf("4. Calculate SGPA\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputCourse(&courses[count]);
            count++;
            break;
        case 2:
            viewTranscript(courses, count);
            break;
        case 3:
            printf("CGPA: %.2f\n", calculateCGPA(courses, count));
            break;
        case 4:
        {
            int semester;
            printf("Enter semester for SGPA calculation: ");
            scanf("%d", &semester);
            printf("SGPA for Semester %d: %.2f\n", semester, calculateSGPA(courses, count, semester));
        }
        break;
        case 5:
            saveToFile(courses, count);
            printf("Data saved to file. Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);
    return 0;
}

void inputCourse(Course *course)
{
    printf("Enter Course Code: ");
    scanf("%s", course->code);
    printf("Enter Course Name: ");
    scanf(" %[^\n]", course->name);
    printf("Enter GPA: ");
    scanf("%f", &course->gpa);
    printf("Enter Semester: ");
    scanf("%d", &course->semester);
}

void saveToFile(Course *courses, int count)
{
    FILE *myfile = fopen("MarksTranscript.txt", "w");
    if (!myfile)
    {
        printf("Error opening the file\n");
        return;
    }
	int index;
    for (index = 0; index < count; index++)
    {
        fprintf(myfile, "%s\t %s\t %.2f\t %d\n", courses[index].code, courses[index].name, courses[index].gpa, courses[index].semester);
    }
    fclose(myfile);
}

void viewTranscript(Course *courses, int count)
{
	int index = 0;
    printf("\n Display Transcript:\n");
    printf("Course Code\t Course Name\t GPA\t Semester\n");
    for (index = 0; index < count; index++)
    {
        printf("%s\t %s\t %.2f\t %d\n", courses[index].code, courses[index].name, courses[index].gpa, courses[index].semester);
    }
}

float calculateCGPA(Course *courses, int count)
{
    float totalGPA = 0;
    int index;
    for (index = 0; index < count; index++)
    {
        totalGPA += courses[index].gpa;
    }
    return count > 0 ? totalGPA / count : 0.0;
}

float calculateSGPA(Course *courses, int count, int semester)
{
    float totalGPA = 0;
    int coursesInSemester = 0;
	int index;
    for (index = 0; index < count; index++)
    {
        if (courses[index].semester == semester)
        {
            totalGPA += courses[index].gpa;
            coursesInSemester++;
        }
    }

    return coursesInSemester > 0 ? totalGPA / coursesInSemester : 0.0;
}
