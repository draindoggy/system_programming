#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
	const float pi = 3.141592;
	setlocale(0, "rus");
	float r, D, S, L;
	printf("введите радиус окружности: \n");
	scanf_s("%f", &r);
	L = 2 * pi * r;
	D = 2 * r;
	S = pi * pow(r, 2);
	printf("длина окружности = %f\n", L);
	printf("диаметр окружности = %f\n", D);
	printf("площадь окружности = %f", S);
	_getch();
	return 0;
}