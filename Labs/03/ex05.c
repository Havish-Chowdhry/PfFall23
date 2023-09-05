question ##5 of lab manual 1

  #include <stdio.h>

int main() {
    int south1 = 10;
    int south2 = 5;
    int west = 10;
    int north = 15;
    
    float fuelconsumption = 2.0;
    
    int totalDistance = (south1 + south2 + west + north);
    int totalFuelConsumed = (totalDistance * fuelconsumption);

    printf("The total distance travelled in kilometres is: %d\n", totalDistance);
    printf("The total fuel consumed in litres is: %d\n", totalFuelConsumed);
    return 0;
}
