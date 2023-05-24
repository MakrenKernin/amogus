#include <stdio.h>

void calculateSum(float *arr, int size, float *sum) {
    *sum = 0; // Инициализируем сумму нулевым значением

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > 0) { // Проверяем, является ли текущий элемент положительным
            *sum += *(arr + i); // Добавляем положительное число к сумме
        }
    }
}

int main() {
    int N;

    printf("Введите количество чисел в последовательности: ");
    scanf("%d", &N);

    float sequence[N];

    printf("Введите числа:\n");
    for (int i = 0; i < N; i++) {
        scanf("%f", &sequence[i]);
    }

    float sum;
    calculateSum(sequence, N, &sum);

    printf("Сумма положительных чисел: %f\n", sum);

    return 0;
}
