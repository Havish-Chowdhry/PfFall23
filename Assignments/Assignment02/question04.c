/*
Programmer: Havish Chowdhry
Desc: You are given a maze represented by a 2D array. 
The maze consists of walls represented by 'W', open paths represented by 'O', the starting point represented by 'S', and the exit represented by 'E'. 
The objective is to find a path from the starting point to the exit.
Constraints 
  - There will be at least one path from the starting point to the exit. 
  - In case of more than one path then consider only one. 
  - You can visit only right and down direction. 
  - Output will be only indexes of correct path. 
Date: 13/11/2023
*/

#include <stdio.h>

#define ROW 5
#define COL 5

char maze[ROW][COL] = {
	{'S', 'O', 'O', 'W', 'O'},
	{'O', 'W', 'O', 'O', 'W'},
	{'O', 'O', 'O', 'W', 'O'},
	{'W', 'W', 'O', 'W', 'O'},
	{'W', 'W', 'O', 'E', 'W'}	
	};

int pathfound = 0;

void printMaze()
{
	int i,j;
	for (i=0; i<ROW; i++)
	{
		for (j=0;j<COL;j++)
		{
			printf("%c ", maze[i][j]);	
		}
		printf("\n");
	}
}

void findPath(int x, int y)
{
	if (pathfound)
	{
		return;
	}
	// checking for out of bounds, visited positions and walls
	if (x<0 || y<0 || x>= ROW || y >= COL || maze[x][y] == 'W' || maze[x][y] == 'X')
	{
		return;
	}
	
	// if exit is reached
	if (maze[x][y] == 'E')
	{
		printf(" (%d,%d) ", x, y);
		pathfound = 1;
		return;
	}
	
	printf(" (%d,%d) ", x, y);
	// marking the current pos as X to denote as visited
	maze[x][y] = 'X';
	
	// moving right
	findPath(x,y+1);
	// moving down
	if (!pathfound)
		findPath(x+1,y);		
}

int main ()
{
	printf("Original maze:\n");
	printMaze();
	printf("The path to reach the exit (E) is: ");
	findPath(0,0);
	
	return 0;
}
