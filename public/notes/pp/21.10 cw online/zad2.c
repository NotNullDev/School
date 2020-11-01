#include <stdio.h>

#define N 10

int main(void)
{
    float max;
    float tab[N];
    int val = 0;


    for(int i = 0; i < N ; ++i)
    {
        printf("Podaj %d liczbe: ", i);
        val = scanf("%f", &tab[i]);
        if(val != 1)
            {
                printf("Podano niewlasciowe dane wejsciowe!!!!!! Konczenie pracy programu.\n");
                return 1;
            }
        putchar('\n');
        if(i == 0)
        {
            max = tab[0];
            continue;
        }
        if(tab[i]  > max)
        {
            max = tab[i];
        }
    }

    printf("Maxymalna podana liczba to: %.2f)", max);

    return 0;
}