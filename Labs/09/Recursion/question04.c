/*
Programmer : Havish Chowdhry
Desc: fibonacci series using recursion.
Date: 13/11/2023
*/

#include <stdio.h>

int fib_recursive(int next)
{	
	if (next == 0 || next == 1)
	{
		return next;
	}
	else
	{
		return fib_recursive(next-1) + fib_recursive(next-2);
	}
}

int main ()
{
	int num, index;
	
	printf("Enter the number of terms for the Fibonacci series: ");
	scanf("%d", &num);
	
	printf("Fibonacci Series up to %d terms:\n", num);
    for (index = 0; index < num; index++) 
	{
        printf("%d ", fib_recursive(index));
    }
	
	return 0;
	
}
