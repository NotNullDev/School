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
    int amountOfTabs, textBeforeTabLength, currentInputLength, previousArrayLength, textAfterTabLength, firstTabIndex, currentTabPosition, tabsPositions[MAXLINE / TAB_LENGTH], newArrayLength, beforeIndex, afterIndex, currentArrayLength;
    char textBeforeTab[MAXLINE], textAfterTab[MAXLINE], newArray[MAXLINE];

    amountOfTabs = inputLength / tab_every;
    firstTabIndex = tab_every - 1;
    newArrayLength = inputLength + 3 * amountOfTabs;
    // caluculate index positions based on amounts of tabs and save them in array
    for (int i = 0; i < amountOfTabs; ++i)
    {
        tabsPositions[i] = firstTabIndex + 8 * i;
    }

    for (int i = 0; i < amountOfTabs; ++i)
    {
        //get essencial current data for each literation
        currentArrayLength = inputLength + 3 * (i + 1);
        previousArrayLength = inputLength + 3 * i;
        currentTabPosition = tabsPositions[i];
        textBeforeTabLength = currentTabPosition;
        textAfterTabLength = previousArrayLength - textBeforeTabLength - 1;
        afterIndex = 0;
        currentInputLength = 0;
        //clear old before and after arrays
        for (int j = 0; j < MAXLINE; j++)
        {
            textBeforeTab[i] = '\0';
            textAfterTab[i] = '\0';
        }
        //feel the array (before and after)
        for (int j = 0; j < previousArrayLength; j++)
        {
            if (j < textBeforeTabLength)
                textBeforeTab[j] = input[j];
            else if (j > textBeforeTabLength)
                textAfterTab[afterIndex++] = input[j];
        }
        afterIndex = 0;
        //feel input with correct data
        for (int j = 0; j < currentArrayLength; ++j)
        {
            if (j < textBeforeTabLength)
                input[j] = textBeforeTab[j];
            else if (j >= textBeforeTabLength + TAB_LENGTH)
                input[j] = textAfterTab[afterIndex++];
            else
                input[j] = ' ';
        }
    }

    return newArrayLength;
}