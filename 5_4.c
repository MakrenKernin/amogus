#include <stdio.h>

void splitFloat(float number, int *integerPart, float *fractionalPart) {
    *integerPart = (int)number;     // Получаем целую часть числа
    *fractionalPart = number - *integerPart;   // Получаем дробную часть числа
}

int main() {
    float inputNumber;
    int integerPart;
    float fractionalPart;

    printf("Введите вещественное число: ");
    scanf("%f", &inputNumber);

    splitFloat(inputNumber, &integerPart, &fractionalPart);

    printf("Целая часть: %d\n", integerPart);
    printf("Дробная часть: %.3f\n", fractionalPart);

    return 0;
}
