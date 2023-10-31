/* 
Programmer : Havish Chowdhry
Desc: You are given an array of integers. Write a C program that defines a user-defined function processArray to
calculate the sum, maximum, and minimum values in the array. The program should take the array and its size as
parameters and use the function to compute these values.
Input:Array is [4, 8, 1, 15, 6]
Date: 24/10/2023
*/

#include <stdio.h>

void ProcessArray()
{
	int n, index, sum = 0, max = 0, min; 
	printf("Enter a value of n to store the elements in the array: ");
	scanf("%d", &n); 
	
	int myArray[n];
	
	for (index = 0; index<n; index++)
	{
		printf("Enter an element: ");
		scanf("%d", &
		myArray[index]);
	}                   
	
	for (index = 0; index < n; index++)
	{
		printf("%d ",myArray[index]);
	}
	
	for (index = 0; index<n; index++)
	{
		sum = sum + myArray[index];
	}
	
	min = myArray[0];
	
	for (index=0; index<n; index++)
	{
		if (myArray[index] > max)
		{
			max = myArray[index];
		}
		
		if (myArray[index] < min)
		{
			min = myArray[index];
		}
	}
	
	printf("\n");
	printf("The total is %d\n", sum);
	printf("Maximum = %d\n", max); 
	printf("Minimum = %d\n", min);
}

int main()
{
	ProcessArray();
	return 0;
}
