#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
 int main()
{	
	float x, y, middle_value, otlichie_miti, otlichie_tani;
	setlocale(0, "rus");
	printf("введите возраст Тани: ");
	scanf_s("%f", &x);
	printf("введите возраст Мити: ");
	scanf_s("%f", &y);
	if (0 < x < 100)
		if (0 < y < 100)
			middle_value = (x + y) / 2;
			otlichie_miti = middle_value - y;
			otlichie_tani = middle_value - x;
	printf("средний возраст = %f\n", middle_value);
	printf("отличие возраста Мити от среднего возраста: %f\n", otlichie_miti);
	printf("отличие возраста Тани от среднего возраста: %f", otlichie_tani);
	_getch();
	return 0;
}