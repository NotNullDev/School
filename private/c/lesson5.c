#include <stdio.h>

/*
    Zlicz biale znaki, cyfry, inne
*/

int main(void)
{
    int input, whiteChar, otherChar;
    int digit[10];

    whiteChar = otherChar = 0;
    for (int i = 0; i < 10; ++i)
        digit[i] = 0;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ' || input == '\t' || input == '\n')
        {
            ++whiteChar;
            continue;
        }
        else if (input >= '0' && input <= '9')
        {
            ++digit[input - '0'];
            continue;
        }
        else
            ++otherChar;
    }

    printf("\nCyfry: ");
    for (int i = 0; i < 10; ++i)
        printf("%d: [%d] ", i, digit[i]);
    printf(", Biale znaki: [%d]", whiteChar);
    printf(", Pozostale znaki: [%d].\n", otherChar);

    return 0;
}