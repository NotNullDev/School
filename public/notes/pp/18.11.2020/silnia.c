#include <stdio.h>

int silnia_rek(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return n * silnia_rek(n - 1);
}

int silna_iter(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

int main(void)
{
    int a, b;
    a = b = 0;
    //   a = silna_iter(5);
    b = silnia_rek(5);
    printf("iter: %d, rekur: %d\n", a, b);
    return 0;
}