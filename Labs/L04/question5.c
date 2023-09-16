//The code takes2 DOB of 2 persons and checks who is older
#include <stdio.h>

int main() { // start main
	int person1Day;
	int person2Day;
	int month1;
        int month2;
	int BirthYear1;
	int BirthYear2;

	printf("Enter the date of birth of the first person in the format DD MM YYYY: ");
	scanf("%d  %d  %d", &person1Day, &month1, &BirthYear1);

	printf("Enter the date of birth of the first person in the format DD MM YYYY: ");
	scanf("%d  %d  %d", &person2Day, &month2, &BirthYear2);

	while (BirthYear1==BirthYear2 && month1==month2 && person1Day==person2Day){
		printf("Both persons have the same date of birth");
		return 0;
	}
	
	if (person1Day>person2Day) {
		printf("Person 1 is older than person 2\n");
	} else if(person1Day<person2Day) {
		printf("Person 2 is older\n");
	}
	return 0;

	if (month1>month2) {
		printf("Person 2 is older than person 1\n");
	} else if(month1<month2) {
		printf("Person 1 is older than person 2\n");
		
	}
	return 0;

	
	if (BirthYear1 < BirthYear2) {
		printf("Person 1 is older\n");
	}
	else if (BirthYear1 > BirthYear2) {
		printf("Person2 is older\n");
	}
	
	return 0;
} //end main 
