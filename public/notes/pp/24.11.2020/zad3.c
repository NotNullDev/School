#include <stdio.h>

/*
1
1+1/1+2 = 2/3
2/3+1 / 2/3+2 = 5/3 * 3/8 = 5/8
*/
float func(int n)
{
    if (n < 1)
        return -1;
    if (n == 1)
        return 1;
    return 1 / (func(n - 1) + 1);
}

int main(void)
{
    float result;
    result = func(3); // expected: 5/8

    printf("Result: %.3f", result); //correct

    return 0;
}