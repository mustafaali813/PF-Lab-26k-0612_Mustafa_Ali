#include <stdio.h>

int main()
{
    int category, destination;
    int age, baggage, documents;
    int allowed;
    int remainder;

    printf("Passenger Categories:\n");
    printf("1. Adult\n");
    printf("2. Student\n");
    printf("3. Senior Citizen\n");
    printf("Enter category: ");
    scanf("%d", &category);

    printf("\nDestination:\n");
    printf("1. Domestic\n");
    printf("2. International\n");
    printf("Enter destination: ");
    scanf("%d", &destination);

    printf("\nEnter age: ");
    scanf("%d", &age);

    printf("Enter baggage weight in kg: ");
    scanf("%d", &baggage);

    printf("Are travel documents valid? (1 = Yes, 0 = No): ");
    scanf("%d", &documents);

    switch(category)
    {
        case 1:
            printf("\nPassenger Category: Adult\n");

            switch(destination)
            {
                case 1:
                    printf("Destination: Domestic\n");
                    allowed = 20;
                    break;

                case 2:
                    printf("Destination: International\n");
                    allowed = 30;
                    break;

                default:
                    printf("Invalid destination\n");
                    return 0;
            }
            break;

        case 2:
            printf("\nPassenger Category: Student\n");

            switch(destination)
            {
                case 1:
                    printf("Destination: Domestic\n");
                    allowed = 25;
                    break;

                case 2:
                    printf("Destination: International\n");
                    allowed = 35;
                    break;

                default:
                    printf("Invalid destination\n");
                    return 0;
            }
            break;

        case 3:
            printf("\nPassenger Category: Senior Citizen\n");

            switch(destination)
            {
                case 1:
                    printf("Destination: Domestic\n");
                    allowed = 30;
                    break;

                case 2:
                    printf("Destination: International\n");
                    allowed = 40;
                    break;

                default:
                    printf("Invalid destination\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid passenger category\n");
            return 0;
    }

    printf("Permitted Baggage: %d kg\n", allowed);
    printf("Actual Baggage: %d kg\n", baggage);

    if(documents == 1)
        printf("Document Status: Valid\n");
    else
        printf("Document Status: Invalid\n");

    remainder = age % 5;

    switch(remainder)
    {
        case 0:
            printf("Verification Category: Category A\n");
            break;

        case 1:
            printf("Verification Category: Category B\n");
            break;

        case 2:
            printf("Verification Category: Category C\n");
            break;

        case 3:
            printf("Verification Category: Category D\n");
            break;

        case 4:
            printf("Verification Category: Category E\n");
            break;
    }

    if(category == 3 || (category == 2 && destination == 2))
        printf("Priority Assistance: Available\n");
    else
        printf("Priority Assistance: Not Available\n");

    if(documents == 0)
    {
        printf("Final Boarding Decision: Denied Boarding\n");
    }
    else
    {
        if(baggage <= allowed)
            printf("Final Boarding Decision: Normal Boarding\n");
        else
            printf("Final Boarding Decision: Enhanced Baggage Screening\n");
    }

    return 0;
}