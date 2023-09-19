// The program takes input total cost of a shopping and calculates the discount accordingly and gives the finalamount, saving and the cost before discount.

#include <stdio.h>

main () { // start main
	
	float savings, totalCost, discount, TotalAmount;
	
	printf("Enter the total cost of the shopping before discount: $ ");
	scanf("%f", &totalCost);
	
	if (totalCost > 6000) {
		discount = 0.5;
	} else if (totalCost >=4001 && totalCost <= 6000) {
		discount = 0.3;
	} else if (totalCost >=2000 && totalCost <= 4000) {
		discount = 0.2;
	} else {
		discount = 0.0; 
	}
	
	savings = totalCost * discount;
	TotalAmount = totalCost - savings;
	
	printf("The actual amount of the shopping was: %f\n", totalCost);
	printf("The amount saved after the discount was: %f\n", savings);
	printf("The total amount that was paid after discount is: %f\n", TotalAmount); 
	
	return 0;
} // end main
