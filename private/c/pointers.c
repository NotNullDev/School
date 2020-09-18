#include <stdio.h>

int main(void)
{

    char c = 'x';
    char *p = &c;
    printf("c val: %d and its address:%p\n", c, p);

    return 0;
}

void *buffFunc()
{
}