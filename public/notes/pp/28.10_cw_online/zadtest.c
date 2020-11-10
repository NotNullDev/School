#include <stdio.h>

void replace(int *a, int *b);

int main(void)
{

    int a,b;

    a = 2;
    b = 10;

    replace(&a,&b);

    printf("a:%d, b:%d\n",a,b);

    return 0;
}


void replace(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}