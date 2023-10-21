/*
Programmer: Havish Chowdhry
Desc: Create a 2D array for bill amount, where keep track of
branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile phones in all branches. Your program should print the following:
- Total bill for all branches
- Total bill for each branch
- Branch ID where maximum bill arrived
- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
Date: 21/10/2023
*/

#include <stdio.h>

int main() 
{
    int NumofBranches, NumofUsers, BranchID, MobileID, TotalSales = 0;
    int branchIndex, userIndex;
    int branchSale1 = 0, branchSale2 = 0;
	
	// taking input for number of branches and number of users
    printf("Enter number of branches (X): ");
    scanf("%d", &NumofBranches);

    printf("Enter number of users per branch (Y): ");
    scanf("%d", &NumofUsers);

    int BillAmount[NumofBranches][NumofUsers]; // 2D array
	
	// loop to take input and store them in the array
    for (branchIndex = 0; branchIndex < NumofBranches; branchIndex++) 
    {
        printf("Enter the Branch ID: ");
        scanf("%d", &BranchID);
        printf("\nEnter data for Branch %d", BranchID);

        for (userIndex = 0; userIndex < NumofUsers; userIndex++) 
        {
            printf("\nEnter Mobile Phone ID: ");
            scanf("%d", &MobileID);

            printf("Enter bill for Mobile Id %d: ", MobileID);
            scanf("%d", &BillAmount[branchIndex][userIndex]);
            printf("\n");
        }
    }
	
	// loop to calculate the total of all branches
    for (branchIndex = 0; branchIndex < NumofBranches; branchIndex++) 
    {
        for (userIndex = 0; userIndex < NumofUsers; userIndex++) 
        {   
            TotalSales += BillAmount[branchIndex][userIndex];
        }
    }

    printf("\nThe Total Sales for all branches is %d", TotalSales);
	
	
	// loop to calculate amount for specific branches and specific users
    for (branchIndex = 0; branchIndex < NumofBranches; branchIndex++) 
    { 
        for (userIndex = 0; userIndex < NumofUsers; userIndex++) 
        {
            // Check if the branch is Branch#1 and the user is either the first or second user
            if (branchIndex == 0 && (userIndex == 0 || userIndex == 1)) 
            {
                branchSale1 += BillAmount[branchIndex][userIndex];
            }

            // Check if the branch is Branch#2 and the user is either the first or second user
            if (branchIndex == 1 && (userIndex == 0 || userIndex == 1))
            {
                branchSale2 += BillAmount[branchIndex][userIndex];
            }
        } // end inner for loop of userIndex
        
    } // end outer for loop of branchIndex

    printf("\nThe sales of Branch#1 are %d", branchSale1);
    printf("\nThe sales of Branch#2 are %d", branchSale2);

    return 0;
  
} // end main 
