#include <stdio.h>
#include <stdlib.h>

void calculateSums(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size - 1; i++) {
        sum += *(arr + i);

        if (*(arr + i) >= *(arr + i + 1)) {
            printf("%d ", sum);
            sum = 0;
        }
    }

    sum += *(arr + size - 1);
    printf("%d\n", sum);
}

int main() {
    int N;

    printf("Введите количество чисел в последовательности: ");
    scanf("%d", &N);

    int *sequence = (int *)malloc(N * sizeof(int));

    printf("Введите числа:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", sequence + i);
    }

    calculateSums(sequence, N);

    free(sequence);

    return 0;
}
