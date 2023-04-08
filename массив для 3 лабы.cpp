#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "rus");
	int n, i, j, count = 0, count1 = 0, c, last_negative_index = -1, sum = 0;
	printf_s("введите количество элементов массива: ");
	scanf_s("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) //ввод массива и вывод его элементов
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}

	printf_s("введите c: ");
	scanf_s("%d", &c);

	int MIN_N = a[0], MAX_N = a[0], min_index{}, max_index{}, bufer;

	for (i = 0; i < n; i++)
	{
		if (MAX_N < a[i]) { //максимальный элемент массива
			MAX_N = a[i];
			max_index = i;
		}
		else if (MIN_N > a[i]) { //минимальный элемент массива
			MIN_N = a[i];
			min_index = i;
		}
	}

	for (int i = 0; i < n; i++) { //поиск элементов, меньших с
		if (a[i] < c) {
			count++;
		}
	}

	for (int i = 0; i < n; i++) { //поиск количества различных элементов
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				break;
			}
		}
		if (i == j) {
			count1++;
		}
	}

	for (int i = 0; i < n; i++) { //поиск суммы целых элементов после отрицательного
		if (a[i] < 0) {
			last_negative_index = i;
		}
	}

	for (int i = last_negative_index + 1; i < n; i++) {
		sum += floor(a[i]);
	}

	bufer = a[min_index];
	a[min_index] = a[max_index];
	a[max_index] = bufer;

	cout << "массив с заменой: | ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " | ";
	}

	cout << "\nминимальный элемент массива: " << MIN_N << endl;
	cout << "максимальный элемент массива: " << MAX_N << endl;
	cout << "кол-во элементов, меньших c: " << count << endl;

	printf("Неповторяющиеся элементы: ");
	for (int i = 0; i < n; i++) { //вывод неповторяющихся элементов
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				break;
			}
		}
		if (i == j) { 
			printf("%d ", a[i]);
		}

		printf("\nсумма целых частей элементов массива, расположенных после последнего отрицательного элемента: %d\n", sum);
		_getch();
		return 0;
		free(a);
	}
}