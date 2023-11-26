/*
Programmer: Havish Chowdhry
Desc: Write a C program that makes 3 arrays of size N (N is to be provided by the user, use variable
length arrays) of type char, int, long long int. Initialize them with random values. Print the
addresses and values stored in all these arrays one by one using pointer arithmetic. Explain in
comments why adding to pointers of different types works differently.
Date: 26/11/2023
*/

#include <stdio.h>

int main ()
{
	int N, index;
	printf("Enter a value for N: ");
	scanf("%d", &N);
	
	int intArray[N];
	char charArray[N];
	long long int longLongArray[N];
	
	for(index=0 ; index<N ; index++)
	{
      printf("Enter a number: ");
      scanf("%d",&intArray[index]);
	}
  
    for(index=0 ; index<N ; index++)
	{
      printf("Enter a character: ");
      scanf(" %c", &charArray[index]);
	}
   
    for(index=0 ; index<N ; index++) 
    {
      printf("Enter a number: ");
      scanf("%ld", &longLongArray[index]);
	}
	
	printf("CHAR ARRAY:\n");
	for (index=0; index<N; index++)
	{
		printf("Address: %x, Value: %c\n", (void*)&charArray[index], charArray[index]);	
	}
	
	printf("\nINT ARRAY:\n"); 
	for (index=0; index<N; index++)
	{
		printf("Address: %x, Value: %d\n", (void*)&intArray[index], intArray[index]);	
	}
	
	printf("\nLONG LONG INT ARRAY:\n");
	for (index=0; index<N; index++)
	{
		printf("Address: %x, Value: %lld\n", (void*)&longLongArray[index], longLongArray[index]);
	}
} 

	/*
     * Explanation of pointer arithmetic for different types:
     *
     * - Pointer arithmetic works based on the size of the data type.
     * - When you add an integer to a pointer, it moves the pointer by that many bytes.
     * - The size of data types is different, so adding 1 to a pointer of type char moves
     *   the pointer by 1 byte, adding 1 to a pointer of type int moves it by 4 bytes
     *   (on most systems), and adding 1 to a pointer of type long long int moves it by
     *   8 bytes.
     * - This is because char is typically 1 byte, int is often 4 bytes, and long long int
     *   is often 8 bytes.
     */
