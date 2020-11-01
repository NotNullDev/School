#include <stdio.h>
#include <math.h>

#define VALIDATION_SUCCESS 3

int main(void)
{
    double a, b, c, delta;

    int validation;

    printf("Przyklad: 2x*x + 3x - 4 = 0, wejscie: 2 3 -4\n");
    printf("Podaj wspolczynniki w postaci a b c: \n");
    validation = scanf("%lf %lf %lf", &a, &b, &c);
    if (validation != VALIDATION_SUCCESS)
    {
        printf("Podano niewlasciwe dane wejsciowe. \n");
        return 0;
    }

    if (a == 0)
    {
        if (b == 0)
            if (c == 0)
                printf("Rownanie nieoznaczone. Nieskonczenie wiele rozwiazan.\n");
            else
                printf("Rownanie sprzeczne. Brak rozwian\n");
        else
            printf("Rozwiazaniem rownania jest liczba %lf. \n", -c / b);
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Rozwiazanie nie posiada rozwiazan w zbiorze libcz rzeczywisych.\n");
    }
    else if (delta == 0)
    {
        printf("Rozwiazaniem ukladu rownan jest liczba %lf\n", -b / (2 * a));
    }
    else
    {
        printf("Rozwiazaniem rownania sa dwie liczby: %lf i %lf.\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
    }

    return 0;
}