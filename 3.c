#include <locale.h>
#include <stdio.h>
float L = 2;
float n = 133;
int k = 2;
int m = 4;
int main()
{
    setlocale(LC_ALL, "RUS");
    printf("Дано:\n%9.0f\n%9.0f\n      _______\nОтвет:\n     %+08.3f\n", L, n, L/n);
}