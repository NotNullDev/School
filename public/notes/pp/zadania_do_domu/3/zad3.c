#include <stdio.h>

#define N 10

int main(void)
{
    int i, newTab[N], tab[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (i = 0; i < N; ++i)
    {
        newTab[i] = tab[N - 1 - i];
        printf("%d\n", newTab[i]);
    }

    return 0;
}