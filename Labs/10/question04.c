/*
Programmer: Havish Chowdhry
Desc: Develop a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence 
      while keeping the words in their original order. 
      Print the modified sentence.
Date: 14/11/2023
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    while (start < end) {
        // Swap characters at start and end pointers
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

void reverseSentence(char* sentence) {
    char *start = sentence, *end = sentence;

    while (*end != '\0') {
        // Move the 'end' pointer until a space or the end of the string is encountered
        while (*end != ' ' && *end != '\0') {
            end++;
        }

        // Reverse the current word using the 'start' and 'end' pointers
        reverseWord(start, end - 1);

        // If the end of the string is reached, break out of the loop
        if (*end == '\0') {
            break;
        }

        // Move 'start' and 'end' pointers to the next word
        start = end + 1;
        end = start;
    }
}

int main() {
    // Assuming a maximum sentence length of 100 characters
    char sentence[100];

    // Input a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the input
    sentence[strcspn(sentence, "\n")] = '\0';

    // Reverse each word in the sentence
    reverseSentence(sentence);

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
