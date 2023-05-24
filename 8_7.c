#include <stdio.h>

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int isIncreasing(int* array, int size) {
    for (int i = 1; i < size; i++) {
        if (array[i] <= array[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int isDecreasing(int* array, int size) {
    for (int i = 1; i < size; i++) {
        if (array[i] >= array[i - 1]) {
            return 0;
        }
    }
    return 1;
}

void insertElement(int* array, int* size, int element, int position) {
    for (int i = *size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = element;
    (*size)++;
}

int main() {
    int array[100];
    int size;
    int x;

    printf("Введите количество элементов в последовательности: ");
    scanf("%d", &size);

    printf("Введите элементы последовательности:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Введите число x: ");
    scanf("%d", &x);

    printf("Исходная последовательность: ");
    printArray(array, size);

    if (isIncreasing(array, size)) {
        printf("Последовательность является возрастающей.\n");
        insertElement(array, &size, x, size);
    } else if (isDecreasing(array, size)) {
        printf("Последовательность является убывающей.\n");
        insertElement(array, &size, x, 0);
    } else {
        printf("Последовательность не является ни возрастающей, ни убывающей.\n");
    }

    printf("Итоговая последовательность: ");
    printArray(array, size);

    return 0;
}
