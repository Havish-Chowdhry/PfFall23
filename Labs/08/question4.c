/* 
Programmer : Havish Chowdhry
Desc: Your task is to create a C program that performs password length validation and user authentication based on the
given requirements below:
a) Prompts the user to enter a password.
b) Validates the entered password by checking if it is at least 8 characters long.
c) If the password meets the length requirement, the program should compare it to a stored password
"Secure123."
d) If the entered password matches the stored password, display "Login successful. Welcome!" Otherwise,
display "Login failed. Incorrect password."
Date: 24/10/2023
*/

# include <stdio.h>
# include <string.h>

int main ()
{
	int n; 
	printf("Enter a value for n to get the elements of the array: ");
	scanf("%d",&n);
	
	char myPassword[n];
	
	printf("Enter your password: ");
	scanf("%s", &myPassword);
	
	if (strlen(myPassword) >= 8)
	{
		if (strcmp(myPassword, "Secure123.") == 0)
		{
			printf("Login successful. Welcome!\n");
		}
		else 
		{
			printf("Login failed. Incorrect Password. \n");
		}
	}
	else 
	{
		printf("Login failed. Password should be atleast 8 characters long. \n");
	}
	
	return 0;
}
