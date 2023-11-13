/*
Programmer : Havish Chowdhry
Desc: The 2D array below represents the availability of flights for different days of the week and two time slots: 
  Morning and Evening. Each row corresponds to a day, and each column corresponds to a time slot. 
  A value of 1 indicates that the flight is available (not full) for that time slot, and 0 indicates that the flight is full. 
  1. Analyze the flight availability for each day and time slot. Determine the day and time slot where the traveler has the highest chance of booking a flight on the basis user preferences i.e. based on time and price. 
  2. The traveler is flexible with the day of travel but prefers the morning time slot. Determine the day(s) when a flight is available in the morning and suggest the best option for booking based on this preference. 
  3. Considering the traveler's preference for an evening flight, identify the day(s) when an evening flight is available and suggest the best option for booking based on this preference. 
  4. The traveler is inquiring about flights on a specific day. Confirm if flights are available or not and provide the prices if available. 
Date: 13/11/2023
*/

#include <stdio.h>

int main() {
    int FlightDetails[5][4] = {
        {1, 300, 0, 9999},
        {1, 320, 1, 310},
        {0, 9999, 1, 280},
        {1, 380, 0, 9999},
        {1, 375, 1, 400},
    };

    int minDayPrice = -1;
    int index, suitablePrice = -1, FlightDay = -1, timeSlot = -1, flag = 0;

    for (index = 0; index < 5; index++) {
        if ((FlightDetails[index][1] != 10000 || FlightDetails[index][3] != 10000) && !flag) {
            minDayPrice = (FlightDetails[index][1] != 10000) ? FlightDetails[index][1] : FlightDetails[index][3];
            suitablePrice = minDayPrice;
            FlightDay = index;
            flag = 1;
            break;
        }
    }

    if (flag) {
        for (index = 0; index < 5; index++) {
            if (FlightDetails[index][1] < minDayPrice && FlightDetails[index][1] != 10000) {
                minDayPrice = FlightDetails[index][1];
                suitablePrice = FlightDetails[index][1];
                FlightDay = index;
                timeSlot = 0;
            }

            if (FlightDetails[index][3] < minDayPrice && FlightDetails[index][3] != 10000) {
                minDayPrice = FlightDetails[index][3];
                suitablePrice = FlightDetails[index][3];
                FlightDay = index;
                timeSlot = 1;
            }
        }
        printf("1. The lowest price can be seen in the Evening time slot which is %d ", minDayPrice);
    }
    printf("\n");
    printf("2. The most suitable time slot is: ");
    if (timeSlot == 0) {
        printf("Morning\n");
    } else if (timeSlot == 1) {
        printf("Evening\n");
    } else {
        printf("No slots available.\n");
    }
    
    
    printf("3. Flight on which Day?: ");
    switch (FlightDay) {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        default:
            printf("Unknown day\n");
    }

    printf("4. The price for flight no. %d on Wednesday is %d with time slot no. %d\n", FlightDay, suitablePrice, timeSlot);


    printf("5. Days with available morning flights:\n");
    for (index = 0; index < 5; index++) {
        if (FlightDetails[index][0] == 1) {
            printf("   Day %d\n", index);
        }
    }

    printf("6. Days with available evening flights:\n");
    for (index = 0; index < 5; index++) {
        if (FlightDetails[index][2] == 1) {
            printf("   Day %d\n", index);
        }
    }

    printf("7. Enter a day (0-4) to check availability: ");
    int specificDay;
    scanf("%d", &specificDay);

    if (specificDay >= 0 && specificDay < 5) {
        printf("   Availability for Day %d:\n", specificDay);
        if (FlightDetails[specificDay][0] == 1) {
            printf("      Morning Flight: Price - %d\n", FlightDetails[specificDay][1]);
        } else {
            printf("      Morning Flight: Not available\n");
        }

        if (FlightDetails[specificDay][2] == 1) {
            printf("      Evening Flight: Price - %d\n", FlightDetails[specificDay][3]);
        } else {
            printf("      Evening Flight: Not available\n");
        }
    } else {
        printf("   Invalid day\n");
    }

    return 0;
}
