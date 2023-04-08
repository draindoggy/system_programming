#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int main()
{   
	setlocale(0, "rus");
	int A = 1, B = 0, C = 0, rez1, rez2, rez3;
	rez1 = A | B;
	rez2 = A & B;
	rez3 = B | C;
	printf("результат 1 = %i\n", rez1);
	printf("результат 2 = %i\n", rez2);
	printf("результат 3 = %i", rez3);
	_getch();
	return 0;
}