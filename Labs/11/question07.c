/*
Programmer: Havish Chowdhry
Desc: 7. Let us work on the menu of a library. Create a structure containing book information like
accession number, name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
Date: 04/12/2023
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char AccessionNumber[50];
    char BookTitle[50];
    char AuthorName[50];
    char Issued; // Flag: 'Y' if issued, 'N' if not issued
} Book;

void displayBookInformation(Book book) {
    printf("\n\t ***Book Information*** \n");
    printf("Accession Number: %s\n", book.AccessionNumber);
    printf("Book title: %s\n", book.BookTitle);
    printf("Author Name: %s\n", book.AuthorName);
    printf("Book Issued (Y/N): %c\n", book.Issued);
}

void displayTotalNumberOfBooks(int numBooks) {
    printf("\nTotal number of books in the library: %d\n", numBooks);
}

void addBook(Book *library, int *numberOfBooks) {
    printf("Enter the Accession Number of the book: ");
    fgets(library[*numberOfBooks].AccessionNumber, sizeof(library[*numberOfBooks].AccessionNumber), stdin);
    library[*numberOfBooks].AccessionNumber[strcspn(library[*numberOfBooks].AccessionNumber, "\n")] = '\0'; // Removing newline character
    while (getchar() != '\n');

    printf("Enter the title of the book: ");
    fgets(library[*numberOfBooks].BookTitle, sizeof(library[*numberOfBooks].BookTitle), stdin);
    library[*numberOfBooks].BookTitle[strcspn(library[*numberOfBooks].BookTitle, "\n")] = '\0'; // Removing newline character
    

    printf("Enter the name of the author of the book: ");
    fgets(library[*numberOfBooks].AuthorName, sizeof(library[*numberOfBooks].AuthorName), stdin);
    library[*numberOfBooks].AuthorName[strcspn(library[*numberOfBooks].AuthorName, "\n")] = '\0'; // Removing newline character
   

    library[*numberOfBooks].Issued = 'N';

    (*numberOfBooks)++;
    displayTotalNumberOfBooks(*numberOfBooks);

}
void displayBooksByAuthor(Book *library, int numBooks, const char *author) {
    int index;
    printf("\nBooks by author %s:\n", author);
    for (index = 0; index < numBooks; index++) {
        printf("Comparing %s with %s\n", library[index].AuthorName, author);
        if (strcasecmp(library[index].AuthorName, author) == 0) {
            printf("Match found!\n");
            displayBookInformation(library[index]);
        }
    }
}

void displayNumberOfBooksByTitle(Book *library, int numBooks, const char *title) {
    int count = 0;
    for (int index = 0; index < numBooks; index++) {
        if (strcmp(library[index].BookTitle, title) == 0) {
            count++;
        }
    }
    printf("\nNumber of books with title %s: %d\n", title, count);
}


void issueBook(Book *library, int *numberOfBooks) {
    char accessionNumber[50];
    printf("Enter the accession number of the book to be issued: ");
    scanf("%s", accessionNumber);

    for (int index = 0; index < *numberOfBooks; index++) {
        if (strcmp(library[index].AccessionNumber, accessionNumber) == 0) {
            if (library[index].Issued == 'N') {
                library[index].Issued = 'Y';
                printf("Book with accession number %s has been issued.\n", accessionNumber);
            } else {
                printf("Book with accession number %s has already been issued.\n", accessionNumber);
            }
            return;
        }
    }
    printf("Book with accession number %s not found in the library.\n", accessionNumber);
}


int main() {
    int choice;
    int numBooks = 5; // Set the initial number of books to 10
    Book library[1000];

    // Initialize data for 10 books
    strcpy(library[0].AccessionNumber, "A001");
    strcpy(library[0].BookTitle, "The Catcher in the Rye");
    strcpy(library[0].AuthorName, "J.D. Salinger");
    library[0].Issued = 'N';

    strcpy(library[1].AccessionNumber, "A002");
    strcpy(library[1].BookTitle, "To Kill a Mockingbird");
    strcpy(library[1].AuthorName, "Harper Lee");
    library[1].Issued = 'N';

    strcpy(library[2].AccessionNumber, "A003");
    strcpy(library[2].BookTitle, "1984");
    strcpy(library[2].AuthorName, "George Orwell");
    library[2].Issued = 'N';
    
    strcpy(library[3].AccessionNumber, "A004");
    strcpy(library[3].BookTitle, "Animal Farm");
    strcpy(library[3].AuthorName, "George Orwell");
    library[3].Issued = 'N';
    
    strcpy(library[4].AccessionNumber, "A005");
    strcpy(library[4].BookTitle, "1984");
    strcpy(library[4].AuthorName, "George Orwell");
    library[4].Issued = 'N';
    
    strcpy(library[5].AccessionNumber, "A006");
    strcpy(library[5].BookTitle, "Lord of the Flies");
    strcpy(library[5].AuthorName, "William Golding");
    library[5].Issued = 'N';
    
    while (choice != 7) {
        printf("\nLibrary Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all the books in the library of a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("7 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: {
                int bookIndex;
                printf("Enter the index of the book to display information: ");
                scanf("%d", &bookIndex);
                if (bookIndex >= 0 && bookIndex < numBooks) {
                    displayBookInformation(library[bookIndex]);
                } else {
                    printf("Invalid book index\n");
                }
                break;
            }
            case 2:
                addBook(library, &numBooks);
                getchar();
                break;
            case 3: {
                char author[50];
                printf("Enter the author's name: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0';
                displayBooksByAuthor(library, numBooks, author);
                break;
            }
            case 4: {
                char title[50];
                printf("Enter the title of the book: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0'; // Removing newline character
                displayNumberOfBooksByTitle(library, numBooks, title);
                break;
            }
            case 5:
                displayTotalNumberOfBooks(numBooks);
                break;
            case 6:
                issueBook(library, &numBooks);
                break;
            case 7:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    }
    return 0;
}
