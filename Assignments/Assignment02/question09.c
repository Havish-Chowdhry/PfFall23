/*
Programmer: Havish Chowdhry
Desc: Given a number N create two NxN 2D Arrays and fill it with spiral incremental numbers (first inwards and then outwards). Print the arrays.  
Date: 12/11/2023 
*/

#include <stdio.h>

void printSpiralInwards(int N, int num) {
    int spiralInwards[N][N];
    int up = 0, down = N - 1, right = N - 1, left = 0;
    int index1, index2;
	  num = 1;
 
    while (up <= down && left <= right) 
	{
        for (index1 = left; index1 <= right; index1++) 
		{
            spiralInwards[up][index1] = num++;
        }
        up++;

        for (index1 = up; index1 <= down; index1++) 
		{
            spiralInwards[index1][right] = num++;
        }
        right--;

        for (index1 = right; index1 >= left; index1--) 
		{
            spiralInwards[down][index1] = num++;
        }
        down--;

        for (index1 = down; index1 >= up; index1--) 
		{
            spiralInwards[index1][left] = num++;
        }
        left++;
    }

    for (index1 = 0; index1 < N; index1++)
	{
        for (index2 = 0; index2 < N; index2++) 
		{
            printf("%2d ", spiralInwards[index1][index2]);
        }
        printf("\n");
    }
} // end void printSpiralInwards

void printSpiralOutwards(int N, int num) {
	
	printf("Enter a value for (num) to decide the starting number of the maze: ");
  scanf("%d", &num);
	
    int spiralOutwards[N][N];
    int up = 0, down = N - 1, right = N - 1, left = 0;
    int index1, index2;

    while (up <= down && left <= right) 
	{
        // move right
        for (index1 = left; index1 <= right; index1++) 
		{
            spiralOutwards[up][index1] = num--;
        }
        up++;

        // move down
        for (index1 = up; index1 <= down; index1++) 
		{
            spiralOutwards[index1][right] = num--;
        }
        right--;

        // move left
	    if (up<=down)
		{    
			for (index1 = right; index1 >= left; index1--) 
			{
	            spiralOutwards[down][index1] = num--;
	        }
	        down--;
		}
	
        // move up
	    if (left<=right)
		{    
			for (index1 = down; index1 >= up; index1--) 
			{
	            spiralOutwards[index1][left] = num--;
	        }
	        left++;
    	}
	} // end while
	
	// to mirror the outward matrix as in the qs sample output else this part is not needed
	
	for (index1 = 0; index1 < N; index1++) 
	{
        for (index2 = 0; index2 < N / 2; index2++)
		{
            int temp = spiralOutwards[index1][index2];
            spiralOutwards[index1][index2] = spiralOutwards[index1][N - 1 - index2];
            spiralOutwards[index1][N - 1 - index2] = temp;
        }
    }
	
	// loop to print the outward spiral
    for (index1 = 0; index1 < N; index1++)
	{
        for (index2 = 0; index2 < N; index2++) 
		{
            printf("%2d ", spiralOutwards[index1][index2]);
        }
        printf("\n");
    }
} // end void spiralOutward

int main() 
{
    int N, num;

    printf("Enter the value of n to store in the array: ");
    scanf("%d", &N);
	
	printf("Inward spiral:\n");
  printSpiralInwards(N, num);
	
	printf("\n");
	printf("Outward spiral:\n");
	printSpiralOutwards(N, num);
	
    return 0;
}
