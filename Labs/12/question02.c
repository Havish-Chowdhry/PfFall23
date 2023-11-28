/*
  Programmer: Havish Chowdhry
  Desc: Make 2 separate blank word files with text, "This is a test.". 
        Open them in a C program as a binary file and compare the contents. Are the 2 files equal?
  Date: 28/11/2023
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *myfile1, *myfile2;

    // Open files for writing
    myfile1 = fopen("wordfile.docx1", "wb");
    myfile2 = fopen("wordfile.docx2", "wb");

    if (!myfile1 || !myfile2) {
        printf("Error opening the file for writing\n");
        return 1;
    }

    const char contents[] = "This is a test.";

    fwrite(contents, sizeof(char), sizeof(contents) - 1, myfile1);
    fwrite(contents, sizeof(char), sizeof(contents) - 1, myfile2);

    fclose(myfile1);
    fclose(myfile2);

    // Open files for reading
    myfile1 = fopen("wordfile.docx1", "rb");
    myfile2 = fopen("wordfile.docx2", "rb");

    if (!myfile1 || !myfile2) {
        printf("Error opening the file for reading\n");
        return 1;
    }

    int char1, char2;

    // Read characters and compare
    do {
        char1 = fgetc(myfile1);
        char2 = fgetc(myfile2);

        if (char1 != char2) {
            printf("Files are not equal.\n");
            break;
        }
    } while (char1 != EOF && char2 != EOF);

    if (char1 == EOF && char2 == EOF) {
        printf("Files are equal.\n");
    }

    fclose(myfile1);
    fclose(myfile2);

    return 0;
}
