#include <stdio.h>

void arithmeticOperations(int a, int b, int* sum, int* difference, int* product, int* quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
    *quotient = a / b;
}

int main() {
    int a, b;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);

    int sum, difference, product, quotient;
    arithmeticOperations(a, b, &sum, &difference, &product, &quotient);

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %d\n", a, b, quotient);

    return 0;
}

