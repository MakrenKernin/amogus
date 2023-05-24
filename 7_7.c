#include <stdio.h>

void print_even_numbers(int *num) {
    for (int i = 0; i <= *num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int number;

    printf("Введите число: ");
    scanf("%d", &number);

    print_even_numbers(&number);

    return 0;
}
