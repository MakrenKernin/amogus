#include <stdio.h>

// Функция для подсчета абсолютного количества инверсий
int countInversions(int arr[], int n) {
    int inversions = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    return inversions;
}

// Функция для подсчета относительного количества инверсий
float calculateRelativeInversions(int arr[], int n) {
    int absoluteInversions = countInversions(arr, n);
    float relativeInversions = (float)absoluteInversions / (n * (n - 1) / 2);
    return relativeInversions;
}

int main() {
    int arr[] = {4, 3, 2, 1}; // Пример входного массива
    int size = sizeof(arr) / sizeof(arr[0]);

    // Выводим исходный массив
    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Вычисляем абсолютное количество инверсий
    int absoluteInversions = countInversions(arr, size);
    printf("Абсолютное количество инверсий: %d\n", absoluteInversions);

    // Вычисляем относительное количество инверсий
    float relativeInversions = calculateRelativeInversions(arr, size);
    printf("Относительное количество инверсий: %.2f\n", relativeInversions);

    return 0;
}
