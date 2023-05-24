#include <stdio.h>

void decimalToBinary(int number, int* binary, int* index) {
    while (number > 0) {
        binary[*index] = number % 2;
        number = number / 2;
        (*index)++;
    }
}

void decimalToOctal(int number, int* octal, int* index) {
    while (number > 0) {
        octal[*index] = number % 8;
        number = number / 8;
        (*index)++;
    }
}

void decimalToHexadecimal(int number, char* hex, int* index) {
    while (number > 0) {
        int remainder = number % 16;
        if (remainder < 10) {
            hex[*index] = remainder + '0';
        } else {
            hex[*index] = remainder + 'A' - 10;
        }
        number = number / 16;
        (*index)++;
    }
}

int main() {
    int number;
    int binary[32];
    int octal[32];
    char hex[32];
    int binaryIndex = 0;
    int octalIndex = 0;
    int hexIndex = 0;

    printf("Введите целое число: ");
    scanf("%d", &number);

    decimalToBinary(number, binary, &binaryIndex);
    decimalToOctal(number, octal, &octalIndex);
    decimalToHexadecimal(number, hex, &hexIndex);

    printf("Десятичное: %d\n", number);

    printf("Двоичное: ");
    for (int i = binaryIndex - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    printf("Восьмеричное: ");
    for (int i = octalIndex - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");

    printf("Шестнадцатеричное: ");
    for (int i = hexIndex - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");

    return 0;
}
