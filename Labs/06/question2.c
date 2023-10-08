/*
Programmer: Havish Chowdhry
Desc: Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the
generated Fibonacci numbers divisible by 3, 5 or 7 only.
An example of the Fibonacci series is: 1 1 2 3 5 8 13 25..........
Note: Do this task by using a for loop DO NOT use arrays for this.
Date: 03/10/2023
*/

#include <stdio.h>

int main () 

{ // start main
	
	int sum=0, prev = 1, current = 1, next;
	printf("fibonacci sequence: ");
	printf("%d %d ", prev, current);

  // loop to print the fibonacci series
	for (next = prev + current; next<10000;next = prev + current)
	{
		if (next< 10000)
		{
			printf("%d ", next);
			prev = current;
			current = next;
		}
	}

  // loop to find the numbers in the fib series divisible by 3/5/7 less than 10000 and calculate their sum
	int num1 =1;
	int num2 =1;
	
	for (next = num1 +  num2; next<10000; next = num1 +  num2)
	{ 
		if (next< 10000)
		{
	 	if (next % 3 == 0 || next  % 5 == 0 || next % 7 == 0)
			{	
				sum +=  next;
			}
			num1 = num2; 
			num2 = next;
		}
	}
	printf("\n");	
	printf("The sum of those numbers in fib series dvisible by 3/5/7 is %d", sum);
	return 0;
} // end main
