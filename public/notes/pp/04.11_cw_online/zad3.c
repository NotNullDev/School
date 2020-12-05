#include <stdio.h>
#include <stdlib.h>

#define N 3

float sumOfElementsInTab(float *tab, int n);

int main(void)
{
    float tab[N];
    printf("tab:");
    for (int i = 0; i < N; ++i)
    {
        tab[i] = (rand() % 8) * 1.3;
        printf("%.2f, ", tab[i]);
    }
    printf("Suma elementow tej tablicy to: %.2f\n", sumOfElementsInTab(tab, N));
    return 0;
}

float sumOfElementsInTab(float *tab, int n)
{
    float sum;
    sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += tab[i];
    }
    return sum;
}
