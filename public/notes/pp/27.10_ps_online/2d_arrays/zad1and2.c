#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define W 2
#define K 3

int main(void)
{
    float tab[W][K];

    srand(time(NULL));
    putchar('[');
    for (int i = 0; i < W; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            tab[i][j] = rand() % 100;
            printf("%f,", *tab[i, j]);
        }
        printf("\n ");
    }
    printf("\b\b]\n");

    return 0;
}