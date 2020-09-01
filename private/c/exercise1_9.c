#include <stdio.h>

int getCurrentLineLength(char currentLine[]);
void replaceArrays(char baseArray[], char targetArray[], int length);
void reverseArray(char[], int);

int main(void)
{
    char currentLine[100];
    char longestLine[100];

    int currentLineLength;
    int longestLineLength;

    longestLineLength = 0;
    while ((currentLineLength = getCurrentLineLength(currentLine)) > 0)
    {
        if (currentLineLength >= longestLineLength)
        {
            replaceArrays(currentLine, longestLine, currentLineLength);
            longestLineLength = currentLineLength;
        }
    }
    reverseArray(longestLine, longestLineLength);
    printf("\nLongest line(length: %d): \n%s\n", longestLineLength, longestLine);

    return 0;
}

int getCurrentLineLength(char currentLine[])
{
    int length = 0, input;
    for (int i = 0; (input = getchar()) != EOF; ++i)
    {
        if (input == '\n')
        {
            return length;
        }
        currentLine[i] = input;
        ++length;
    }
    return EOF;
}

void replaceArrays(char baseArray[], char targetArray[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        targetArray[i] = baseArray[i];
    }
    targetArray[length] = '\0';
}

void reverseArray(char array[], int arrayLength)
{
    char oldArray[arrayLength];
    for (int i = 0; i < arrayLength; ++i)
    {
        oldArray[i] = array[i];
    }
    for (int i = 0; i < arrayLength; ++i)
    {
        array[i] = oldArray[arrayLength - 1 - i];
    }
}
