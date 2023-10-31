/*
Programmer : Havish Chowdhry
Desc: program to find all different number pairs in the array that have sum equal to t.
Date: 31/10/2023
*/

#include <stdio.h>

int main ()
{
	int n; 
	printf("Enter the value for n: ");
	scanf("%d", &n);
	
	int myArray[n];
	int index, t;
	
	for (index = 0; index < n; index++)
	{
		printf("Enter an element: ");
		scanf("%d", &myArray[index]);
	} 
	
	for (index = 0; index < n; index++)
	{
		printf("%d ", myArray[index]);
	}
	
	printf("\n");
	printf("Enter a target integer (t): ");
	scanf("%d", &t);
	
	for (index = 0; index < n; index++)
	{
		int index2;
		for (index2 = index + 1; index2<n; index2++)
		{
			if (myArray[index] + myArray[index2] == t)
			{
				printf("(%d,%d) ", myArray[index], myArray[index2]);
			}
		}
	}
	
	return 0;
}
