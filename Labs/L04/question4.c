Roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
	int x;
	int y;
	int z;
	int discriminant;
	int root1, root2;

	printf("Enter the root x: ");
	scanf("%d", &x);
	printf("Enter the root y: ");
	scanf("%d", &y);
	printf("Enter the root z: ");
	scanf("%d", &z);
	
	discriminant = (y*y) - (4*x*z);

	if (discriminant > 0) {
		root1 = (y  + sqrt(discriminant) )/(2*x);
		root2 = (-y - sqrt(discriminant) )/(2*x);
		printf("root1 is %d", root1);
		printf("root2 is %d", root2);
	} else if (discriminant == 0) {
		root1 = -y/(2*x);
		printf("Root1=Root2 %d", root1);
	}

	return 0; 
}
	

	
