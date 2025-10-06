#include <locale.h>
#include <stdio.h>

void main()
{   
    int N = 8;
    int K = 50;

    setlocale(LC_ALL, "RUS");
    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N*60+K);
    printf("До полуночи осталось %d часов и %d минут\n",23-N, K-40);
    printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
    printf("Текущий час = %f суток и текущая минута = %f часа\n", N/24.0, K/60.0);
}