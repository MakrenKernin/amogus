#include <stdio.h>

// Функция для вычисления НОД двух чисел
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int sequence[100]; // Максимальная длина последовательности
    int size;

    printf("Введите длину последовательности: ");
    scanf("%d", &size);

    printf("Введите элементы последовательности:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sequence[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        int a = sequence[i];
        int b = sequence[i + 1];
        int result = gcd(a, b);
        printf("(%d, %d) = %d\n", a, b, result);
    }

    return 0;
}
