#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main(void)
{
    int *tab, sum;

    tab = malloc(N * sizeof(int));
    sum = 0;

    putchar('[');
    for (int i = 0; i < N; ++i)
    {
        srand(time(NULL) % (i + 5));
        tab[i] = rand() % 213;
        printf(" %d,", tab[i]);
        sum += tab[i];
    }
    printf("\b]\n");

    printf("Suma wyrazow tablicy to: %d, a ich srednia arytmetyczna to: %d.\n", sum, sum / N);

    free(tab);
    return 0;
}