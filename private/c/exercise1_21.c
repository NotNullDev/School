#include <stdio.h>

#define MAXLINE 100

int getUserInput(char[]);
void detab(char[], int, int);

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
