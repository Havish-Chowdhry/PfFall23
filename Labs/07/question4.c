/*
Programmer: Havish Chowdhry 
Desc: Check if user input matrix is symmetric or not through its transpose. 
      Note: A symmetric matrix is a matrix that is equal to its transpose. Where elements in first row are
      equal to elements in first column and so on.
       Aij = Aji.
Date: 15/10/2023
*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{ // start main  
	int row, col;
	int i, j;
	
	printf("Enter the number of rows for the matrix: ");
	scanf("%d", &row);
	printf("Enter the number of col for the matrix: ");
	scanf("%d", &col);
	
	
	int myMatrix [row][col]; // declaring a matrix with rows and columns specified by the user
	
	// loop to enter and store the elements in the array
	for (i=0; i<row; i++) 
	{
		for (j=0; j<col; j++)
		{
			printf("Enter the elements in the matrix[%d][%d]: ", i,j);
			scanf("%d", &myMatrix[i][j]);
		} 
	}
	
	// loop to print the original array that has not been transposed
	printf("The original matrix is\n");
	for (i=0; i<row; i++) 
	{
		for (j=0; j<col; j++) 
		{	
			printf("%d ", myMatrix[i][j]);
		}
		printf("\n"); // move to the next line to print the next row (used for printing the array in 2D format)
	} // end outer for loop
	
	bool isSymmetric = false; // flag initialised to false which tells where the matrix is symmetric or not
	
	// loop to check for transpose 
	for (i=0; i<row; i++)
	{ 
		for (j=0; j<col; j++)
		{
			if (myMatrix[i][j] == myMatrix[j][i])
			{
				isSymmetric = true;	
				break;
			}
		} 
		if (!isSymmetric) // if this statment is true that is matrix is not symmetric, innermost loop would be exited by executing the break statment 
		{ 
			break;
		}
	}	// end outer for loop
	
	// loop to print the transposed matrix
	printf("The transposed matrix is\n");
	for (i=0; i<row; i++) 
	{
		for (j=0; j<col; j++) 
		{	
			printf("%d ", myMatrix[j][i]);
		}
		printf("\n"); // move to the next line to print the next row (used for printing the array in 2D format)
	}
	
  if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
	return 0;
} // end main 
