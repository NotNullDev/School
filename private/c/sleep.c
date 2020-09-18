#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 10; ++i)
    {
        printf("%2d \n", i + 1);
        sleep(1);
    }
    putchar('\n');

    return 0;
}