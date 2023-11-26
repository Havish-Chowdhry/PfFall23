/*
Programmer: Havish Chowdhry
Desc: Using Nested structs and displaying information from them
Date: 26/11/2023
*/

#include <stdio.h>

typedef struct {
    int employeeID;
    char employee_name[50];
    int salary;
} Employee;

typedef struct {
    char organization_name[50];
    char organization_number[50];
    Employee emp;
} Organization;

int main() {
    int n;

    printf("Enter the number of organizations: ");
    scanf("%d", &n);

    Organization orgs[n];
    int index;

    for (index = 0; index < n; index++) {
        printf("Enter details for Organization %d:\n", index + 1);

        printf("Enter the organization name: ");
        scanf("%s", orgs[index].organization_name);

        printf("Enter the organization number: ");
        scanf("%s", orgs[index].organization_number);

        printf("Employee id: ");
        scanf("%d", &orgs[index].emp.employeeID);

        printf("Employee name: ");
        scanf("%s", orgs[index].emp.employee_name);

        printf("Employee Salary: ");
        scanf("%d", &orgs[index].emp.salary);
    }

    for (index = 0; index < n; index++) {
        printf("\nDetails for Organization %d:\n", index + 1);
        printf("The size of the organization is: %d\n", sizeof(orgs[index]));
        printf("Organisation Name: %s\n", orgs[index].organization_name);
        printf("Organisation Number: %s\n", orgs[index].organization_number);
        printf("Employee id: %d\n", orgs[index].emp.employeeID);
        printf("Employee name: %s\n", orgs[index].emp.employee_name);
        printf("Employee Salary: %d\n", orgs[index].emp.salary);

    }

    return 0;
}
