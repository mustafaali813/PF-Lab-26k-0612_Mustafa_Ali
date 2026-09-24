#include <stdio.h>

int main() {
    int securityStatus = 0;
    int operation, device, mode;

    printf("1. Activate Device\n");
    printf("2. Deactivate Device\n");
    printf("3. Check Device Status\n");
    printf("4. Toggle Device\n");
    printf("5. Security Mode\n");
    printf("Enter operation: ");
    scanf("%d", &operation);

    if (operation >= 1 && operation <= 4) {
        printf("\n1. Main Door Lock\n");
        printf("2. Alarm System\n");
        printf("3. CCTV Camera\n");
        printf("4. Motion Sensor\n");
        printf("Enter device: ");
        scanf("%d", &device);

        switch (operation) {
            case 1:
                switch (device) {
                    case 1: securityStatus = securityStatus | 1; break;
                    case 2: securityStatus = securityStatus | 2; break;
                    case 3: securityStatus = securityStatus | 4; break;
                    case 4: securityStatus = securityStatus | 8; break;
                    default: printf("Invalid device\n");
                }
                break;

            case 2:
                switch (device) {
                    case 1: securityStatus = securityStatus & ~1; break;
                    case 2: securityStatus = securityStatus & ~2; break;
                    case 3: securityStatus = securityStatus & ~4; break;
                    case 4: securityStatus = securityStatus & ~8; break;
                    default: printf("Invalid device\n");
                }
                break;

            case 3:
                switch (device) {
                    case 1: printf("%s\n", (securityStatus & 1) ? "Main Door Lock: Active" : "Main Door Lock: Inactive"); break;
                    case 2: printf("%s\n", (securityStatus & 2) ? "Alarm System: Active" : "Alarm System: Inactive"); break;
                    case 3: printf("%s\n", (securityStatus & 4) ? "CCTV Camera: Active" : "CCTV Camera: Inactive"); break;
                    case 4: printf("%s\n", (securityStatus & 8) ? "Motion Sensor: Active" : "Motion Sensor: Inactive"); break;
                    default: printf("Invalid device\n");
                }
                break;

            case 4:
                switch (device) {
                    case 1: securityStatus = securityStatus ^ 1; break;
                    case 2: securityStatus = securityStatus ^ 2; break;
                    case 3: securityStatus = securityStatus ^ 4; break;
                    case 4: securityStatus = securityStatus ^ 8; break;
                    default: printf("Invalid device\n");
                }
                break;
        }
    } else if (operation == 5) {
        printf("\n1. Home Mode\n");
        printf("2. Away Mode\n");
        printf("3. Night Mode\n");
        printf("Enter mode: ");
        scanf("%d", &mode);

        switch (mode) {
            case 1:
                securityStatus = securityStatus | 1 | 4;
                break;

            case 2:
                securityStatus = securityStatus | 1 | 2 | 4 | 8;
                break;

            case 3:
                securityStatus = securityStatus | 1 | 2 | 8;
                break;

            default:
                printf("Invalid mode\n");
        }
    } else {
        printf("Invalid operation\n");
    }

    printf("\nSecurity Status:\n");
    printf("Main Door Lock [1]: %s\n", (securityStatus & 1) ? "Active" : "Inactive");
    printf("Alarm System [2]: %s\n", (securityStatus & 2) ? "Active" : "Inactive");
    printf("CCTV Camera [4]: %s\n", (securityStatus & 4) ? "Active" : "Inactive");
    printf("Motion Sensor [8]: %s\n", (securityStatus & 8) ? "Active" : "Inactive");

    printf("Binary Status: %d %d %d %d\n",
           (securityStatus & 8) ? 1 : 0,
           (securityStatus & 4) ? 1 : 0,
           (securityStatus & 2) ? 1 : 0,
           (securityStatus & 1) ? 1 : 0);

    printf("Security System: %s\n",
           ((securityStatus & 1) && (securityStatus & 2) &&
            (securityStatus & 4) && (securityStatus & 8))
           ? "Fully Armed" : "Not Fully Armed");

    return 0;
}