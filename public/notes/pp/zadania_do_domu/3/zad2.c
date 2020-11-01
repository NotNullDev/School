#include <stdio.h>

#define N 10

int main(void)
{

    float tab[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, max;
    int i;

    i = N - 1;
    if (N <= 0)
        return 1;
    do
    {
        if (tab[i] > max || i == N)
        {
            max = tab[i];
        }
    } while (i-- >= 0);

    printf("Max wartosc z tablicy to %f.\n", max);
    return 0;
}