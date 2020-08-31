#include <stdio.h>

int main(void)
{
    int a;
    printf("Value of EOF: [%d].\n", EOF);

    printf("Now lesson 2 getchar with puthchar, press e and enter to exit: \n");

    while ((a = getchar()) != 101)
    {
        putchar(a);
    }

    return 0;
}