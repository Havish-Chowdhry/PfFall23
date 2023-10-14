/*
Programmer: Havish Chowdhry
Date: 15/10/23
Description: Counting the frequency of elemnts in the array 
*/

#include <stdio.h>

int main ()
{
	int index, n, frequency;; // n being the number of elements in the array; 
	int innerIndex;  
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	// initialising array with n elements where n would be input by the user
	int myArray[n];
	
	// loop to store all elements in the array 
	for (index = 0; index < n; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}
	
	// loop to print the array 
	for (index = 0; index< n; index ++ )
	{
		printf("%d ", myArray[index]);
	}
	
	int visited[n]; // initalising an array that will keep track of duplicates or same number that has already been visited.
	// the array is initialised with variable length 

	// Initialize visited array with zeros
    	for (index = 0; index < n; index++) 
	{
        	visited[index] = 0;
	}
	
	// loop that does the counting of the frequency. This loop is runned through each element in the array.
	for (index = 0; index < n; index++) 
	{
    		if (visited[index] == 1) 
		{
        	     continue; // Skip already visited elements
		}
	
		frequency=1; // resets to 1 after every iteration.
		
		// this loop compares the current element with every other element in the array
		for (innerIndex = index + 1; innerIndex< n; innerIndex++) // inner index starts from one more than the outer index
		{
		
			if (myArray[index] == myArray[innerIndex]) // comparison 
			{
		
				frequency = frequency + 1; // when duplicates found, it increments the counter that is the frequency.
				visited[innerIndex] = 1; // set to 1 that that this particular index is checked all duplicates have been counted.
			}
		}
		printf("\n");
		printf("Frequency of %d: %d", myArray[index], frequency);	
	}
	
	return 0;
} // end main 	

} // end main 
