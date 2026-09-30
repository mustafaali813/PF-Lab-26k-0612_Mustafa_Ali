#include<stdio.h>
int main(){
    int marks1, marks2, marks3, students;
    float average;
    char grade;
    char *status;
    printf("Enter total students in the class: ");
    scanf("%d", &students);
    for(int count = 1; count <= students; count++){
        printf("Enter marks of student %d\n", count);
        printf("Enter marks for subject 1: ");
        scanf("%d", &marks1);
        printf("Enter marks for subject 2: ");
        scanf("%d", &marks2);
        printf("Enter marks for subject 3: ");
        scanf("%d", &marks3);
        average = (marks1 + marks2 + marks3)/3;
        switch((int)average / 10){
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            case 5:
                grade = 'F';
                break;
            default:
                printf("Invalid marks!");
                break;
        }
        status =((average >= 60)&&(marks1>=40 && marks2>= 40 && marks3>= 40))? "Pass" : "Fail";
        printf("***STUDENT %d RESULT***\n", count);
        printf("Average marks of student in three subjects: %f\n", average);
        printf("Grade of student: %c\n", grade);
        printf("Status of student: %s\n", status);
    }
    return 0;
}