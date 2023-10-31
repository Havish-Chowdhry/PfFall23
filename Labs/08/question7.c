/* 
Programmer : Havish Chowdhry
Desc: You are developing a C program for a coffee shop that offers discounts based on customer loyalty and purchase
history. The program should work as follows:
The program should have a user-defined function named calculateDiscount that takes two parameters: the
customer's total purchase amount and the number of times they have visited the shop in the past month.
determine the discount based on the following criteria:
1. If the customer has visited the shop more than 10 times in the past month and their total purchase amount
is $50 or more, they get a 15% discount.
2. If the customer has visited the shop more than 5 times in the past month and their total purchase amount is
$30 or more, they get a 10% discount.
3. For all other customers, no discount is applied.
The function should return the calculated discount amount.
In the main part of the program, prompt the user to input their total purchase amount and the number of times they
have visited the shop. Call the calculateDiscount function to calculate the discount, and display the discount
amount to the user.
Date: 24/10/2023
*/

#include <stdio.h>

float calculateDiscount(float totalPurchaseAmount, int visitCount)
{
	float discount = 0.00;
	if (visitCount > 10 && totalPurchaseAmount >= 50)
	{
		discount = 0.15;
	}
	else if (visitCount > 5 && totalPurchaseAmount >= 30)
	{
		discount = 0.10;
	}
	else 
	{
		return 0;
	}
	return discount * totalPurchaseAmount;
}

int main ()
{
	float totalPurchaseAmount;
	int visited; 
	
	printf("Enter you total purchase amount: ");
	scanf("%f", &totalPurchaseAmount);
	
	printf("Enter the number of times you have visited the coffee shop: ");
	scanf("%d", &visited);
	
	float discountAmount;
	discountAmount = calculateDiscount(totalPurchaseAmount, visited);
	
	if (discountAmount > 0) {
        printf("Your discount amount: $%.2f.\n", discountAmount);
        printf("Amount to pay after discount: $%.2f\n", totalPurchaseAmount - discountAmount);
    } else {
        printf("No discount applied. Amount to pay: $%.2f\n", totalPurchaseAmount);
    }
	
	return 0;
}
