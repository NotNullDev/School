#include <stdio.h>

int main(void)
{
    int n, i;

    double a1, q, an;
    a1 = 10.0;
    n = 20;
    q = 10.0;
    an = a1;

    i = 0;
    while (i != n)
    {
        if (i == 0)
        {
            printf("1: %.0lf\n", an);
            ++i;
            continue;
        }
        an *= q;
        printf("%d: %.0lf\n", i + 1, an);
        i++;
    }

    return 0;
}