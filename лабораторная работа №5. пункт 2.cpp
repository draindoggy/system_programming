#include <stdio.h>
#include <locale.h>
void reverseNumber(int n) {
    if (n == 0) {
        return; // Базовый случай рекурсии
    }
    else {
        printf("%d", n % 10);
        reverseNumber(n / 10); // Рекурсивный случай
    }
}

int main() {
    int number;
    setlocale(0, "rus");
    printf("введите число: ");
    scanf_s("%d", &number);
    printf("число %d в обратном порядке: ", number);
    reverseNumber(number);
    printf("\n");
    return 0;
}