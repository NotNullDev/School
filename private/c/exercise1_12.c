#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ' || input == '\t')
            putchar('\n');
        else
            putchar(input);
    }

    return 0;
}