#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define N 4
#define M 4
//do poprawy
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
        for (int j = 0; j < M - 1 - i && M - 1 - i >= 0; ++j)
        {

            printf("%d %d\n", i, j);
            sum += tab1[i][j];
        }
    }
    printf("Suma: %f.\n", sum);

    return 0;
}