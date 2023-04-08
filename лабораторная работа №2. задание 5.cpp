#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0, "rus");
	int n, i, k = 0;
	double x, y;
	cout << "Введите количество итераций: "; cin >> n;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		x = (double)rand() / RAND_MAX; 
		y = (double)rand() / RAND_MAX;
		if (x * x + y * y <= 1) k++;
	}
	cout << "число Пи = " << 4 * (double)k / n << endl;
	_getch();
	return 0;
}
