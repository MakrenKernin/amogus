#include <stdio.h>
#include <math.h>

// Функция для вычисления модуля числа с использованием операции ветвления
float absoluteValue(float number) {
    if (number < 0)
        return -number;
    else
        return number;
}

// Функция для вычисления модуля числа без использования операции ветвления
float absoluteValueWithoutBranching_Version1(float number) {
    unsigned int mask = *(unsigned int*)&number;
    mask &= 0x7FFFFFFF; // Применяем битовую маску
    return *(float*)&mask;
}

// Функция для вычисления модуля числа без использования операции ветвления (читерская версия)
float absoluteValueWithoutBranching_Version2(float* number) {
    *number = (*number) * (*number);
    return sqrt(*number);
}

int main() {
    float number;
    printf("Введите вещественное число: ");
    scanf("%f", &number);

    // Вычисление модуля с использованием операции ветвления
    float resultWithBranching = absoluteValue(number);
    printf("Модуль числа с использованием операции ветвления: %.2f\n", resultWithBranching);

    // Вычисление модуля без использования операции ветвления
    float resultWithoutBranching1 = absoluteValueWithoutBranching_Version1(number);
    printf("Модуль числа без использования операции ветвления: %.2f\n", resultWithoutBranching1);
    
    // Вычисление модуля без использования операции ветвления (читерская версия)
    float resultWithoutBranching2 = absoluteValueWithoutBranching_Version2(&number);
    printf("Модуль числа без использования операции ветвления: %.2f\n", resultWithoutBranching2);

    return 0;
}
