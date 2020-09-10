#include <stdio.h>

#define MAXLINE 100
#define MAXLINELENGTH 12
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

    char after[maxline];
    int afterLength;
    int lastNewLineSignIndex;

    lineLength = 0;
    lastNewLineSignIndex = 0;
    afterLength = 0;
    for (int i = 0; i < inputLength; ++i)
    {
        if (input[i] == '\n' || inputLength == i)
        {
            lineLength = i - lineLength - 1;
            /*
                fdsfsd   
            */
            if (lineLength > MAXLINELENGTH)
            {
                while (input[i] == ' ' || input[i] == '\t')
                {
                    --i;
                }
                for (int j = 0; j <= i; ++j)
                {
                    line[j] = input[j];
                }
                lineLength = i;
                for (int j = i + 1; j < inputLength; ++j)
                {
                    after[j - i - 1] = input[j];
                    ++afterLength;
                }
                for (int j = 0; j < inputLength + 1; ++j)
                {
                    if (j < lineLength)
                        newInput[j] = input[j];
                    else if (j = lineLength)
                        newInput[j] = '\n';
                    else
                        newInput[j] = input[j - 1];
                }
                for (int j = 0; j < inputLength + 1; ++j)
                {
                    input[j] = newInput[j];
                }
                inputLength++;
                i++;
            }
        }
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