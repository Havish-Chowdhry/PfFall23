/* 
Programmer: Havish Chowdhry
Desc: Consider Two integers a and b taken as input from the user. Using Loops iterate the value of
a till the value of b. If the value of a<=9 the output should correspond to the English representation of the
numbers i.e., 8=Eight, 9=Nine etc. If the iteration exceeds 9 then the programs should print if the exceeded number is even or
odd.
Example:
Input= 8,11
Output= Eight, Nine, Even, Odd 
Date: 03/10/2023
*/

// Method 1:
#include <stdio.h>

int main()
{
	printf("Enter the numbers A and B: ");
	scanf("%d %d", &a, &b);
	
	for (index = a; index <=b; ++index)
	{
		switch (index)
		{
			case 0: 
			printf("Zero ");
			break;
			case 1: 
			printf("One ");
			break;
			case 2: 
			printf("Two ");
			break;
			case 3: 
			printf("Three ");
			break;
			case 4: 
			printf("Four ");
			break;
			case 5: 
			printf("Five ");
			break;
			case 6: 
			printf("Six ");
			break;
			case 7: 
			printf("Eight ");
			break;
			case 8: 
			printf("Eight ");
			break;
			case 9: 
			printf("Nine ");
			break;
			default:
				if (index % 2 == 0)
				{
					printf("Even ");
				}
				else
				{
					printf("Odd ");
				}
		}
	}
	return 0;


// method 2
#include <stdio.h>
int main() 
{ // start main 
	int index , a , b;
	char units[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; // array of char where strings are stored
	
	printf("Enter A: ");
	scanf("%d", &a);
	printf("enter B: ");
	scanf("%d", &b);
	
	for(index = a; index <=b; index++)
	{
		if (index<=9)
		{
		printf("%s ", units[index]);
		}
		else
		{
			if (index % 2 == 0)
			{
				printf("Even ");
			}
			else 
			{
				printf("Odd");
			}
		}
	}
	return 0;
} // end main
