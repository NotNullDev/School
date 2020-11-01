#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define N 3
#define M 3

int main(void)
{
    float tab1[N][M], sum;
    srand(time(NULL));
    printf("tab1: \n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            //nadpisana wartosci
            tab1[i][j] = rand() % 4;
            printf("%f, ", tab1[i][j]);
        }
        putchar('\n');
    }

    sum = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (i == j)
            {
                sum += tab1[i][j];
                if ((N - 1 - i) != i)
                    sum += tab1[i][M - 1 - j];
            }
        }
    }
    printf("Suma przekatnych wynosi: %f\n", sum);

    return 0;
}