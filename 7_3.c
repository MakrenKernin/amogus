#include <stdio.h>

void findAverage(float *arr, int size, float *average) {
    float sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Суммируем элементы последовательности
    }

    *average = sum / size; // Вычисляем среднее арифметическое
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

    float average;
    findAverage(sequence, N, &average);

    printf("Среднее арифметическое: %f\n", average);

    return 0;
}
