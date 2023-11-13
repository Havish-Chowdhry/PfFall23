/*
Programmer: Havish Chowdhry
Desc: Ramanujan-Hardy Numbers 2-way are numbers that are the sum of two cubes two different ways. 
      E.g., 1729 = 12^3 + 1^3 = 9^3 + 10^3. A. 
      Write a C program to find all Ramanujan-Hardy numbers less than n^3.  
Date: 13/11/2023
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b,c,d, sum_ab = 0;
	int n;
	printf("Enter a value for n: ");
	scanf("%d", &n);

	int limit = n*n*n;
	printf("Limit is %d\n",limit);	
	
	for (a = 1; a<=n; a++)
	{
		
		for (b = a + 1; b <=n; b++) 
		{
			sum_ab = pow(a,3) + pow(b,3);
			
			for(c=a+1; c<=n;  c++)
			{
				for (d = c + 1; d <=n; d++)
				{
					if (sum_ab == pow(c,3) + pow(d,3) && sum_ab < limit)
					{
						printf("%d is a Ramanujan-Hardy number: %d^3 + %d^3 = %d^3 + %d^3\n", sum_ab, a, b, c, d);	
					}	
				} 
			}
		}
		
	}
	
	return 0;
}
