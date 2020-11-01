#include <stdio.h>

int main(void)
{
    int aktualnaLiczba;
    int koncowaLiczba;
    int mnoznik;

    aktualnaLiczba = 1;
    koncowaLiczba = 9;
    mnoznik = 1;

    while (aktualnaLiczba <= koncowaLiczba)
    {
        while (mnoznik <= 9)
        {
            printf("%2d ", aktualnaLiczba * mnoznik);
            mnoznik++;
        }
        mnoznik = 1;
        aktualnaLiczba++;
        putchar('\n');
    }

    return 0;
}