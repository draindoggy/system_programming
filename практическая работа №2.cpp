#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream>
#include <conio.h>
int igrek(float c, float b, float a, float x)
{
	return (sqrt(c - a * x) / b) + log(a * x);
};
int zet(float c, float a, float x)
{
	return log(a * x) / pow(c - a * x, 2) - cos(c - a * x);
};
int main()
{
	float s, c, b, a, x;
	setlocale(0, "rus");
	printf("введите число a: ");
	scanf_s("%f", &a);
	printf("введите число b: ");
	scanf_s("%f", &b);
	printf("введите число c: ");
	scanf_s("%f", &c);
	printf("введите число x: ");
	scanf_s("%f", &x);
	s = igrek(c, b, a, x) + zet(c, a, x);
	printf("результат = %f", s);
	_getch();
	return 0;
}
