#include <stdio.h>

int main(void)
{
    int valid, podstawa, iloscSpacji1, iloscSpacji2, aktualneGwiazdki, iteracyjneGwizadki;

    printf("Podaj nieparzysta dlugosc podstawy trojkata z przedzialu 3-79: ");
    valid = scanf("%d", &podstawa);

    if (valid != 1 || podstawa % 2 != 1 || podstawa < 3 || podstawa > 79)
    {
        printf("\nPodano niepoprawne dane wejsciowe. Konczenie pracy programu. \n");
        return 0;
    }

    aktualneGwiazdki = 1;
    do
    {
        iloscSpacji1 = (podstawa - aktualneGwiazdki) / 2;
        iloscSpacji2 = iloscSpacji1;
        iteracyjneGwizadki = aktualneGwiazdki;

        while (iloscSpacji1--)
            putchar(' ');
        while (iteracyjneGwizadki--)
            putchar('*');
        while (iloscSpacji2--)
            putchar(' ');
        putchar('\n');
        aktualneGwiazdki += 2;
    } while (aktualneGwiazdki <= podstawa);

    return 0;
}