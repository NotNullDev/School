#include <stdio.h>

#define VALIDATION_SUCCESS 3

int main(void)
{
    double a1, b1, c1; // wspolczynnik rownania pierwszego
    double a2, b2, c2; // wspolczynnki rownania drugiego

    double W, Wx, Wy; // wyznaczniki

    double x, y; // wspolrzedne wyniku

    int validation1, validation2;

    printf("Przyklad : 2x + 3y = 5, wejscie: 2 3 5.\n");

    validation1 = 0;
    printf("Podaj wspolczynniki rownania pierwszego: ");
    validation1 = scanf("%lf %lf %lf", &a1, &b1, &c1);
    fflush(stdin);

    validation2 = 0;
    printf("Podaj wspolczynniki rownania drugiego: ");
    validation2 = scanf("%lf %lf %lf", &a2, &b2, &c2);
    fflush(stdin);

    if (validation1 != VALIDATION_SUCCESS || validation2 != VALIDATION_SUCCESS)
    {
        printf("\nPodano niewlasciwe dane wejsciowe. Koczenie pracy programu.\n");
        return 0;
    }

    /*
        check if everything isn't 0 or inputs aren't equations.
    */
    if (a1 == 0.0 && a2 == 0.0 && b1 == 0.0 && b2 == 0.0 && c1 == 0.0 && c2 == 0.0 || (a1 == 0.0 && b1 == 0.0) || (a2 == 0.0 && b2 == 0.0))
    {
        printf("Wprowadzono niepoprawne dane!\n");
        printf("%.3lf %.3lf %.3lf\n", a1, b1, c1);
        printf("%.3lf %.3lf %.3lf\n", a2, b2, c2);
        return 0;
    }

    W = a1 * b2 - b1 * a2;
    Wx = c1 * b2 - b1 * c2;
    Wy = a1 * c2 - c1 * a2;

    if (W == 0)
    {
        if (Wx != 0 || Wy != 0)
        {
            printf("Uklad rownan sprzeczny. Brak rozwiazan.\n");
        }
        else
        {
            printf("Uklad rownan nieoznaczony. Nieskonczenie wiele rozwiazan.\n");
        }
    }
    else
    {

        x = Wx / W;
        y = Wy / W;

        printf("Rozwiazaniem rownania jest para liczb: (%.3lf,%.3lf).\n", x, y);
    }
    return 0;
}