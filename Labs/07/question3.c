/*
Programmer: Havish Chowdhry
Desc: Take a number from user and count the sum of their digits.
Date: 17/10/2023 (had done in lab, uploading on 21st oct)
*/

#include <stdio.h>

int main()
{
	int number, originalNum, sum=0, temp;
	
	printf("enter a number: ");
	scanf("%d", &number);
	
	originalNum = number;
	
	while (number!=0)
	{
		temp = number % 10;
		sum = sum + temp;
	 	number = number / 10;
		
	}
	printf("The number is %d and the sum of its digits is %d",originalNum, sum);
} // end num

