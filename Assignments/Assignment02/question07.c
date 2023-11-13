/* 
Programmer: Havish Chowdhry
Desc: Your task is to develop a program to manage and sort shirt details for a clothing store. 
      The shirt details include the age and price for each shirt. 
      Write a C program that sorts the shirt details based on age in ascending order and, within the same age, sorts them based on price in descending order. 
      You are given 2D array: ages (representing the age of each shirt) and prices (representing the price of each shirt). Assume any number of shirts and its prices by yourself.  
      Your expected output will show two different sorted list i.e., Sorted list in ascending order with respect to Age and Sorted list in descending order with respect to Price. 
Date: 01/11/2023
*/
// Approach used is insertion sort.

#include <stdio.h>

void sortByAge(int n, int shirts[n][2])
{
	// using insertion sort
	int index1, AgeToInsert, PriceToInsert;
	for (index1 = 1; index1 < n; index1++)
	{
		AgeToInsert = shirts[index1][0];
		PriceToInsert = shirts[index1][1];
		int index2 = index1 - 1;

		while (index2 >= 0 && shirts[index2][0] > AgeToInsert)
		{
			shirts[index2 + 1][0] = shirts[index2][0];
			shirts[index2 + 1][1] = shirts[index2][1];
			index2--;
		}
		
		shirts[index2 + 1][0] = AgeToInsert;
		shirts[index2 + 1][1] = PriceToInsert;	
	}
}
	
void sortByPriceDescending(int n, int shirts[n][2]) 
{
    // using insertion sort

    int index1, AgeToInsert, PriceToInsert;
    for (index1 = 1; index1 < n; index1++) 
	{
        AgeToInsert = shirts[index1][0];
        PriceToInsert = shirts[index1][1];
        int index2 = index1 - 1;

        while (index2 >= 0 && shirts[index2][1] < PriceToInsert) 
		{
            shirts[index2 + 1][0] = shirts[index2][0];
            shirts[index2 + 1][1] = shirts[index2][1];
            index2--;
        }
        
        shirts[index2 + 1][0] = AgeToInsert;
		shirts[index2 + 1][1] = PriceToInsert;	
	}
}

int main ()
{
	int n;
	printf("Enter the number of elements of array (N): ");
	scanf("%d", &n);
	
	int shirtDetails[n][2];
	
	int index = 0;
	for (index = 0; index < n; index++)
	{
		printf("Enter the age of shirt no. %d: ", index + 1);
		scanf("%d", &shirtDetails[index][0]);
		
		printf("Enter the price of shirt no. %d: ", index + 1);
		scanf("%d", &shirtDetails[index][1]);
	}	

	printf("The shirt details are:\n");
	for (index = 0; index < n; index++) 
	{
		printf("Shirt %d Age: %d, Price: %d\n", index + 1, shirtDetails[index][0], shirtDetails[index][1]);	
	}
	
	sortByAge(n, shirtDetails);

    printf("\nSorted list in ascending order with respect to Age: \n");
    for (index = 0; index < n; index++) 
	{
        printf("Shirt %d Age: %d, Price: %d\n", index + 1, shirtDetails[index][0], shirtDetails[index][1]);
    }

    sortByPriceDescending(n, shirtDetails);

    printf("\nSorted list in descending order with respect to Price:\n");
    for (index = 0; index < n; index++) 
	{
        printf("Shirt %d Age: %d, Price: %d\n", index + 1, shirtDetails[index][0], shirtDetails[index][1]);
    }

	return 0;
}
