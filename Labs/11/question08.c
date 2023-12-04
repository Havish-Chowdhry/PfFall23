/*
Programmer: Havish Chowdhry 
Desc: You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is
      characterized by its length, width and height.
      The height of the tunnel is 41 feet, and the width can be assumed to be infinite. A box can be carried
      through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box
      that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated. 
Date: 04/12/2023
*/
#include <stdio.h>

typedef struct  {
    int length;
    int width;
    int height;
} Box;

int main() {
    int n, i;

    printf("Enter the number of boxes: ");
    scanf("%d", &n);

    Box boxes[n];

    printf("Enter dimensions for each box (length width height):\n");

    // Input details for each box
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    printf("Volume of boxes that can pass through the tunnel:\n");

    // Check each box's height and calculate volume if it can pass through the tunnel
    for (i = 0; i < n; i++) {
        if (boxes[i].height < 41) {
            int volume = boxes[i].length * boxes[i].width * boxes[i].height;
            printf("%d\n", volume);
        }
    }

    return 0;
}
