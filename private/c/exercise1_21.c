#include <stdio.h>

#define TAB_LENGTH 4
#define MAXLINE 100

void entab(char input[], int inputLength);
int getUserInput(char userInput[]);
int getNextSpaces(char array[], int arrayLength, int iteration);

int main(void)
{
    char input[MAXLINE];
    int inputLength;
    inputLength = getUserInput(input);
    entab(input, inputLength);
    //    printf("\nAfter:\n%s\n", input);
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
void entab(char input[], int inputLength)
{
    // find first space in text that have next to it at least 3 spaces and save it's length
    for (int i = 0; i < inputLength; ++i)
    {
        int index;
        int length;

        int amountOfTabs;
        int amountOfSpaces;

        char newArray[MAXLINE];
        int newArrayLength;

        char before[MAXLINE];
        int beforeLength;

        char after[MAXLINE];
        int afterLength;

        if (input[i] = ' ' && (length = getNextSpaces(input, inputLength, i)) >= 3)
        {
            ++length;
            index = i;
            amountOfTabs = length / TAB_LENGTH;
            amountOfSpaces = length % TAB_LENGTH;
            newArrayLength = beforeLength + amountOfTabs + amountOfSpaces + afterLength;
            //get before and after
            for (int j = 0; j < inputLength; ++j)
            {
                if (j < index)
                    before[i] = input[j];
                else if (j > index + length - 1)
                    after[j - (index + length - 1)] = input[j];
            }
            //make new array
            for (int j = 0; j < index; ++j)
                newArray[j] = input[j];
            //merge new array into input
            for (int j = 0; j < newArrayLength; ++j)
            {
                input[j] = newArray[j];
            }
            inputLength = newArrayLength;
        }
    }
}

int getNextSpaces(char array[], int arrayLength, int iteration)
{
    int amount;
    amount = 0;

    for (int i = iteration + 1; array[i] == ' ' && i < arrayLength; ++i)
        ++amount;
    return amount;
}
