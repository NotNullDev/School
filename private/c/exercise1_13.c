#include <stdio.h>

#define LAST_WORD 1
#define LAST_NON_WORD 0

int main(void)
{
    int input, wordsAmount = 0, wasWord = 1;
    int wordsLength[100];

    for (int i = 0; i < 100; ++i)
    {
        wordsLength[i] = 0;
    }

    while ((input = getchar()) != EOF)
    {

        if ((input == ' ' || input == '\t' || input == '\n') && wasWord)
        {
            ++wordsAmount;
            wasWord = LAST_NON_WORD;
            continue;
        }
        ++wordsLength[wordsAmount];
        if (wordsAmount == 0)
            ++wordsAmount;
    }
    putchar('\n');
    printf("^    Words\n");
    for (int i = 0; i < wordsAmount; ++i)
    {
        printf("|    %d    ", i + 1);
        for (int j = 0; j < wordsLength[i]; ++j)
        {
            if (wordsLength[i] != 0)
                printf("| ");
        }
        putchar('\n');
    }
    printf("-------------------------------------->\n");
    printf("Numbers 0 1 2 3 4 5 6 7 8 9 more than 9\n");

    return 0;
}