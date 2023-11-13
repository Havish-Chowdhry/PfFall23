/*
Programmer: Havish Chowdhry
Desc: Write a C program to perform the following tasks: 
1) Input the number of batsmen and the number of innings from the user.
2) Input the batting performance for each batsman in each inning. 
3) Calculate and display the following statistics for each batsman. 
  ● Total runs scored. ● Average runs per inning 
  ● Highest score in a single inning 
  ● Number of centuries (innings with a score of 100 or more) 
  ● Number of half-centuries (innings with a score of 50-99) 
Your program should display the statistics for each batsman individually. 
Date: 13/11/2023
*/

#include <stdio.h>

void calculateStats(int batsmen, int innings, int battingPerformance[batsmen][innings])
{
	int index1, index2;
	for (index1 = 0; index1<batsmen; index1++)
	{
		int totalRuns = 0, halfCenturies = 0, centuries=0, highestScore = 0;
		for (index2 = 0; index2<innings; index2++)
		{
			totalRuns += battingPerformance[index1][index2];
			
			if (battingPerformance[index1][index2] > highestScore) 
			{
	            highestScore = battingPerformance[index1][index2];
	    	}
	    	
	    	if (battingPerformance[index1][index2] >= 100)
	    	{
	    		centuries++;
			}
			else if (battingPerformance[index1][index2] >= 50 && battingPerformance[index1][index2]<100)
			{
                halfCenturies++;
            }
    	}
    	
    	double averageRuns;
    	
    	if (innings > 0)
    	{
    		averageRuns = (double)totalRuns/innings;
		}
		else 
		{
			averageRuns = 0.0;
			printf("No innings played by this batsmen");
		}
		
		// Display statistics for each batsman
        printf("\nBatsman %d Statistics:\n", index1 + 1);
        printf("Total Runs: %d\n", totalRuns);
        printf("Average Runs per Inning: %.2lf\n", averageRuns);
        printf("Highest Score in a Single Inning: %d\n", highestScore);
        printf("Number of Centuries: %d\n", centuries);
        printf("Number of Half-centuries: %d\n", halfCenturies);
	}
}

int main()
{
	int batsmen, innings, i, j;
	
	printf("Enter the number of batsmen: ");
	scanf("%d", &batsmen);
	printf("Enter the number of innings played: ");
	scanf("%d", &innings);
	
	int battingPerformance[batsmen][innings];
	
	for (i = 0; i < batsmen; i++) 
	{
        printf("\nEnter batting performance for Batsman %d:\n", i + 1);
        for (j = 0; j < innings; j++) 
		{
            printf("Enter runs scored in inning %d: ", j + 1);
            scanf("%d", &battingPerformance[i][j]);
        }
    }
	
	calculateStats(batsmen, innings, battingPerformance);
	
	return 0;
}
