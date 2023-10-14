/*
Programmer: Havish Chowdhry
Date: 15/10/23
Description: Counting the frequency of elemnts in the array 
*/

#include <stdio.h>

int main ()
{
	int index, n, frequency;; // n being the number of elements in the array; 
	int element, innerIndex;  
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	// initialising array with n elements where n would be input by the user
	int myArray[n];
	
	for (index = 0; index < n; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}
	
	for (index = 0; index< n; index ++ )
	{
		printf("%d ", myArray[index]);
	}
	
	int visited[n];

    // Initialize visited array with zeros
    for (index = 0; index < n; index++) 
	{
        visited[index] = 0;
    }

	for (index = 0; index < n; index++) 
	{
    	if (visited[index] == 1) 
		{
        	continue; // Skip already visited elements
		}
	
		frequency=1;
	
		for (innerIndex = index + 1; innerIndex< n; innerIndex++)
		{
			if (myArray[index] == myArray[innerIndex]) 
			{
				frequency = frequency + 1;
				visited[innerIndex] = 1;
			}
		}
		printf("\n");
		printf("Frequency of %d: %d", myArray[index], frequency);	
	}
	
	return 0;
} // end main 
