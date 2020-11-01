#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{

    int *tab, min, max, i;
    tab = malloc(N * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < N; ++i)
    {
        tab[i] = rand();
        if (i == 0)
        {
            min = max = tab[i];
            continue;
        }
        if (tab[i] > max)
            max = tab[i];
        if (tab[i] < min)
            min = tab[i];
    }
    printf("Wartosc minimalna tablicy %d elementowej to %d.\n", N, min);
    printf("Wartosc maxymalna tablicy %d elementowej to %d.\n", N, max);

    free(tab);
    return 0;
}