#include <stdio.h>

void findMax(float *arr, int size, float *max) {
    *max = *arr; // Инициализируем максимальное значение первым элементом массива

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) { // Сравниваем текущий элемент с максимальным значением
            *max = *(arr + i); // Обновляем максимальное значение, если текущий элемент больше
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

    float max;
    findMax(sequence, N, &max);

    printf("Максимальное число: %f\n", max);

    return 0;
}
