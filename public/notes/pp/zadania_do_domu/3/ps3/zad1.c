#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main(void)
{
    srand(time(NULL));

    int i, tab[N];

    for (i = 0; i < N; ++i)
    {
        tab[i] = rand();
        printf("tab[%d] == [%d]\n", i, tab[i]);
    }

    return 0;
}
