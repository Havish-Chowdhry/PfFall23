#include <stdio.h>

int main() {

	int heightOfTriangle;
	int count1 = 1;
	printf("Enter the height of the triangle: ");
	scanf("%d", &heightOfTriangle);
	while (count1<=heightOfTriangle) {
	int count2 = 1;
	while (count2<=heightOfTriangle) {
		printf("*");
		count2++;
	}
	printf("\n");
	count1++;
	}
} // end main
