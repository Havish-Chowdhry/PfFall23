/*
Programmer: Havish Chowdhry
Desc: Write a C program that implements a function to swap the values of two variables using only pointers (without using any arithmetic or temporary variables). 
      Your function should be generic and work for variables of different data types. 
      Hint: Use bitwise operator XOR.
Date: 18/11/2023
*/

#include <stdio.h>

void universalSwap(void* var1, void* var2, const char dataType)
{
    int index;

    if (dataType == '\0')
    {
        printf("Error. No information provided about the data type of the variable.\n");
        return;
    }

    int arraySize;

    switch (dataType)
    {
        case 'c':
            arraySize = sizeof(char);
            break;
        case 'i':
            arraySize = sizeof(int);
            break;
        case 'd':
            arraySize = sizeof(double);
            break;
        case 'f':
            arraySize = sizeof(float);
            break;
        // more cases can be added

        default:
            printf("Error. Unsupported data type.\n");
            return;
    }

    unsigned char* value1 = (unsigned char*)var1; 
    unsigned char* value2 = (unsigned char*)var2;

    for (index = 0; index < arraySize; index++) 
    {
        value1[index] ^= value2[index];
        value2[index] ^= value1[index];
        value1[index] ^= value2[index];
    }
}

int main()
{
    int num1, num2;
    printf("Enter an integer value for num1: ");
    scanf("%d", &num1);
    printf("Enter an integer value for num2: ");
    scanf("%d", &num2);

    universalSwap(&num1, &num2, 'i');

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    float float1, float2;
    printf("Enter a floating point value for float1: ");
    scanf("%f", &float1);
    printf("Enter a floating point value for float2: ");
    scanf("%f", &float2);

    universalSwap(&float1, &float2, 'f');

    printf("After swap: float1 = %.2f, float2 = %.2f\n", float1, float2);

    double double1, double2;
    printf("Enter a double value for double1: ");
    scanf("%lf", &double1);
    printf("Enter a double value for double2: ");
    scanf("%lf", &double2);

    universalSwap(&double1, &double2, 'd');

    printf("After swap: double1 = %lf, double2 = %lf\n", double1, double2);

    char char1, char2;
    printf("Enter a character for char1: ");
    scanf(" %c", &char1);
    printf("Enter a character for char2: ");
    scanf(" %c", &char2);

    universalSwap(&char1, &char2, 'c');

    printf("After swap: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
