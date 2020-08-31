#include <stdio.h>

int main(void)
{

    int c;
    int cn;

    c = 0;

    while ((cn = getchar()) != EOF)
    {
        if (cn == '\n')
        {
            ++c;
        }
    }
    printf("Number of line in file: %d.\n", c);

    return 0;
}