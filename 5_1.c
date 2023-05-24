#include <stdio.h>

int isOdd(int* num) {
    if (*num % 2 != 0)
        return 1; // Число нечетное
    else
        return 0; // Число четное
}

int main() {
    int number;
    printf("Введите целое число: ");
    scanf("%d", &number);
    
    int result = isOdd(&number);
    
    printf("Результат: %d\n", result);
    
    return 0;
}
