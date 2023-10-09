/*
Programmer: Havish Chowdhry
Desc: Write a C Program that takes a user input array and prints the sum of its elements. 
Date: 09/10/2023
*/

#include <stdio.h>

int main ()
{ // start main
	int n, index, sum = 0; // n is used for asking the number of elements stored in the array
	
	// asking the number of elements to be stored in the array
	printf("Enter the number of elements to be stored in the array: ");
	scanf("%d", &n);
	
	// initialising array with n elements where n would be input by the user
	int myArray[n];
	
	// loop to sum all the elements in the array
	for (index = 0; index<n; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
		sum = sum + myArray[index];
	}
	
	printf("The sum of the elements stored in the array is %d", sum);
	return 0;
} // end main
