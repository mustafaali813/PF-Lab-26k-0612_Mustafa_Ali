#include <stdio.h>

int main()
{
    int department;
    int age, heartRate, severity;
    float temperature;
    int consciousness;
    int emergency = 0;
    int critical;
    int senior;
    int tempAlert;
    int remainder;

    printf("Hospital Emergency Departments:\n");
    printf("1. General Emergency\n");
    printf("2. Cardiology\n");
    printf("3. Neurology\n");
    printf("4. Trauma\n");
    printf("Enter department: ");
    scanf("%d", &department);

    printf("\nEnter patient age: ");
    scanf("%d", &age);

    printf("Enter heart rate: ");
    scanf("%d", &heartRate);

    printf("Enter body temperature: ");
    scanf("%f", &temperature);

    printf("Is the patient conscious? (1 = Yes, 0 = No): ");
    scanf("%d", &consciousness);

    printf("Enter severity level (1-5): ");
    scanf("%d", &severity);

    switch(department)
    {
        case 1:
            printf("\nDepartment: General Emergency\n");

            switch(severity)
            {
                case 4:
                case 5:
                    emergency = 1;
                    break;

                default:
                    emergency = 0;
            }
            break;

        case 2:
            printf("\nDepartment: Cardiology\n");

            switch(severity)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    if(heartRate < 50 || heartRate > 120)
                        emergency = 1;
                    break;

                default:
                    emergency = 0;
            }
            break;

        case 3:
            printf("\nDepartment: Neurology\n");

            switch(consciousness)
            {
                case 0:
                    emergency = 1;
                    break;

                case 1:
                    emergency = 0;
                    break;

                default:
                    emergency = 0;
            }
            break;

        case 4:
            printf("\nDepartment: Trauma\n");

            switch(severity)
            {
                case 4:
                case 5:
                    emergency = 1;
                    break;

                default:
                    emergency = 0;
            }
            break;

        default:
            printf("Invalid department\n");
            return 0;
    }

    if((heartRate < 50 || heartRate > 120) && consciousness == 0)
        critical = 1;
    else
        critical = 0;

    if(age >= 65)
        senior = 1;
    else
        senior = 0;

    if(temperature < 36 || temperature > 38)
        tempAlert = 1;
    else
        tempAlert = 0;

    remainder = (age + heartRate) % 4;

    printf("\n--- Patient Information ---\n");
    printf("Age: %d\n", age);
    printf("Heart Rate: %d bpm\n", heartRate);
    printf("Temperature: %.1f C\n", temperature);
    printf("Severity Level: %d\n", severity);

    if(consciousness == 1)
        printf("Consciousness: Conscious\n");
    else
        printf("Consciousness: Unconscious\n");

    if(emergency == 1)
        printf("Department Priority: Emergency\n");
    else
        printf("Department Priority: Normal\n");

    if(critical == 1)
        printf("Critical Condition: Yes\n");
    else
        printf("Critical Condition: No\n");

    if(senior == 1)
        printf("Senior Priority: Yes\n");
    else
        printf("Senior Priority: No\n");

    if(tempAlert == 1)
        printf("Temperature Alert: Yes\n");
    else
        printf("Temperature Alert: No\n");

    switch(remainder)
    {
        case 0:
            printf("Case Category: A\n");
            break;

        case 1:
            printf("Case Category: B\n");
            break;

        case 2:
            printf("Case Category: C\n");
            break;

        case 3:
            printf("Case Category: D\n");
            break;
    }

    if(critical == 1)
    {
        printf("Final Triage Decision: Immediate Medical Attention\n");
    }
    else
    {
        if(emergency == 1 || senior == 1 || tempAlert == 1)
            printf("Final Triage Decision: Priority Further Assessment\n");
        else
            printf("Final Triage Decision: Routine Medical Assessment\n");
    }

    return 0;
}