#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main(void)
{
    int *tab, min, max, i, polowka, a, maxI;
    tab = malloc(N * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < N; ++i)
    {
        tab[i] = rand() % 25;
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

    polowka = min + max / 2;

    for (i = 0; i < N; ++i)
    {
        if (i == 0)
        {
            a = abs(polowka - tab[i]);
            maxI = 0;
            continue;
        }
        if (abs(polowka - tab[i]) < a)
        {
            a = abs(polowka - tab[i]);
            maxI = i;
        }
    }
    printf("Tablica: [");
    for (int i = 0; i < N; ++i)
    {
        printf("%d,", tab[i]);
    }
    printf("\b]\n");
    printf("Wartosc najblizsza wartosci srodkowej (%d) wynosi %d i jest przyjmowana dla elementu nr %d\n", polowka, tab[maxI], maxI);
    free(tab);
    return 0;
}