/*
Programmer: Havish Chowdhry
Desc: Write a C Program to compute the LCM and GCD of two numbers.
Date: 08/10/2023
*/  

#include <stdio.h>
int main () 

{ // start main
	
	int firstTerm, secondTerm, LCM, GCD, product;
	
	printf("Enter the first number: "); 
	scanf("%d", &firstTerm);
	
	printf("enter the second number: ");
 	scanf("%d", &secondTerm);
 	
 	// finidng product of two numbers
 	
 	product =  (firstTerm * secondTerm);
 	
 	// finding LCM of the two numbers
 	
 	if (firstTerm > secondTerm) 
	{
	 	LCM = firstTerm;
	}
	else 
	{
		LCM =  secondTerm;
		
	}
	// determining the LCM 
  
	while (1)
	{
		if (LCM % firstTerm == 0 && LCM % secondTerm == 0){
			printf("The LCM of first term and second term is: %d\n", LCM);
			break;
		}
		LCM += (firstTerm > secondTerm) ? firstTerm : secondTerm ;
	}
	
	// GCD calculation
	GCD = (product)/(LCM);
	printf("The GCD of first and second term is %d\n", GCD);
	return 0;
} // end main 
