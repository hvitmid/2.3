#include <locale.h>
#include <stdio.h>
int N, K;

void main(void)

{
	N = 15; K = 21;
	setlocale(LC_ALL, "RUS");
	printf("Сейчас %g часов %g минут %g секунд\n ", 15., 21., 5.); 
	printf("Идёт %g минута суток\n ", 922.);
	printf("До полуночи осталось %g часов %g минут\n ", 8., 39.);
	printf("С 8:00 прошло %g секунд\n ", 26460.);
	printf("Текущий час=%g суток и текущая минута %g часа \n ", N/24., K/60.);

}