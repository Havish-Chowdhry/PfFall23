// The program asks the user whether he wants to delete particular items with Y for Yes and N for No. The program uses switch statments.

#include <stdio.h>

int main () { // start main
	
	char Y, N, response;
	
	printf("Are you sure uyou want to delete this item [Y] or [N]: ");
	scanf(" %c" ,&response);
	
	switch(response) {
		case 'Y':
			printf("Deleted Successfully");
			break;
		case'N':
			printf("Deleted Cancelled");
			break;
		default:
			printf("Invalid Input");
	}
	return 0;	
} // end main
