#include <stdio.h>

#define MAXLINE 100
#define LINELENGTH 12
/*
    wiersz, ktory mozna zlamac xd\n
    if lineLength > 10 
        split into two at 10 or less inext
    save new input to old 
    reoeat until evey line have length less or equal to 10
*/
void breakLines(char input[], int inputLength, int maxline);
int getUserInput(char userInput[]);
int main(void)
{
    char input[MAXLINE];
    int inputLength;

    inputLength = getUserInput(input);

    breakLines(input, inputLength, MAXLINE);
    printf("\nFormated text:\n%s\n", input);
    return 0;
}

void breakLines(char input[], int inputLength, int maxline)
{
    char line[maxline];
    int lineLength;

    char newInput[maxline];
    int newInputLength;

    char lineBefore[maxline];

    lineLength = 0;
    for (int i = 0; i < inputLength; ++i)
    {
        if (input[i] == '\n' && lineLength > LINELENGTH)
        {
            for (int j = 0; j < lineLength; ++j)
            {
            }
            lineLength = 0;
            i = -1;
            continue;
        }
        else if (input[i] == '\n')
        {
            lineLength = 0;
            i = 0;
        }
        line[i] = input[i];
        lineLength++;
    }
}

int getUserInput(char userInput[])
{
#ifndef MAXLINE
#define MAXLINE 100
#endif
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