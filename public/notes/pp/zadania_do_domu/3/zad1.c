#include <stdio.h>

#define N 10

int main(void)
{
    float sum, current, tab[N];
    int i, valid;

    sum = 0.0;
    printf("Podaj %d liczb rzeczywistych.\n", N);

    for (i = 0; i < N; i++)
    {
        printf("Liczba %d:", i + 1);
        valid = scanf("%f", &current);
        tab[i] = current;
        if (valid != 1)
        {
            printf("Podano niewlasciwe dane wejsciowe, kocznenie pracy programu.\n");
            return 1;
        }
        sum += tab[i];
        putchar('\n');
    }
    printf("Srednia arytmetyczna %d podanych liczb wynosi %f.\n", N, sum / N);

    return 0;
}