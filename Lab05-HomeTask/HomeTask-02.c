#include <stdio.h>

int main() {
    int department;
    int theory, practical, attendance;
    int requiredTheory, requiredPractical, requiredAttendance;
    int remainder;
    char *departmentName;
    char *seatCategory;

    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Business Administration\n");
    printf("4. Mathematics\n");
    printf("Enter department: ");
    scanf("%d", &department);

    printf("Enter theory marks: ");
    scanf("%d", &theory);

    printf("Enter practical marks: ");
    scanf("%d", &practical);

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    switch (department) {
        case 1:
            departmentName = "Computer Science";
            requiredTheory = 50;
            requiredPractical = 40;
            requiredAttendance = 75;
            break;

        case 2:
            departmentName = "Electrical Engineering";
            requiredTheory = 55;
            requiredPractical = 45;
            requiredAttendance = 75;
            break;

        case 3:
            departmentName = "Business Administration";
            requiredTheory = 50;
            requiredPractical = 35;
            requiredAttendance = 80;
            break;

        case 4:
            departmentName = "Mathematics";
            requiredTheory = 60;
            requiredPractical = 40;
            requiredAttendance = 75;
            break;

        default:
            printf("Invalid department\n");
            return 0;
    }

    remainder = theory % 3;

    seatCategory = remainder == 0 ? "Seat Category A" :
                   remainder == 1 ? "Seat Category B" :
                   "Seat Category C";

    printf("\nUniversity Examination Report\n");
    printf("Department: %s\n", departmentName);
    printf("Theory Marks: %d\n", theory);
    printf("Practical Marks: %d\n", practical);
    printf("Attendance: %d%%\n", attendance);

    printf("\nPassing Requirements:\n");
    printf("Theory: %d\n", requiredTheory);
    printf("Practical: %d\n", requiredPractical);
    printf("Attendance: %d%%\n", requiredAttendance);

    printf("Distinction: %s\n",
           (theory >= 85 && practical >= 80 && attendance >= 90)
           ? "Eligible" : "Not Eligible");

    printf("Seat Category: %s\n", seatCategory);

    printf("Final Result: %s\n",
           (theory >= requiredTheory &&
            practical >= requiredPractical &&
            attendance >= requiredAttendance)
           ? "Passed" : "Failed");

    return 0;
}