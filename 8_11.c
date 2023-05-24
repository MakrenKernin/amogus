#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмен значениями
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    while (1) {
        printf("Введите количество элементов в массиве (не более 100): ");
        scanf("%d", &n);

        if (n <= 100) {
            break;
        }

        printf("Ошибка: количество элементов превышает 100. Попробуйте снова.\n");
    }

    int arr[100];
    srand(time(0));  // Инициализация генератора случайных чисел

    printf("Сгенерированный массив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Генерация случайного числа от 0 до 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Отсортированный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
