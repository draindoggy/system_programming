#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{
	int x1, y1, z1, x2, y2, z2, x3, y3, z3, P, S, AB, BC, CA, p;
	setlocale(0, "rus");
	printf("введите координаты для вектора A:");
	scanf_s("%i%i%i", &x1, &y1, &z1);
	printf("введите координаты для вектора B:");
	scanf_s("%i%i%i", &x2, &y2, &z2);
	printf("введите координаты для вектора C:");
	scanf_s("%i%i%i", &x3, &y3, &z3);
	AB = (x2 - x1) + (y2 - y1) + (z2 - z1);
	BC = (x3 - x2) + (y3 - y2) + (z3 - z2);
	CA = (x1 - x3) + (y1 - y3) + (z1 - z3);
	P = abs(AB) + abs(BC) + abs(CA);
	p = P / 2;
	S = sqrt(p * (p - AB) * (p - BC) * (p - CA));
	printf("периметр треугольника = %i\n", P);
	printf("площадь треугольника = %i", S);
	_getch();
	return 0;
}