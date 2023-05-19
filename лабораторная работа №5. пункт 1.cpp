#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sumOfOdd(int* array, int n);

int main() {
    setlocale(0, "rus");
    int n;
    printf("введите размер массива: ");
    scanf_s("%d", &n);
    int* array = (int*)malloc(n * sizeof(int)); // Динамический массив
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf_s("%d", &array[i]);
    }
    int sum = sumOfOdd(array, n);
    printf("сумма нечетных элементов массива: %d", sum);
    free(array); // Освободить выделенную память
    return 0;
}

int sumOfOdd(int* array, int n) {
    if (n == 0) {
        return 0; // Базовый случай рекурсии
    }
    else {
        int sum = sumOfOdd(array, n - 1);
        if (n - 1 >= 0 && array[n - 1] % 2 != 0) {
            return sum + array[n - 1]; // Рекурсивный случай
        }
        else {
            return sum;
        }
    }
}
