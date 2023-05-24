#include <stdio.h>

void findMin(float *arr, int size, float *min) {
    *min = *arr; // Инициализируем минимальное значение первым элементом массива

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) { // Сравниваем текущий элемент с минимальным значением
            *min = *(arr + i); // Обновляем минимальное значение, если текущий элемент меньше
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

    float min;
    findMin(sequence, N, &min);

    printf("Минимальное число: %f\n", min);

    return 0;
}
