#include <stdio.h>

int main() {
    float marks[10];
    float sum = 0, average;
    int aboveAverage = 0;

    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 20) {
                printf("Invalid marks! Enter marks between 0 and 20.\n");
            }
        } while (marks[i] < 0 || marks[i] > 20);
    }

    printf("\nOriginal Student Report:\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum += marks[i];
    }

    average = sum / 10;

    printf("\nClass Average: %.2f\n", average);

    for (int i = 0; i < 10; i++) {
        if (marks[i] > average) {
            aboveAverage++;
        }
    }

    printf("Students Above Average: %d\n", aboveAverage);

    for (int i = 0; i < 10; i++) {
        marks[i] += 1.5;

        if (marks[i] > 20) {
            marks[i] = 20;
        }
    }

    printf("\nRevised Student Report:\n");
    sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum += marks[i];
    }

    average = sum / 10;

    printf("\nRevised Class Average: %.2f\n", average);

    return 0;
}
