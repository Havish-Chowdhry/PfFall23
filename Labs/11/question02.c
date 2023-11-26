/*
Programmer: Havish Chowdhry
Desc: An automobile company has a serial number for engine parts starting from AA0 to FF9. The other
      characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity manufactured.
      ● Specify a structure to store information corresponding to a part.
      ● Write a program to retrieve information on parts with serial numbers between BB1 and CC6. 
Date: 26/11/2023
*/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char serialNum[50];
    int manufactureYear;
    char material[50];
    int quantity;
} Parts;

int main() 
{
    int N;
    printf("Enter the amount of parts: ");
    scanf("%d", &N);

    Parts parts[N];
    int index;

    // Enter parts
    for (index = 0; index < N; index++) {
        printf("[%d] Enter the serial number (AA0-FF9): ", index + 1);
        scanf("%s", parts[index].serialNum);

        printf("[%d] Enter manufacture year: ", index + 1);
        scanf("%d", &parts[index].manufactureYear);

        printf("[%d] Enter material: ", index + 1);
        scanf("%s", parts[index].material);

        printf("[%d] Enter quantity: ", index + 1);
        scanf("%d", &parts[index].quantity);

        // Clear the input buffer
        while (getchar() != '\n');
    }

    // Printing parts
    printf("\nPrinting the required parts.\n");
    for (index = 0; index < N; index++) 
	{
        if (strcmp(parts[index].serialNum, "BB1") >= 0 && strcmp(parts[index].serialNum, "CC6") <= 0) {
            printf("\n\n[%d] Serial number (AA0-FF9): %s\n", index + 1, parts[index].serialNum);
            printf("[%d] Manufacture year: %d\n", index + 1, parts[index].manufactureYear);
            printf("[%d] Material: %s\n", index + 1, parts[index].material);
            printf("[%d] Quantity: %d\n", index + 1, parts[index].quantity);
        }
    }
	return 0;
}
