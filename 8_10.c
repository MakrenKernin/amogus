#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100];
    int n, i;

    while (1) {
        printf("Введите количество элементов в массиве (не более 100): ");
        scanf("%d", &n);

        if (n <= 100) {
            break;
        }

        printf("Ошибка: количество элементов превышает 100. Попробуйте снова.\n");
    }

    srand(time(0));  // Инициализация генератора случайных чисел

    printf("Сгенерированный массив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Генерация случайного числа от 0 до 99
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertionSort(arr, n);

    printf("Отсортированный массив:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
