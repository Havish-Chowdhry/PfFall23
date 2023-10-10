/*
Programmer: Havish Chowdhry
Desc: Given an array of integers of size N and an integer “d”, the task is to rotate the array elements to the left by d positions. Note: Solve the question without declaring another array. (The input array itself must be modified).
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{ // start main

	int n, index; // n being the variable which would specify the number of elements stored in the array
	
	printf("Enter the number of elements n to be stored in the array: ");
	scanf("%d", &n);
	
	// declaring an array of n elements 
	int myArray[n];
	
	// loop to store n elements in the array
	for (index = 0; index<n; index ++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}
    
  // loop to print the initial array
	for (index = 0; index<n; index ++ )
	{
		printf("%d ", myArray[index]);
	}
	printf("\n");
	
	int d; // variable to tell how many times to rotate the array 
	printf("Enter a value of d to rotate elements of array by d: ");
	scanf("%d", &d);
    
  // loop to shift the element of the array d times
	while (d>0)
	{
		int firstElement = myArray[0]; // assiging first element of array to a temp variable named firstElement
		for (index = 0; index < n-1 ; ++index)
		{
			myArray[index] = myArray[index + 1]; // updating the array
		}
		myArray[index] = firstElement; // adding the first element of the initial array in the end of the rotated array.
	d--;
	} // end while loop
    
  // loop to print the rotated array by d positions 
	for (index = 0; index<n; index++)
	{
	  printf("%d ", myArray[index]);
	}
	return 0;
} // end main
