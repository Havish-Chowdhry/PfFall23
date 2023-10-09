/*
Programmer: Havish Chowdhry
Desc: Write a C program that produces the following output:
0 0 0 0
  1 1
2 2 2 2
  3 3
4 4 4 4
  5 5
6 6 6 6
Date: 09/10/2023
*/

// method 1: without loop
#include <stdio.h>

int main ()
{	
	printf("\t\t\t\t\t\t 0 0 0 0\n");
	printf("\t\t\t\t\t\t   1 1\n");
	printf("\t\t\t\t\t\t 2 2 2 2\n");
	printf("\t\t\t\t\t\t   3 3\n");
	printf("\t\t\t\t\t\t 4 4 4 4\n"); 
	printf("\t\t\t\t\t\t   5 5\n");
	printf("\t\t\t\t\t\t 6 6 6 6\n");
}

// method 2: with loop

#include <stdio.h>
int main()
{ // start main
	
	int index;
	
	for (index = 0; index<=6; index++)
	{
		if (index % 2 == 0)
		{
			printf("%d\t%d\t%d\t%d", index, index, index, index);
		}
		else 
		{
			printf("\n\t%d\t%d\n", index, index);
		}
	}
	return 0;
} // end main 
