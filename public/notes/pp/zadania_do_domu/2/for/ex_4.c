#include <stdio.h>

int main(void)
{
    int valid, dlugoscPostawy, currentSpacesAmount;

    printf("Podaj nieparzysta dlugosc podstawy: ");
    valid = scanf("%d", &dlugoscPostawy);

    if (valid != 1 || dlugoscPostawy <= 0 || dlugoscPostawy % 2 != 1)
    {
        printf("Podano nieprawidlowe dane wejciowe. Konczenie programu.\n");
        return 1;
    }

    for (int i = 1; i <= dlugoscPostawy; i += 2)
    {
        currentSpacesAmount = dlugoscPostawy - i;
        for (int j = 0; j < currentSpacesAmount / 2; ++j)
        {
            putchar(' ');
        }
        for (int j = 0; j < i; ++j)
        {
            putchar('*');
        }
        for (int j = 0; j < currentSpacesAmount / 2; ++j)
        {
            putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}