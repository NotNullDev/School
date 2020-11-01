#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 10

int main(void)
{
    float tab[N];
    float sum;

    srand(time(NULL)); // resetowanie wynikow 

    sum = 0;
    for( int i = 0; i < N; ++i)
    {
        tab[i] = rand() % 10; //losowanie losowej libczy od <0-9)
        printf("Wylosowana liczba %d to %.2lf.\n", i, tab[i]);
        sum += tab[i];
    }
    printf("Suma wyniosla: %f\n", sum);
    printf("Srednia %d wylosowanych  liczb to %.1f.\n", N, sum/N);


    return 0;
}