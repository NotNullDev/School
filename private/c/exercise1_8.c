#include <stdio.h>

int main(void)
{
    int space = 0, tab = 0, new_line = 0, input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
        {
            ++space;
        }
        if (input == '\t')
        {
            ++tab;
        }
        if (input == '\n')
        {
            ++new_line;
        }
    }

    printf("\n");
    printf("Tabs: %d\n", tab);
    printf("New lines: %d\n", new_line);
    printf("Spaces: %d\n", space);
    printf("Program ended. Thanks.\n");

    return 0;
}