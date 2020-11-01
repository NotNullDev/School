#include <stdio.h>

int main(void)
{
    int bokKwadratu, valid;

    printf("Podaj dlugosc boku kwadratu: ");
    valid = scanf("%d", &bokKwadratu);

    if (valid != 1 || bokKwadratu <= 0)
    {
        printf("Podano nieprawidlowe dane wejciowe. Konczenie programu.\n");
        return 1;
    }

    for (int i = 1; i <= bokKwadratu; ++i)
    {
        for (int j = 0; j < i; j++)
            putchar('a');
        for (int j = 0; j < (bokKwadratu - i); ++j)
            putchar('b');
        putchar('\n');
    }
    return 0;
}