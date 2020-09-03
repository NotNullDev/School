#include <stdio.h>

#define TAB_LENGTH 4
#define TAB_SPACES 5
#define MAXLINE 100

int getUserInput(char userInput[]);

int detab(char input[], int inputLength, int tab_every);

int main(void)
{
    char userInput[MAXLINE];
    int userInputLength;
    userInputLength = getUserInput(userInput);
    userInputLength = detab(userInput, userInputLength, TAB_SPACES);
    printf("\nNew Array:\n%s\n", userInput);
    return 0;
}

int getUserInput(char userInput[])
{
    int length, input;
    length = 0;
    for (int i = 0; (input = getchar()) != EOF; ++i)
    {
        if (i < MAXLINE)
            userInput[i] = input;
        else
            userInput[MAXLINE] = '\0';
        ++length;
    }
    userInput[length++] = '\0';

    return length;
}
int detab(char input[], int inputLength, int tab_every)
{
    int amountOfTabs, textBeforeTabLength, textAfterTabLength, firstTabIndex, tabsPositions[MAXLINE / TAB_LENGTH], newArrayLength, beforeIndex, afterIndex, currentArrayLength;
    char textBeforeTab[MAXLINE], textAfterTab[MAXLINE], newArray[MAXLINE];

    amountOfTabs = inputLength / tab_every;
    firstTabIndex = tab_every - 1;
    newArrayLength = inputLength + 3 * amountOfTabs;
    for (int i = 0; i < amountOfTabs; ++i)
    {
        tabsPositions[i] = firstTabIndex + 8 * i;
    }

    for (int i = 0; i < amountOfTabs; ++i)
    {
        textBeforeTabLength = tabsPositions[i] - 1;
        textAfterTabLength = inputLength - (textBeforeTabLength + TAB_LENGTH);
        currentArrayLength = textBeforeTabLength + TAB_LENGTH * (i + 1) + textAfterTabLength;

        beforeIndex = 0;
        afterIndex = newArrayLength - tabsPositions[i] + TAB_LENGTH - 1;
        for (int j = 0; j < currentArrayLength; ++j)
        {
            if (j <= tabsPositions[i])
                continue;
            if (j >= tabsPositions[i] + TAB_LENGTH)
                input[j] = input[afterIndex + j];
            else
                input[j] = ' ';
        }
    }
    return newArrayLength;
}