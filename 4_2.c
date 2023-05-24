#include <stdio.h>

void performOperations(double a, double b, double *sum, double *difference, double *product, double *quotient) {
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
    *quotient = a / b;
}

int main() {
    double a, b;
    printf("Введите два вещественных числа: ");
    scanf("%lf %lf", &a, &b);

    double sum, difference, product, quotient;
    performOperations(a, b, &sum, &difference, &product, &quotient);

    printf("%.2lf + %.2lf = %.2lf\n", a, b, sum);
    printf("%.2lf - %.2lf = %.2lf\n", a, b, difference);
    printf("%.2lf * %.2lf = %.2lf\n", a, b, product);
    printf("%.2lf / %.2lf = %.2lf\n", a, b, quotient);

    return 0;
}
