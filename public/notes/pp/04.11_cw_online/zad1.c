#include <stdio.h>

int silnia(int n);

int main()
{
    int n;
    printf("Podaj parametr funckji silnia: ");
    scanf("%d", &n);

    printf("Silnia z %d to %d.\n", n, silnia(n));

    return 0;
}

int silnia(int n)
{
    int wynik;
    wynik = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            wynik = wynik * 1;
            continue;
        }
        wynik *= i;
    }
    return wynik;
}