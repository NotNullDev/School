#include <stdio.h>

int fib_rekur(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib_rekur(n - 1) + fib_rekur(n - 2);
}

int fib_iter(int n)
{
    int a1 = 0;
    int a2 = 1;
    int result = -1;
    if (n == 2)
        return a2;
    if (n == 1)
        return a1;
    if (n <= 0)
        return -1;
    for (int i = 3; i <= n; i++)
    {
        result = a1 + a2;
        a1 = a2;
        a2 = result;
    }
    return result;
}

// 0 1 1 2 3 5

int main(void)
{
    int a = fib_iter(32);
    int b = fib_rekur(32);
    printf("iter: %d, rekur: %d \n", a, b);
    return 0;
}