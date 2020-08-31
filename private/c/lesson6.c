#include <stdio.h>

int my_pow(int, int);

int main(void)
{
    printf("2**5=%d 3**6=%d\n", my_pow(2, 5), my_pow(3, 6));

    return 0;
}

int my_pow(int base, int n)
{
    int result;
    result = base;

    for (int i = 0; i < n - 1; ++i)
    {
        result = result * base;
    }

    return result;
}
