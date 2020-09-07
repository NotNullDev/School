#include <stdio.h>

#define MAXLINE 100
#define TAB_LENGTH 4

int getUserInput(char[]);
void detab(char[], int, int);
int getAmountOfNextSpaces(char input[], int inputLen, int currentIndex);

int main(void)
{
    char input[MAXLINE];
    int inputLength;

    inputLength = getUserInput(input);
    detab(input, inputLength, MAXLINE);
    printf("\nInput:\n%s\n", input);
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

void detab(char input[], int inputLen, int maxline)
{
    for (int i = 0; i < inputLen; ++i)
    {
        int spacesAmount;
        int tabsAmount;
        int totalSpaces;
        char newArray[maxline];
        int newArrayLength;
        if (input[i] == ' ')
        {
            totalSpaces = 1 + getAmountOfNextSpaces(input, inputLen, i);
            if (totalSpaces < 4)
                continue;
            tabsAmount = totalSpaces / TAB_LENGTH;
            spacesAmount = totalSpaces % TAB_LENGTH;
            newArrayLength = inputLen - 3 * tabsAmount;
            for (int j = 0; j < i; ++j)
                newArray[j] = input[j];
            for (int j = i; j < i + tabsAmount; ++j)
                newArray[j] = '\t';
            for (int j = i + tabsAmount; j < i + tabsAmount + spacesAmount; ++j)
                newArray[j] = ' ';
            for (int j = i + tabsAmount + spacesAmount; j < newArrayLength; ++j)
                newArray[j] = input[j + 3 * tabsAmount];
            newArray[newArrayLength++] = '\0';
            inputLen = newArrayLength;
            for (int j = 0; j < newArrayLength; ++j)
                input[j] = newArray[j];
        }
    }
}
int getAmountOfNextSpaces(char input[], int inputLen, int currentIndex)
{
    int amount;
    amount = 0;
    for (int i = currentIndex; i < inputLen; ++i)
    {
        if (input[i + 1] == ' ')
            ++amount;
        else
            return amount;
    }
    return amount;
}