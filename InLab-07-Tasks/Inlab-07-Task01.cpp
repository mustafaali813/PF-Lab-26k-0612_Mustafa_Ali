#include <stdio.h>

int main() {
    int temperature[] = {31, 33, 35, 34, 38, 36, 32};
    int length = sizeof(temperature) / sizeof(temperature[0]);
    int highest, lowest;
    float sum, average;

    printf("Original Temperatures:\n");

    for (int i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = lowest = temperature[0];
    sum = 0;

    for (int i = 0; i < length; i++) {
        if (temperature[i] > highest)
            highest = temperature[i];

        if (temperature[i] < lowest)
            lowest = temperature[i];

        sum += temperature[i];
    }

    average = sum / length;

    printf("\nHighest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    temperature[2] = 37;

    printf("\nUpdated Temperatures:\n");

    for (int i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = lowest = temperature[0];
    sum = 0;

    for (int i = 0; i < length; i++) {
        if (temperature[i] > highest)
            highest = temperature[i];

        if (temperature[i] < lowest)
            lowest = temperature[i];

        sum += temperature[i];
    }

    average = sum / length;

    printf("\nUpdated Highest Temperature: %d C\n", highest);
    printf("Updated Lowest Temperature: %d C\n", lowest);
    printf("Updated Average Temperature: %.2f C\n", average);

    printf("\nMemory Addresses:\n");

    for (int i = 0; i < length; i++) {
        printf("Day %d: %p\n", i + 1, (void *)&temperature[i]);
    }

    return 0;
}
