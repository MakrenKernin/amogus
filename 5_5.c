#include <stdio.h>

// Функция для выполнения арифметического округления с использованием оператора ветвления
int roundWithBranching(float num) {
    int rounded = (int)num;
    if (num - rounded >= 0.5)
        rounded++;
    return rounded;
}

// Функция для выполнения арифметического округления без использования оператора ветвления
int roundWithoutBranching(float num) {
    int rounded = (int)(num + 0.5);
    return rounded;
}

int main() {
    float input;
    printf("Введите вещественное число: ");
    scanf("%f", &input);

    // Вызов функции с использованием оператора ветвления
    int roundedWithBranching = roundWithBranching(input);
    printf("Арифметическое округление (с оператором ветвления): %d\n", roundedWithBranching);

    // Вызов функции без использования оператора ветвления
    int roundedWithoutBranching = roundWithoutBranching(input);
    printf("Арифметическое округление (без оператора ветвления): %d\n", roundedWithoutBranching);

    return 0;
}
