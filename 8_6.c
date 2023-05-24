#include <stdio.h>

// Функция для нахождения НОД двух чисел
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int numbers[100]; // Массив для хранения чисел
    int count; // Количество чисел в последовательности

    printf("Введите количество чисел в последовательности: ");
    scanf("%d", &count);

    printf("Введите числа через пробел: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    // Нахождение НОД всех чисел в последовательности
    int result = numbers[0];
    for (int i = 1; i < count; i++) {
        result = gcd(result, numbers[i]);
    }

    // Вывод результата
    printf("НОД(");
    for (int i = 0; i < count; i++) {
        printf("%d", numbers[i]);
        if (i != count - 1) {
            printf(", ");
        }
    }
    printf(") = %d\n", result);

    return 0;
}
