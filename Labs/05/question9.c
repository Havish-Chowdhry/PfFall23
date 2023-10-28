// The program takes the coefficients of a quadratic equation as input and calculates the roots of the equation.

#include <stdio.h>
#include <math.h>

int main () { // start main 
	
	int a,b,c; // coefficients of a quadratic equation
	float root1, root2;
	float discriminant;
	
	printf("Enter coefficients of a quadratic equation (a,b,c): ");
	scanf("%d %d %d", &a, &b, &c);

	discriminant = b*b-(4*a*c);
	
	if (discriminant == 0) {
		root1 = -b/(2*a);
		printf("Real Roots as discrimant = 0\n");
		printf("Root1 = Root2: %.2f", root1);
		
	} else if (discriminant>0) {
		root1 = (-b + sqrt(discriminant))/(2.0*a);
		root2 = (-b - sqrt(discriminant))/(2.0*a);
		printf("Real Roots as discrimant > 0\n");
		printf("The roots of the quadratic equation are: %.2f and %.2f\n", root1, root2);
		
	} else if (discriminant<0) {
		printf("No real roots as discriminat <0");
	}
	return 0;

} // end main 
