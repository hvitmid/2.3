#include <locale.h>
#include <stdio.h>
int N, K;

void main(void)

{
	N = 15; K = 21;
	setlocale(LC_ALL, "RUS");
	printf("������ %g ����� %g ����� %g ������\n ", 15., 21., 5.); 
	printf("��� %g ������ �����\n ", 922.);
	printf("�� �������� �������� %g ����� %g �����\n ", 8., 39.);
	printf("� 8:00 ������ %g ������\n ", 26460.);
	printf("������� ���=%g ����� � ������� ������ %g ���� \n ", N/24., K/60.);

}