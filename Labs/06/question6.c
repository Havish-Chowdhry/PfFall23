/*
Programmer: Havish Chowdhry
Desc: Write a program for a match-stick game between the computer and a user. Your
program should ensure that the computer always wins. Rules for the game are as
follows:
        1. There are 21 matchsticks.
        2. The computer asks the player to pick 1,2,3 or 4 match sticks.
        3. After the person picks, the computer does its picking.
        4. Whoever is forced to pick up the last matchstick loses the game.
Date: 09/10/2023
*/

#include <stdio.h>

int main ()
{ // start main
	int matchSticks = 21, userInput = 0; // initialization
	
	while (matchSticks> 0) 
	{ // start while loop
		
		printf("Enter the number of matchSticks (1,2,3 or 4): ");
		scanf("%d", &userInput);

    // applying the condition
		if (userInput >= 1 && userInput <= 4)
		{ 
		
			switch(userInput)
			{ // start switch case
				case 1:
					matchSticks -= 4;
					break;
				case 2:
					matchSticks -= 3;
					break;
				case 3:
					matchSticks -= 2;
					break;	
				case 4:
					matchSticks -= 1;
					break;	
				default:
					printf("Invalid Input please enter a number from 1 to 4 inculsive\n");
			} // end switch case
		} // end (userInput >= 1 && userInput <= 4)

		if (matchSticks <= 0)
				{
					printf("The computer won");
				}
				else
				{
					printf("Match sticks left %d\n", matchSticks);
				}	
	} // end while loop
	return 0;
}// end main
