/*
Programmer: Havish Chowdhry
Desc: Write a program in C to read n number of values in an array and display it in reverse order.
Date: 09/10/2023
*/

#include <stdio.h>

int main ()
{ // start main 
	int index, x; // x being the number of elements in the array; 
	
	printf("Enter the number of elements: ");
	scanf("%d", &x);
	
	// initialising array with x elements where x would be input by the user
	int myArray[x];
	
	// loop to read and store the values in the array
	for (index = 0; index<x; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}
	
	// loop to print the array in reverse order 
	for (index = x-1; index>=0; index--)
	{
		printf("%d ", myArray[index]);
	}
	return 0;
} // end main
