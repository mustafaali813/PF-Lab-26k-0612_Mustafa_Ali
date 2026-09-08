#include <stdio.h>

int main()
{
    int age = 19;
    float marks = 85.5f;
    double fee = 129000.75;
    char grade = 'A';
    char name[] = "Mustafa";
    long rollNumber = 230145;

    printf("Name: %s | Age: %d | Marks: %.2f | Fee: %.2f | Grade: %c | Roll No: %ld\n",
           name, age, marks, fee, grade, rollNumber);

    return 0;
}
