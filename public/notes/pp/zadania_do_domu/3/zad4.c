#include <stdio.h>

#define N 10

int main(void)
{
    int i, valid, a, tab[N] = {14, 2, 323, 4, 5, 65, 7, 3213, 9, 1231};

    printf("Podaj liczbe calkowita do sprawdzenia:");
    valid = scanf("%d", &a);

    if (valid != 1)
    {
        printf("error exit\n");
        return 1;
    }

    for (i = 0; i < N; ++i)
    {
        if (tab[i] == a)
        {
            printf("Podana liczba (%d) nalezy do tablicy.\n", a);
            return 0;
        }
    }
    printf("Podana liczba (%d) nie nalezy do tablicy.\n", a);

    return 0;
}