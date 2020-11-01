#include <stdio.h>

int main(void)
{

    double a1, q, n;

    a1 = 10;
    q = 10;
    n = 20;

    printf("Wyraz nr 1: wartosc: %.0lf.\n", a1);
    for (int i = 0; i < n - 1; ++i)
    {
        printf("Wyraz nr %d: wartosc: %.0lf.\n", i + 2, a1 *= q);
    }

    return 0;
}