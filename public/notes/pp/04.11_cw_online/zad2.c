#include <stdio.h>

void replace(int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 2;
    printf("a: %d, b: %d\n", a, b);
    replace(&a, &b);
    printf("[replaced] a: %d, b: %d\n", a, b);

    return 0;
}

void replace(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}