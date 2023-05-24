#include <stdio.h>

void countZeros(float *arr, int size, int *count) {
    *count = 0; // Инициализируем счетчик нулей нулевым значением

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == 0.0) { // Проверяем текущий элемент на равенство нулю
            (*count)++; // Увеличиваем счетчик нулей
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

    int zeroCount;
    countZeros(sequence, N, &zeroCount);

    printf("Количество нулей: %d\n", zeroCount);

    return 0;
}
