/*
Programmer: Havish Chowdhry
Desc: Write a C Program to find the minimum and maximum number in an array. 
Date: 09/10/2023
*/

#include <stdio.h>

int main ()
{ // start main
	int index, x, max = 0; // x being the number of elements in the array; 
	
	printf("Enter the number of elements: ");
	scanf("%d", &x);
	
	// initialising array with x elements where x would be input by the user
	int myArray[x];
	
	// loop to input and store x elements in array
	for (index = 0; index < x; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}
	
	//initialising the minimum variable with the first element stored in the array
	int min = myArray[0];
	
	// loop to print the array
	for (index = 0; index< x; index ++ )
	{
		printf("%d ", myArray[index]);
	}
	
	// loop to find the maximum and minimum element in the array
	for (index = 0; index< x; index++)
	{
		if (myArray[index] > max) // comparing each element of the array with the max
		{
			max = myArray[index]; // if current > max then max = current
		}
		
		if (myArray[index] < min) // comparing each element of the array with the min
		{
			min = myArray[index]; // if current < min then min = current
		}
	}
	
	printf("\n");
	printf("Maximum = %d\n", max);
	printf("Minimum = %d", min);
	return 0;
} // end main
