/*
Programmer: Havish Chowdhry 
Desc: Write a C program that takes a matrix from a file and filename is given as command line argument
      (use argc and argv). The dimensions can be (2x2, 4x4, and 8x8). Make sure that your program
      tackles any of the dimensions. Your program should compute the max value from each 2 x 2 submatrix and save it into a new matrix.
      For instance, for a 2 x 2 input matrix resultant matrix would have dimensions 1 x 1, for a 4 x 4 input matrix resultant matrix would have 
      dimensions 2 x 2, and for 8 x 8 input matrix resultant
      matrix have dimensions 4 x 4. Please refer to the following image to review the working of the program.
      The following matrix has four submatrices of 2 x 2 dimensions, and their maximum values are
      saved into a new matrix having dimensions 2 x 2. For example, each submatrix's subscripts and
      max values are provided in the example below.
      A) Your solution must have the required functions for matrix processing. For 2x2, for 4x4 and for 8x8,
      equal points are allocated. [15 points]
      B) Main function that operates and performs operation on the functions. Use your student id as input
      to the functions. E.g., 23k-1234 then your input array should have your id of 1234 repeatedly. [5
      points]
Date: 07/12/2023
/*

#include <stdio.h>
#include <stdlib.h>

void findSubMatrix(int n, int readMatrix[n][n], int subMatrix[n/2][n/2])
{
    int i, j, k, l;
    for (i = 0; i < n; i += 2)
    {
        for (j = 0; j < n; j += 2)
        {
            int maximumValue = readMatrix[i][j];
            for (k = 0; k < 2; k++)
            {
                for (l = 0; l < 2; l++)
                {
                    int nextValue = readMatrix[i + k][j + l];
                    if (nextValue > maximumValue)
                    {
                        maximumValue = nextValue;
                    }
                }
            }
            subMatrix[i / 2][j / 2] = maximumValue;
        }
    }
}

void printMatrix(int n, int matrix[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    printf("Creator: Havish Chowdhry.\nID: 23K0058\n");
    int i, j;
    
    if (argc != 1)
    {
        fprintf(stderr, "Usage: %s <submatrixQ1.txt>\n", argv[0]);
        return 0;
    }
    
    FILE *myfilePtr = fopen("submatrixQ1.txt", "r");
    if (myfilePtr == NULL)
    {
        fprintf(stderr, "Error opening the file %s\n", "submatrixQ1.txt");
        return 1;
    }

    int n;
    char dimension[3]; // To read "2x2", "4x4", "8x8"

    // Read dimensions and skip the line
    while (fscanf(myfilePtr, "%dx%d", &n, &n) != EOF)
    {
        fgets(dimension, sizeof(dimension), myfilePtr);

        int readMatrix[n][n];
        int submatrix[n/2][n/2];

        // Read matrix values
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                fscanf(myfilePtr, "%d", &readMatrix[i][j]);
            }
        }

        findSubMatrix(n, readMatrix, submatrix);

        printf("\nInput matrix read from the file:\n");
        printMatrix(n, readMatrix);

        printf("\nOutput submatrix:\n");
        printMatrix(n/2, submatrix);
    }

    fclose(myfilePtr);
    return 0;
}
