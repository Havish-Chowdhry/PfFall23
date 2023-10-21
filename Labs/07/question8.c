/*
Programmer: Havish Chowdhry
Desc: Take an array with N elements as input, and sort the array into ascending order and then print the sorted version.  
Date: 21/10/2023
*/

#include <stdio.h>

int main ()
{
	int n, index;
	printf("Enter the number of elements to be stored in the array (n): ");
	scanf("%d", &n);
	
	int myArray[n]; // a 1D array of n elements 
	
	// loop to store the elements in the array	
	for (index= 0; index < n; index ++)
	{
		printf("Enter the element: ");
		scanf("%d", &myArray[index]);
	}
	
	// loop to print the unsorted array
	printf("Original array: ");
    for (index = 0; index < n; index++) {
        printf("%d ", myArray[index]);
    }
    printf("\n");

	
	// loop to iterate through the array
	for (index = 0; index< n - 1 ; index ++)
	{
		for (int InnerIndex = 0; InnerIndex< n-index-1; InnerIndex++) // loop to sort the array
		{
			if (myArray[InnerIndex] > myArray[InnerIndex+1]) // if first element is greater than second
			{
				int temp = myArray[InnerIndex];
				myArray[InnerIndex] = myArray[InnerIndex+1];  
				myArray[InnerIndex+1] = temp;
			}
			
		} // end inner for loop
		
	}// end outer for loop
	
	// loop to print the sorted array
	printf("Sorted array: ");
    for (index = 0; index < n; index++) {
        printf("%d ", myArray[index]);
    }
    printf("\n");

    return 0;
} // end main 
