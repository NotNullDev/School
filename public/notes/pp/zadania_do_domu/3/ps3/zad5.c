#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 323

int main(void)
{

    int *tab, sum, i, nearest, a, index;
    tab = malloc(N * sizeof(int));

    srand(time(NULL));
    sum = 0;
    for (i = 0; i < N; ++i)
    {
        tab[i] = rand() % 10;
        sum += tab[i];
    }
    for (i = 0; i < N; ++i)
    {
        if (i == 0)
        {
            nearest = tab[i];
            index = i;
        }
        if (abs((sum / N) - tab[i]) < a)
        {
            nearest = tab[i];
            index = i;
        }
    }

    printf("Srednia arytmetyczna tablicy %d elementowej to %f.\n", N, (float)sum / N);
    printf("Wartosc najblizsza wystepujaca w tablicy na pozycji %d sredniej arytmetycznej to %d.\n", index, nearest);

    free(tab);
    return 0;
}