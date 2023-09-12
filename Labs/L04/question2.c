The code prints rectangular pattern of stars of n stars

#include <stdio.h>

int main() {

	int heightOfrectangle; // variable telling the height of triangle
	int count1 = 1; // counter 1
	printf("Enter the height of the rectangle: ");
	scanf("%d", &heightOfrectangle);
	
	while (count1<=heightOfrectangle) {
		int count2 = 1;
		while (count2<=heightOfrectangle) {
			printf("*");
			count2++;
		} // while loop ends 
		printf("\n");
		count1++;
	} // while loop ends 
	return 0;
} // end main
