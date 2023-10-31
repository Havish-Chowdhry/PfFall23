/*
Programmer: Havish Chowdhry
Desc: Write a function for finding factorial of any integer N using recursion.
Date: 31/10/2023
*/


#include <stdio.h>

int factorial(int number)
{
  int answer;
  if (number == 0)
{
  answer = 1;
}
else
{
  answer =  number * factorial(number - 1);
}
  return answer;
}

int main ()
{
  int number;
  printf("Enter a number to calculate a factorial of: ");
  scanf("%d", &number);
  
  printf("The factorial of %d is %d\n", number, factorial(number));
  
  return 0;
}
