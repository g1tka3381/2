#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n%5d\n%10d\n%15d\n", 1, 2, 3, 4);
	printf("%10.5f\n", 12.234567);
	printf("остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("остаток от деления %d на %d равен %2.1f\n", 7, 5, 7. / 5.);
	printf("произведение %d на %d равен %d\n", 2000, 4, 2000 * 4);
	printf("%g разделить %e равен %f\n", 5., 2000000., 5. / 2000000);
}