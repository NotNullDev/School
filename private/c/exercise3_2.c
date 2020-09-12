#include <stdio.h>

#define MAXINPUT 100

void escape(char s[], char t[]);
int getInput(char userInput[]);

int main(void)
{
    char s[MAXINPUT];
    char t[MAXINPUT];
    getInput(t);
    escape(s, t);
    printf("%s", s);
    return 0;
}

void escape(char s[], char t[])
{
    int tLength = 0, i = 0;
    char before[MAXINPUT], after[MAXINPUT];
    int beforeLength, afterLength;
    beforeLength = afterLength = 0;

    while (t[tLength++] != '\0')
        ;

    while ((s[i] = t[i]) != EOF)
    {
        switch (s[i])
        {
        case '\n':
            for (int j = i + 2; j < tLength + 1; ++j)
                s[j] = t[j];
            s[i] = '\\';
            s[++i] = 'n';
            break;
        case '\t':
            for (int j = i + 2; j < tLength + 1; ++j)
                s[j] = t[j];
            s[i] = '\\';
            s[++i] = 't';
            break;
        default:
            break;
        }
        i++;
    }
}

int getInput(char userInput[])
{
    int input;
    int index = 0;
    for (index = 0; (userInput[index] = getchar()) != EOF; ++index)
        ;
    userInput[index] = '\0';
}