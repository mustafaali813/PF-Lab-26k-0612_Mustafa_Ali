#include <stdio.h>

int main() {
    int value, option;

    while (1) {
        printf("Enter current appliance value (-1 to stop): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        printf("\n1. Switch Water Heater ON\n");
        printf("2. Switch Air Conditioner OFF\n");
        printf("3. Flip Main Lights\n");
        printf("4. Check Security Camera\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:
                value = value | 2;
                break;

            case 2:
                value = value & ~4;
                break;
            case 3:
                value = value ^ 1;
                break;

            case 4:
                if (value & 8)
                    printf("Security Camera: ON\n");
                else
                    printf("Security Camera: OFF\n");
                break;

            default:
                printf("Invalid option.\n");
        }
        printf("New combined value: %d\n", value);
        if ((value & 4) && (value & 2))
            printf("Overload Risk: Air Conditioner and Water Heater are both ON.\n");
        else
            printf("No overload.\n");

        printf("\n");
    }

    printf("Shift ended.\n");

    return 0;
}
