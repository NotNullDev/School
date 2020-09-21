#include <stdio.h>

int main(void)
{
    int i;
    while ((i = getchar()) != EOF)
        putchar(i);

    return 0;
}