/*
Programmer: Havish Chowdhry
Desc: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S. In case of multiple subarrays, return the subarray which comes
first on moving from left to right.
Input:
Enter Number S = 12
Array: {1, 2, 3, 7, 5}
Output:
The Elements from Index 1 to 3 when summed results in the output of 12.

Date: 10/10/2023
*/

#include <stdio.h>

int main ()
{ // start main
  
	int start = 0, end= 0, currentSum=0, found = 0; // start and end are the first and last elements of array. found is a flag initialised to not found.
	int n, index; // n is the variable length of the array
	int subArray; // this gives the number of which the sum needs to be found
	
	printf("Enter the number of elements to be stored in the array: ");
	scanf("%d", &n);
	printf("Enter the value for subArray S: ");
	scanf("%d", &subArray);
	
	
	int myArray[n]; // declaring an array of n elements 
	
	// loop to store n elements in the array
	for (index=0; index<n; index++)
	{
		printf("Enter a number: ");
		scanf("%d", &myArray[index]);
	}

  // loop to iterate through the array till the last element from left to right and until the flag found = 1
	while (end<n && !found)
	{
		currentSum = currentSum + myArray[end]; // add the current element at index end to the currentSum.

    // loop to check If currentSum becomes greater than the given number means the sum of start and end is exceeding the target subArray number entered.
		while (currentSum > subArray && start <= end)
		{
			currentSum= currentSum - myArray[start]; // so Subtract the element at index start from currentSum to remove it from the sum.
			start++;
		}
    
		// checks if the sum and entered num matches or not, if yes the prints sub array found from x to y index position.
		if (currentSum == subArray) 
		{
			found = 1; // flag set to true
			printf("Subarray found from index %d to %d\n", start, end);
		}
		end++;
	}
  
	// checks if this statment is true the prints no sub array found
	if (!found){
  	printf("No sub array found within the given sum");
	}
  
	return 0;
} // end main 
