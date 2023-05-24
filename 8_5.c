#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void findGCD(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int a = arr[i];
            int b = arr[j];
            int result = gcd(a, b);
            printf("(%d, %d) = %d; ", a, b, result);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Введите размер последовательности: ");
    scanf("%d", &size);

    int arr[size];
    printf("Введите элементы последовательности: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findGCD(arr, size);

    return 0;
}
