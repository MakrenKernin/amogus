#include <stdio.h>

void distributeVariants(int N, int M, int i, int *variant) {
    if (M <= N) {
        *variant = i;  // Каждый студент получает уникальный вариант
    } else {
        int totalVariants = N;
        int remainingStudents = M - N;
        
        if (i <= N) {
            *variant = i;  // Студент с номером i получает вариант i
        } else {
            int cycle = (i - N - 1) / totalVariants;  // Цикл повторений
            int position = (i - N - 1) % totalVariants;  // Позиция внутри цикла
            
            if (position < remainingStudents) {
                *variant = (cycle * totalVariants) + (position + 1);
            } else {
                *variant = (cycle * totalVariants) + remainingStudents;
            }
        }
    }
}

int main() {
    int N, M, i;
    printf("Введите количество вариантов (N): ");
    scanf("%d", &N);
    printf("Введите количество студентов (M): ");
    scanf("%d", &M);
    printf("Введите порядковый номер студента (i): ");
    scanf("%d", &i);
    
    int variant;
    distributeVariants(N, M, i, &variant);
    
    printf("Студенту с порядковым номером %d необходимо выполнить вариант %d\n", i, variant);
    
    return 0;
}
