#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int maxline);

int copy(char to[], char from[]);

int main(void)
{
    int input, currentPositionInLine = 0, maxLength = 0;
    char currentLine[MAXLINE], maxLine[MAXLINE];

    while (((input = getchar()) != EOF))
    {
        if (input != '\n')
        {
            currentLine[currentPositionInLine] = input;
            ++currentPositionInLine;
        }
        else
        {
            if ((currentPositionInLine > maxLength) && maxLine != 0)
            {
                for (int i = 0; i < currentPositionInLine; ++i)
                {
                    maxLine[i] = currentLine[i];
                }
                maxLength = currentPositionInLine;
                currentPositionInLine = 0;
            }
        }
    }
    putchar('\n');
    for (int i = 0; i < maxLength; ++i)
    {
        putchar(maxLine[i]);
    }
    putchar('\n');

    return 0;
}