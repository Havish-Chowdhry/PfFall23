/*
Programmer : Havish Chowdhry
Desc: Write a function for finding product of 2 numbers without using multiplication operator and 
loops. Use recursion and addition only.
Date: 31/10/2023
*/


#include <stdio.h>

int product(num1, num2)
{
    int result;
    if (num1 ==  0  || num2 == 0)
    {
        result = 0;
    }
    else
    {
        result = num1 + product (num1, num2 -1);    
    }
    return result;
}

int main ()
{
    int num1, num2, result;
    printf ("Enter a value for num1: ");
    scanf("%d" , &num1);
    printf ("Enter a value for num2: ");
    scanf("%d" , &num2);
   
    result = product(num1, num2);
    printf("The product of %d x %d = %d", num1, num2, result);
    return 0;
}
