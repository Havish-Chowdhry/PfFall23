/*
Programmer: Havish Chowdhry
Desc: Dividing two numbers without mod operator
Date: 17/10/2023 (had done in lab uploading on 21st oct)
*/


#include<stdio.h>

int main()
{
	int divisor, dividend, quotient = 0, remainder = 0, count;
	
	printf("Enter the divisor: ");
	scanf("%d", &divisor);
	printf("Enter the dividend: ");
	scanf("%d", &dividend);

  // loop runs until the dividend becomes less than the divisor
	while (dividend>=divisor)
	{
		count = dividend - divisor; 
		quotient++; 
	}
	
	remainder =  count;
	
	printf("The quotient is %d", quotient);
	printf("The remainder is %d", remainder); 
	return 0;
} // end main
