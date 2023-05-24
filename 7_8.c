#include <stdio.h>

void printReverseDigits(int *num) {
    while (*num != 0) {
        printf("%d ", *num % 10);
        *num /= 10;
    }
}

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    printf("Разряды числа в обратном порядке: ");
    printReverseDigits(&n);

    return 0;
}
