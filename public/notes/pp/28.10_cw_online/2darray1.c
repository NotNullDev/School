#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define N 2
#define M 2

int main(void)
{
    int tab1[N][M] = {
        {1, 2},
        {3, 4}};
    printf("tab1: \n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            //nadpisana wartosci
            tab1[i][j] = rand() % 10;
            printf("%d, ", tab1[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
