#include <stdio.h>

#define p(text) printf(#text "\n")

int main(void)
{
    int a = 0;
    p(lololo);
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; j++)
        {
            a++;
            if (a > 985)

                goto end;
        }
    }
end:
{
    printf("%d", a);
}
    return 0;
}
