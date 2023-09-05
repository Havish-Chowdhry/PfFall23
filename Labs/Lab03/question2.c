#### Question2: Volume of a container

#include <stdio.h>

int main() {
         int height = 0;
         int length = 0;
         int width = 0;
         printf("\n");
         printf("Enter length: ");
         scanf("%d", &length);
         printf("Enter width: ");
         scanf("%d", &width);
         printf("Enter height: ");
         scanf("%d", &height);
         int volume = length * width * height;
         printf(" %d", volume);
         return 0;
}
