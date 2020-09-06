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
        int space_index;
        int scpaces_len;

        char before[maxline];
        char after[maxline];
        char newArray[maxline];

        int beforeLen;
        int afterLen;
        int newArrayLen;

        int tabs_amount;
        int spaces_amount;

        space_index = -1;
        scpaces_len = 0;
        if (input[i] == ' ')
        {
            space_index = i;
            scpaces_len = getAmountOfNextSpaces(input, inputLen, i) + 1;
            tabs_amount = scpaces_len / TAB_LENGTH;
            spaces_amount = scpaces_len % TAB_LENGTH;
            newArrayLen = inputLen - 3 * tabs_amount;
            if (scpaces_len < 4)
                continue;
            for (int j = 0; j < space_index; ++j)
                newArray[j] = input[j];
            for (int j = space_index; j < space_index + tabs_amount; ++j)
                newArray[j] = '\t';
            for (int j = space_index + tabs_amount; j < space_index + tabs_amount + spaces_amount; ++j)
                newArray[j] = input[j];
            for (int j = space_index + tabs_amount + spaces_amount; j < inputLen - 3 * tabs_amount; ++j)
                newArray[j] = input[j];
            for (int j = 0; j < newArrayLen; ++j)
                input[j] = newArray[j];
            input[newArrayLen] = '\0';
            inputLen = newArrayLen + 1;
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