#include <stdio.h>

int main(void)
{
    int kolumny, wiersze;

    kolumny = 9;
    wiersze = 9;

    for (int i = 1; i <= kolumny; ++i)
    {
        for (int j = 0; j < wiersze; ++j)
        {
            printf("%2d ", i + j * i);
        }
        putchar('\n');
    }

    return 0;
}