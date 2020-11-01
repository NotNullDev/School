#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define N 2
#define M 2

int main(void)
{
    float tab1[N][M];
    printf("tab1: \n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            //nadpisana wartosci
            tab1[i][j] = (float)(rand() % 10);
            printf("%f, ", tab1[i][j]);
        }
        putchar('\n');
    }
    return 0;
}