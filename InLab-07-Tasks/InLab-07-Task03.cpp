#include <stdio.h>

int main() {
    int stock[] = {25, 12, 8, 40, 5, 18, 3, 22};
    int length = sizeof(stock) / sizeof(stock[0]);
    int item, sold;
    int total = 0;
    int leastStock = 0;

    printf("Initial Stock Levels:\n");

    for (int i = 0; i < length; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);

        if (stock[i] < 10) {
            printf("Item %d is LOW on stock - reorder required\n", i + 1);
        }
    }

    while (1) {
        printf("\nEnter item number (1-8) or 0 to finish: ");
        scanf("%d", &item);

        if (item == 0) {
            break;
        }

        if (item < 1 || item > length) {
            printf("Invalid item number!\n");
            continue;
        }

        printf("Enter quantity sold: ");
        scanf("%d", &sold);

        if (sold < 0) {
            printf("Invalid quantity!\n");
        } else if (sold > stock[item - 1]) {
            printf("Error: Not enough stock available!\n");
        } else {
            stock[item - 1] -= sold;
            printf("Sale recorded successfully.\n");
        }
    }

    printf("\nFinal Stock Levels:\n");

    for (int i = 0; i < length; i++) {
        printf("Item %d: %d units\n", i + 1, stock[i]);

        total += stock[i];

        if (stock[i] < stock[leastStock]) {
            leastStock = i;
        }
    }

    printf("\nTotal Units Remaining: %d\n", total);
    printf("Item with Least Stock: Item %d\n", leastStock + 1);
    printf("Least Stock Quantity: %d units\n", stock[leastStock]);

    return 0;
}
