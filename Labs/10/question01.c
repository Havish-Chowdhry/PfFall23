/*
Programmer: Havish Chowdhry
Desc: For this task you are creating a universal array printing function. 
      Create a function in C that takes a void* as an argument along with size and some way of know what kind of data is stored. 
      Then prints the values stored in the memory location pointed to by the void pointer. Use appropriate casting.
Date: 14/11/2023
*/

#include <stdio.h>
#include <string.h>

void universalArray(void* myPointer, int ArraySize, const char* dataType)
{
    int index;

    if (dataType == NULL)
    {
        printf("Error. No information provided about the data type of the array.");
        return;
    }

    if (strcmp(dataType, "int") == 0)
    {
        int* intArray = (int*)myPointer;
        for (index = 0; index < ArraySize / sizeof(int); index++)
        {
            printf("%d ", intArray[index]);
        }
    }
    else if (strcmp(dataType, "double") == 0)
    {
        double* doubleArray = (double*)myPointer;
        for (index = 0; index < ArraySize / sizeof(double); index++)
        {
            printf("%lf ", doubleArray[index]);
        }
    }
    else if (strcmp(dataType, "char") == 0)
    {
        char* charArray = (char*)myPointer;
        for (index = 0; index < ArraySize / sizeof(char); index++)
        {
            printf("%c ", charArray[index]);
        }
    }
    else
    {
        printf("Unsupported datatype");
    }

    printf("\n");
}

int main()
{
    int n, index;
    printf("Enter the number of elements to store in the array: ");
    scanf("%d", &n);

    int intArray[n];
    double doubleArray[n];
    char charArray[n];

    printf("Enter %d elements integers for intArray: ", n);
    for (index = 0; index < n; index++)
    {
        scanf("%d", &intArray[index]);
    }
    
    printf("Enter %d elements double for doubleArray: ", n);
    for (index = 0; index < n; index++)
    {
        scanf("%.2lf", &doubleArray[index]);
    }
    
    printf("Enter %d elements char for charArray: ", n);
    for (index = 0; index < n; index++)
    {
        scanf("%c", &charArray[index]);
    }
    
    
    universalArray(intArray, sizeof(intArray), "int");
    universalArray(doubleArray, sizeof(doubleArray), "double");
    universalArray(charArray, sizeof(charArray), "char");

    return 0;
}
