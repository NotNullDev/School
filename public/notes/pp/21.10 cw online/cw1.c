#include <stdio.h>

#define N 10

int main(void)
{
    int i;

    int tab[ N ]; //tablica statyczna

    for(int i = 0; i < N; ++i)
    {
        printf("Podaj element %d: ", i);
        scanf("%d", &tab[i]);
        putchar('\n');
    }

    for(int i = 0; i< N; ++i)
    {
        printf("[%d] ", tab[i]);
    }

    putchar('\n');

    return 0;
}