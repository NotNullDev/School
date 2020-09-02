#include <stdio.h>

#define MAXLINE 100
#define TAB_TO_SPACES 8

void replaceTabsToSpaces(char text[], int textLength);
int getUserInput(char userInput[]);

int main(void)
{
    char userInput[MAXLINE];

    int userInputLength;

    userInputLength = getUserInput(userInput);

    replaceTabsToSpaces(userInput, userInputLength);

    printf("Job done.");

    return 0;
}

/*
    return value is length of input
*/
int getUserInput(char userInput[])
{
    int length, input;
    for (int i = 0; (input = getchar()) != EOF; ++i)
    {
        userInput[i] = input;
        ++length;
    }
    userInput[length] = '\0';

    return length;
}

void replaceTabsToSpaces(char text[], int textLength)
{
    int amountOfTabs;
    int tabsPositions[MAXLINE];

    char textAfterTab[MAXLINE];
    char textBeforeTab[MAXLINE];

    /*
        find all tabs in text and save their amount and positions to variables 
    */
    amountOfTabs = 0;
    for (int i = 0; i < textLength; ++i)
    {
        if (text[i] == '\t')
        {
            tabsPositions[amountOfTabs] = i;
            ++amountOfTabs;
        }
    }

    /*
        slice text on two elements before and after tab and save these elements to arrays;
        repeat n times where n is amount of tabs of the text
    */

    /*
        tab position = 3 (4th element)
        which element? 4th (3 +1)
        how many before? 4th - 1 = 3
        how many after? max - (which element + 1) = max - ((3+1) +1) = max - (position +1 + 1) = max - (position +2)

        [1,2,3, tab , 5,6,7,8];
        tabPosition = 3
        lengthBefore = [tab]
        9 - (3+2)
        lengthAfter = [max - (tabPoisiton + 2)]
   */

    int currentTabPositionInText;
    int lengthAfterTab;
    int lengthBeforeTab;
    for (int i = 0; i < amountOfTabs; ++i)
    {
        currentTabPositionInText = tabsPositions[amountOfTabs - i];
        //before tab
        lengthBeforeTab = currentTabPositionInText;
        for (int j = 0; j < lengthBeforeTab; ++j)
        {
            textBeforeTab[j] = text[j];
        }
        //after tab
        int startPositon;
        lengthAfterTab = textLength - (currentTabPositionInText + 2);
        for (int j = 0; j < lengthAfterTab; j++)
        {
            startPositon = currentTabPositionInText + 1;
            textAfterTab[j] = text[startPositon + j];
        }
        /*
            and finally replace old array with array that exist of before, amount of spaces = 1tab, after
        */
    }
}
