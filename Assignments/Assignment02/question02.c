/*
Programmer : Havish Chowdhry
Desc: finding the largest square submatrix of 1's in a binary matrix 
Date: 29/10/2023
*/  

#include <stdio.h>

int checkMin(int num1, int num2, int num3)
{
	int minimum = num1;
	
	if (num2 < minimum)
	{
		minimum = num2; 
	}
	if (num3 < minimum)
	{
		minimum = num3; 
	}
	return minimum;
} // end checkMinimum

int LargestSquareMatrix(int N, int M, int checkMatrix[N][M])
{	
	int OnesSquareMatrix[N][M];

	int index1, index2;
	int row= 0 , col = 0, largest = 0;
	
	for (index1 = 0; index1 < N; index1++)
	{
		for (index2 = 0; index2 < M; index2++)
		{
			if (index1 == 0 || index2 == 0)
			{
				OnesSquareMatrix[index1][index2] = checkMatrix [index1][index2];
			}
			else if (checkMatrix[index1][index2] == 1)
			{
				OnesSquareMatrix[index1][index2] = checkMin(OnesSquareMatrix[index1 - 1][index2], 
															OnesSquareMatrix[index1][index2-1], 
															OnesSquareMatrix[index1-1][index2-1])+1;
			}
			else 
			{
				OnesSquareMatrix[index1][index2] = 0;
			}
			
			// finding the largest sub square matrix of ones
			if (OnesSquareMatrix[index1][index2] > largest)
			{
				largest = OnesSquareMatrix[index1][index2]; 
				row = index1;
				col = index2;
			}
		}
	}
	
	printf("Dimensions of the largest square submatrix of ones is %d x %d \n", largest, largest);
	
	printf("OnesSquareMatrix:\n");
    for (index1 = 0; index1 < N; index1++)
    {
        for (index2 = 0; index2 < M; index2++)
        {
            printf("%d ", OnesSquareMatrix[index1][index2]);
        }
        printf("\n");
    }

	return largest;
}

int main ()
{
	int N, M;
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    int checkMatrix[N][M];
    int index, innerIndex;

    for (index = 0; index < N; index++) {
        for (innerIndex = 0; innerIndex < M; innerIndex++) {
            printf("Enter the value for the array [%d][%d]: ", index, innerIndex);
            scanf("%d", &checkMatrix[index][innerIndex]);
        }
    }
    
	for (index = 0; index<N; index++)
	{
		for (innerIndex = 0; innerIndex < M; innerIndex++) 
		{
            printf("%d ", checkMatrix[index][innerIndex]);
		}
		printf("\n");
	}
	
	LargestSquareMatrix(N, M, checkMatrix); 
	return 0;
}
