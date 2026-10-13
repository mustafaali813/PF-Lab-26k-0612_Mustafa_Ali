#include <stdio.h>

int main() {
    float marks[10];
    float sum = 0, average;
    int i, aboveAverage = 0;

    for (i = 0; i < 10; i++) {
        do {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 20) {
                printf("Invalid marks! Enter marks between 0 and 20.\n");
            }
        } while (marks[i] < 0 || marks[i] > 20);
    }

    printf("\nStudent Marks Report:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }

        sum += marks[i];
    }

    average = sum / 10;

    printf("\nClass Average: %.2f\n", average);

    for (i = 0; i < 10; i++) {
        if (marks[i] > average) {
            aboveAverage++;
        }
    }

    printf("Students Above Average: %d\n", aboveAverage);

    for (i = 0; i < 10; i++) {
        marks[i] += 1.5;

        if (marks[i] > 20) {
            marks[i] = 20;
        }
    }

    sum = 0;
    aboveAverage = 0;

    printf("\nRevised Student Marks Report:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }

        sum += marks[i];
    }

    average = sum / 10;

    printf("\nRevised Class Average: %.2f\n", average);

    for (i = 0; i < 10; i++) {
        if (marks[i] > average) {
            aboveAverage++;
        }
    }

    printf("Students Above Revised Average: %d\n", aboveAverage);

    return 0;
}
