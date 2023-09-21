// This code takes one input and then n inputs and takes input intithe first input limit is met then prints all the inputs

#include <stdio.h>

int main () { //start main 
    int number;
    printf("Enter input size less than 100: ");
    scanf("%d", &number);
    
    int index=0;
    int num[100] = {0};
    
    while (index<number) {
        int input;
        printf("Enter a number %d: ",(index+1));
        scanf("%d", &input);
        num[index] = input;
        index = index + 1;
    } // end while 
    
    index = 0;
    while (index<number) {
        printf("%d ",num[index]);
        index = index + 1;
    } // end while 
    return 0;
} // end main
