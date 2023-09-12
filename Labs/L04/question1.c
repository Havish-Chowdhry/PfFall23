The code prints a right angled triangle pattern of stars

#include <stdio.h>

int main() {
    int heightOfTriangle;
    printf("Enter the height of the triangle: ");
    scanf("%d", &heightOfTriangle);
    
    int count1 = 1;
    while (count1 <= heightOfTriangle) {
        int count2 = 1;
        while (count2 <= count1) {
            printf("*");
            count2++;
        }
        printf("\n");
        count1++;
    }

    return 0;
}

