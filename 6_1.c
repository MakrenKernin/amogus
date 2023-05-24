#include <stdio.h>

void calculateAbsoluteDifference(int* x, int* y, int* result) {
    if (*x >= *y) {
        *result = *x - *y;
    } else {
        *result = *y - *x;
    }
}

int main() {
    int x, y, result;
    
    printf("Введите первое целое число: ");
    scanf("%d", &x);
    
    printf("Введите второе целое число: ");
    scanf("%d", &y);
    
    calculateAbsoluteDifference(&x, &y, &result);
    
    printf("Модуль разности: %d\n", result);
    
    return 0;
}
