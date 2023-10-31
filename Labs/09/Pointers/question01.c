/* 
Programmer : Havish Chowdhry
Desc: 
A. Desired result, that is the values of j and k are not swapped. Why is this? 
B. Modify the function swap and its call at line 12 to get the desired result.
Write the answer to question A in the comments of the program for part B.
Date: 31/10/2023
*/

#include <stdio.h>

//q1b

void swap (int *a, int *b) // missing of pointers to perform swaapping easily with memory locations
{
  int temp = *a; // stores the value of a
  *a = *b; // address of a is assigned the valiue of b stored at address b
  *b = temp; // b is assigfned th wrong value of a, it should be assigned what is stored in temp
}

int main ()
{
  int j = 2, k= 5;
  printf("j = %d , k = %d\n", j, k);
  swap(&j, &k); // & was missing to recieve pointers 
  printf("j = %d , k = %d\n", j, k);	
  return 0;
}
