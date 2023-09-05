#include <stdio.h>
#include <math.h>

int main() {
         int perp;
         int base;
         int hypotenuse;
         printf("Enter the perp length of triangle: ");
         scanf("%d", &perp);
         printf("Enter the base length of triangle: ");
         scanf("%d", &base);
         
         hypotenuse = sqrt((perp * perp) + (base * base));
         printf("%d", hypotenuse);
         return 0;
} 
     
