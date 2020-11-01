#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(void)
{
    float tab[N][N];
    float sum1, sum2;

    srand(time(NULL));
    sum1 = 0;
    sum2 = 0;

    for (int i = 0; i < N; ++i)
    {

        for (int j = 0; j < N; ++j)
        {
            tab[i][j] = rand() % 100;
            printf("%2.3f,", tab[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j)
            {
                sum1 += tab[i][j];
                sum2 += tab[N - 1 - i][N - 1 - j];
            }
        }
    }

    printf("Suma elementow na 1 przekatnej to: %f.\n", sum1);
    printf("Suma elementow na 2 przekatnej to: %f.\n", sum2);

    return 0;
}