#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n, i;
    
    while (1) {
        printf("Введите количество элементов в массиве (не более 100): ");
        scanf("%d", &n);

        if (n <= 100) {
            break;
        }

        printf("Ошибка: количество элементов превышает 100. Попробуйте снова.\n");
    }
    
    int arr[100];
    
    printf("Введите элементы массива через пробел:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Исходный массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    selectionSort(arr, n);
    
    printf("Отсортированный массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
