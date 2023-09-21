//Print the pattern for any number of n. Below is an example for n=4.
//   *  
//  * *
// *   *
//*     * 
// *   *
//  * *
//   *

#include <stdio.h>

int main() {
	int n, position, line;
	
	printf("Enter the size of the diamond: ");
	scanf("%d", &n);
	
	line = (((n+(n-1))/2)+1);
	while (line < (n+(n-1))) 
	{ // start outer while loop
	
		position = 1;
		while (position <= (n+(n-1)))
		{ // start inner while loop
		
			if ((position == (n+(n-line)) || (position == line)))
			{ 
				printf("*");
			} 
			else
			{ 
				printf(" ");
			} 
			
			position++; // increment position
		} // end inner while loop  (position <= (n+(n-1)))
		
		printf("\n");
		line++;
	
	} // end outer while loop (line < (n+(n-1)))
	
	line = 1;
	while (line <= ((n+(n-1))/2)+1) 
	{
		position = 1;
		while (position <= (n+(n-1)))
		{
			if (position == line || position == (n + (n-line)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			position++;
		} // end inner while loop (pos <= (n+(n-1)))
		printf("\n");
		line++; 
		
	} // end outer while loop  (line <= ((n+(n-1))/2)+1) 
	
	return 0;

} // end main
