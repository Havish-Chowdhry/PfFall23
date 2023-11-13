/* 
Programmer: Havish Chowdhry

Desc: Given the function prototype below, implement the function that reverses the array passed 
to its arguments. Also write the main function that demonstrates this by taking 10 inputs from 
a user and storing them in an array. Print the array, then use our function reverse and print 
the array again to show that array has been reversed successfully. Use pointers in the function 
reverse.

Date: 31/10/2023
*/

#include <stdio.h>

void reverse(int *arr, int size)
{
  int *start =  arr + size - 1;
  for (; start >= arr; start--)
  {
    printf("%d ", *start);
  }
  printf("\n");
}

int main ()
{
  int n;
  printf("Enter the value of n to store n elements in the array: ");
  scanf("%d", &n);
  int myArray[n];
  int index;
  for (index = 0; index < n; index ++)
  {
    printf("Enter an element: ")
    scanf("%d", &myArray[index]);
  }

  printf("Original Array: ");
  for (index = 0; index < n; index ++)
  {
    printf("%d ", myArray[index]);
  }
  printf("\n");
  printf("Reversed Array is: ");
  reverse(myArray, n);

	return 0;
}
