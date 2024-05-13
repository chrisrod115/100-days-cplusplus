#include <stdio.h>

#define SIZE 7

int main() {
    float temperature[SIZE];
    int i;
    float sum = 0.0;
    float hottest_temp, coldest_temp; // Declare variables here

    for (i = 0; i < SIZE; i++) {
        printf("Enter the temperature on day %d: ", i + 1); // Day numbering starts from 1
        scanf("%f", &temperature[i]);
        sum += temperature[i]; // Accumulate sum for calculating average later

        // Initialize hottest_temp and coldest_temp with the first temperature
        if (i == 0) {
            hottest_temp = temperature[i];
            coldest_temp = temperature[i];
        }

        if (temperature[i] > hottest_temp) { // Update hottest temperature
            hottest_temp = temperature[i];
        }

        if (temperature[i] < coldest_temp) { // Update coldest temperature
            coldest_temp = temperature[i];
        }
    }

    printf("Average temperature: %.1f\n", sum / SIZE); // Print average temperature

    // Print hottest and coldest temperatures
    printf("Hottest temperature: %.1f\n", hottest_temp);
    printf("Coldest temperature: %.1f\n", coldest_temp);

    return 0;
}