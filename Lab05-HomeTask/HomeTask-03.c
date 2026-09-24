#include <stdio.h>

int main() {
    int product, customer, orderNumber;
    int distance;
    float orderAmount, discountRate;
    float discountAmount, finalAmount;
    float deliveryCharge, priorityCharge, totalAmount;
    int processingGroup;
    char *productName;
    char *customerName;
    char *shippingStatus;
    char *priorityStatus;
    char *groupName;

    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Books\n");
    printf("4. Household\n");
    printf("Enter product category: ");
    scanf("%d", &product);

    printf("\n1. Regular\n");
    printf("2. Premium\n");
    printf("3. Corporate\n");
    printf("Enter customer category: ");
    scanf("%d", &customer);

    printf("Enter order amount: ");
    scanf("%f", &orderAmount);

    printf("Enter delivery distance in km: ");
    scanf("%d", &distance);

    printf("Enter order number: ");
    scanf("%d", &orderNumber);

    switch (product) {
        case 1:
            productName = "Electronics";

            switch (customer) {
                case 1: discountRate = 5; break;
                case 2: discountRate = 10; break;
                case 3: discountRate = 15; break;
                default: printf("Invalid customer category\n"); return 0;
            }
            break;

        case 2:
            productName = "Clothing";

            switch (customer) {
                case 1: discountRate = 10; break;
                case 2: discountRate = 15; break;
                case 3: discountRate = 20; break;
                default: printf("Invalid customer category\n"); return 0;
            }
            break;

        case 3:
            productName = "Books";

            switch (customer) {
                case 1: discountRate = 8; break;
                case 2: discountRate = 12; break;
                case 3: discountRate = 18; break;
                default: printf("Invalid customer category\n"); return 0;
            }
            break;

        case 4:
            productName = "Household";

            switch (customer) {
                case 1: discountRate = 7; break;
                case 2: discountRate = 14; break;
                case 3: discountRate = 20; break;
                default: printf("Invalid customer category\n"); return 0;
            }
            break;

        default:
            printf("Invalid product category\n");
            return 0;
    }

    switch (customer) {
        case 1:
            customerName = "Regular";
            break;
        case 2:
            customerName = "Premium";
            break;
        case 3:
            customerName = "Corporate";
            break;
    }

    discountAmount = orderAmount * discountRate / 100;
    finalAmount = orderAmount - discountAmount;

    if ((finalAmount >= 5000) || (customer == 2) || (customer == 3)) {
        shippingStatus = "Free Shipping";
        deliveryCharge = 0;
    } else {
        shippingStatus = "Paid Shipping";

        if (distance <= 10)
            deliveryCharge = 200;
        else if (distance <= 20)
            deliveryCharge = 300;
        else
            deliveryCharge = 500;
    }

    if ((customer == 2 || customer == 3) && orderAmount >= 10000) {
        priorityStatus = "Priority Delivery";
        priorityCharge = 500;
    } else {
        priorityStatus = "Normal Delivery";
        priorityCharge = 0;
    }

    processingGroup = orderNumber % 4;

    groupName = processingGroup == 0 ? "Processing Group A" :
                processingGroup == 1 ? "Processing Group B" :
                processingGroup == 2 ? "Processing Group C" :
                "Processing Group D";

    totalAmount = finalAmount + deliveryCharge + priorityCharge;

    printf("\nE-Commerce Order Report\n");
    printf("Product Category: %s\n", productName);
    printf("Customer Category: %s\n", customerName);
    printf("Original Order Amount: Rs. %.2f\n", orderAmount);
    printf("Discount: %.0f%%\n", discountRate);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);
    printf("Delivery Distance: %d km\n", distance);
    printf("Shipping Status: %s\n", shippingStatus);
    printf("Delivery Charges: Rs. %.2f\n", deliveryCharge);
    printf("Priority Status: %s\n", priorityStatus);
    printf("Priority Charges: Rs. %.2f\n", priorityCharge);
    printf("Processing Group: %s\n", groupName);
    printf("Total Amount Payable: Rs. %.2f\n", totalAmount);

    return 0;
}