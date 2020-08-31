#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int maxline);
void copy(char from[], char to[]);

int main(void)
{
    int currentLineLength;
    int longestLineLength;

    char currentLine[MAXLINE];
    char longestLine[MAXLINE];

    longestLineLength = 0;

    while ((currentLineLength = getLine(currentLine, MAXLINE)) > 0)
    {
        if (currentLineLength > longestLineLength)
        {
            copy(currentLine, longestLine);
            longestLineLength = currentLineLength;
        }
    }

    printf("\nLongest line was: \n%s \n", longestLine);

    return 0;
}

int getLine(char line[], int maxline)
{
    int input;
    int currentLength;

    for (int i = 0; (input = getchar()) != '\n'; ++i)
    {
        if (input == EOF)
            return 0;

        line[i] = input;
        ++currentLength;
    }
    return currentLength;
}

void copy(char from[], char to[])
{
    for (int i = 0; from[i] != '\0'; ++i)
    {
        to[i] = from[i];
    }
}