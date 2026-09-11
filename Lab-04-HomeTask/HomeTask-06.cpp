#include <stdio.h>

int main() {
    int choice, number;

    do {
        printf("\n1. Even/Odd\n");
        printf("2. Prime\n");
        printf("3. Square\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number % 2 == 0) {
                    printf("%d is Even\n", number);
                }
                else {
                    printf("%d is Odd\n", number);
                }
                break;


            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number <= 1) {
                    printf("%d is not Prime\n", number);
                }
                else {
                    if (number == 2 || number == 3 || number == 5 || number == 7) {
                        printf("%d is Prime\n", number);
                    }
                    else {
                        if (number % 2 == 0) {
                            printf("%d is not Prime\n", number);
                        }
                        else {
                            if (number % 3 == 0) {
                                printf("%d is not Prime\n", number);
                            }
                            else {
                                if (number % 5 == 0) {
                                    printf("%d is not Prime\n", number);
                                }
                                else {
                                    if (number % 7 == 0) {
                                        printf("%d is not Prime\n", number);
                                    }
                                    else {
                                        printf("%d is Prime\n", number);
                                    }
                                }
                            }
                        }
                    }
                }
                break;


            case 3:
                printf("Enter a number: ");
                scanf("%d", &number);

                printf("Square of %d = %d\n", number, number * number);
                break;


            case 4:
                printf("Exiting program...\n");
                break;


            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
