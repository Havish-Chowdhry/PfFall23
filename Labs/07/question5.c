/*
Programmer: Havish Chowdhry
Desc: printing a man on C console using loops and functions.
Date: 10/10/2023
*/

#include <stdio.h>

// function to make the hat of the man 
void hat(int row, int col) 
{
	// loop to print the upper part of the hat
    for (int i = 0; i < row-2; i++) 
	{
        for (int j = 0; j < col; j++) 
		{
            // Using the ternary operator to decide whether to print a space or a star
            printf(j >= (col - row) / 2 && j < (col + row) / 2 ? "*" : " ");
        }
        printf("\n");
	}
	
	// loop to print the down part of the hat (The straight line).
	for (int l = 0; l<12; l++)
	{
		printf(l== 0 ? " " : "*");
	} 	
} // end function hat

// function to print the face of the man
void face (int len, int pos)
{
	// loop to print the eyes of the man
	for (int index = 0; index < 9; index++)
	{
		// ternary operator to decide whether to print a star or a space
		printf(index<4 || index == 5 || index == 6 || index == 7 ? " " : "*");
	}
	printf("\n");
	
	// loop to print the nose of the man
	for (len = 0; len < 1; len++)
	{
		for (pos = 0; pos < 13; pos++)
		{
			printf(pos == 6 ? "|" : " "); // ternary operator to decide whether to print a vertical bar or a space
		}
		printf("\n");
	}
	
	// loop to print the smile of the man
	for (len = 0; len < 1; len++)
	{
		for (pos = 0; pos < 13; pos++)
		{
			printf(pos == 5 ? "\\_/" : " "); // ternary operator to decide whether to print smile of the man or a space
		}
		printf("\n");
	}
	
	printf("\n");
} // end face function 

// function to print the neck of the man
void neck(int n) 
{
	// loop to print the neck of the man
	for (int line = 0; line<8; line++)
	{
		printf(line<5 || line == 6 ? " " : "|"); // ternary operator to decide whether to print a vertical bar or a space
	}
	printf("\n");
	
	// loop to print the part between the torso and the neck
	for (int index=0; index<n; index++)
	{
		printf("*");
	}
} // end neck function

// function to print the torso of the man
void body(int rows, int columns)
{
	// loop to print the body and the arms of the man
	for (int rows = 0; rows < 4; rows ++)
	{
		for (int columns = 0; columns < 13; columns++)
		{
			if (columns == 2 || columns == 3 || columns == 9 || columns == 10)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n"); 
	}
	
	// loop to print the end part of the body
	int totalPositons = 9;
	for (int pos=0; pos < totalPositons; pos++)
	{
		printf(pos < 4 ? " " : "*");	  
	}
} // end body function


// function to print the legs of the man
void legs(int lines, int items)
{
	for (lines = 0; lines < 5; lines++)
	{
		for (items = 0; items < 9; items ++)
		{
			if (items < 4 || items == 6)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
} // end legs function

// function to print the shoes of the man
void shoes(int myShoes)
{
	for (myShoes = 0; myShoes<13; myShoes++)
	{
		// ternary operator to decide whether to print star or a space
		printf((myShoes == 0 || myShoes == 6 || myShoes == 12 ? " " : "*")); 
	}
	printf("\n");
}
	
// main function
int main() 
{
    int row = 5, col = 13;
    hat(row, col); // calling the hat function with its parameters
	printf("\n");
    
    int len, pos;
    face(len, pos); // calling the face function with its parameters
	
	int n = 13;
	neck(n); // calling the neck function with its parameters
	printf("\n");
	
    body(4,13); // calling the body function with its parameters
    
    printf("\n");
    int lines, items;
    legs(lines, items); // calling the legs function with its parameters
    
	int myShoes=0;
    shoes(myShoes); // calling the shoes function with its parameters
	
	return 0;    	
} //end main
