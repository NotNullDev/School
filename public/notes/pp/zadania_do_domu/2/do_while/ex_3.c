#include <stdio.h>

int main(void)
{
    int aktualnaLiczba;
    int koncowaLiczba;
    int mnoznik;

    aktualnaLiczba = 1;
    koncowaLiczba = 9;
    mnoznik = 1;

    if (aktualnaLiczba <= koncowaLiczba) // ????????????????????????????????????????
    {
        printf("Zle dane w kodzie");
        return 1;
    }

    do
    {
        while (mnoznik <= 9)
        {
            printf("%2d ", aktualnaLiczba * mnoznik);
            mnoznik++;
        }
        mnoznik = 1;
        aktualnaLiczba++;
        putchar('\n');
    } while (aktualnaLiczba <= koncowaLiczba);

    return 0;
}