#include <stdio.h>

int main(void)
{
    int input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
        {
            putchar(input);
            while ((input = getchar()) == ' ')
                ;
        }
        putchar(input);
    }
}