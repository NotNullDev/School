#include <stdio.h>

#define TAB_EVERY 5

int getUserInput(char userInput[]);

int detab(char input[], int inputLength, int tab_every);

int main(void)
{
    char userInput[100];
    int userInputLength;
    userInputLength = getUserInput(userInput);
    userInputLength = detab(userInput, userInputLength, TAB_EVERY);
    printf("\nNew Array:\n%s\n", userInput);
    return 0;
}

int getUserInput(char userInput[])
{
    int length, input;
    length = 0;
    for (int i = 0; (input = getchar()) != EOF; ++i)
    {
        userInput[i] = input;
        ++length;
    }
    userInput[length++] = '\0';

    return length;
}

int detab(char input[], int inputLength, int tab_every)
{
    int firstTabIndex;

    firstTabIndex = tab_every - 1;
    if (input[firstTabIndex] != '\t')
        return inputLength;

    char before[100], after[100], newArray[100];
    int beforeLen, afterLen, newArrayLen, afterCounter;

    for (int i = firstTabIndex; i < inputLength; i += tab_every)
    {
        beforeLen = i;
        afterLen = inputLength - i;
        newArrayLen = beforeLen - 1 + i + 1 + afterLen - 1;
        afterCounter = 0;

        for (int j = 0; j < beforeLen; ++j)
            before[j] = input[j];

        for (int j = 0; j < afterLen; ++j)
            after[j] = input[beforeLen + 1 + j];

        for (int j = 0; j < newArrayLen; ++j)
        {
            if (j < beforeLen)
                newArray[j] = before[j];
            else if (j > beforeLen - 1 + i)
                newArray[j] = after[afterCounter++];
            else
                newArray[j] = ' ';
        }
    }

    return newArrayLen;
}
