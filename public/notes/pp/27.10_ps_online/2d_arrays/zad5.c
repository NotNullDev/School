#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main(void)
{
    float tab[N][N];
    float sum;
    srand(time(NULL));
    sum = 0;

    for (int i = 0; i < N; ++i)
    {

        for (int j = 0; j < N; ++j)
        {
            tab[i][j] = rand() % 5;
            printf("%2.0f,", tab[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j < N - 1 - i && j >= 0)
            {
                sum += tab[i][j];
            }
        }
    }

    printf("Suma elementow znajdujacych sie w danym trojkacie to: %f.\n", sum);

    return 0;
}