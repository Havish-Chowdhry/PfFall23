// The program takes time input in 24 hour format and wishes Good Morning, Good Evening and Good Night accordingly.

# include <stdio.h>

int main () { // start main 
			int hr, min;
			
			printf("Enter the time in 24 hour format Hour, Min: ");
			scanf("%d %d", &hr ,&min);
			
			if (hr>=5 && hr<=11 && min>=00 && min <= 59) {
				printf("Good Morning");
			} else if (hr>=12 && hr<=17 && min>=00 && min <=59) {
				printf("Good Evening");
			} else if (hr>=18 && hr<=24 && min>=01 && min <= 59) {
				printf("Good Night");
			} else {
				printf("Invalid Input");
			}
			return 0;	
} // end main
