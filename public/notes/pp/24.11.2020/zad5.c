#include <stdio.h>

float func(int a)
{
    if (a == 2)
    {
        float a1 = a / 2;
        return 1 / 3.0 * (2 * a1 + (a / (a1 * a1)));
    }
    float preva = func(a - 1);
    return 1 / 3.0 * (2 * preva + a / (preva * preva));
}

int main(void)
{
    float result;
    result = func(64); // expected: 3

    printf("Result: %.3f\n", result); //

    return 0;
}