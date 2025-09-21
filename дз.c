#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
 setlocale(LC_ALL, "RUS");
 int h = 10;
 int A = 30;
 int k = 1;

 printf("высота: %d\n", h);
 printf("угол: %d\n", A);
 printf("коэфицент: %d\n", k);

 printf("Итоговый путь: %d\n", h/k );
}