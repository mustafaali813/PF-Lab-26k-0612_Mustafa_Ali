#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 25;
    float price = 10.5f;
    double pi = 3.14159;
    char grade = 'A';
    bool status = true;

    printf("int: %d, size: %zu bytes\n", num, sizeof(num));
    printf("float: %.2f, size: %zu bytes\n", price, sizeof(price));
    printf("double: %.5f, size: %zu bytes\n", pi, sizeof(pi));
    printf("char: %c, size: %zu bytes\n", grade, sizeof(grade));
    printf("bool: %d, size: %zu bytes\n", status, sizeof(status));

    return 0;
}
