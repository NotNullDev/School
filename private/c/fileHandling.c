#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("file_handling_txt.txt", "w+");
    char text[] = "Written by c program!";
    int read;
    for (int i = 0; i < 21; ++i)
        putc(text[i], file);
    printf("Text from file:\n");
    char fromFile[100];
    fscanf(file, &fromFile);
    fprintf(file, "LOL!");
    printf("%s", fromFile);
    fclose(file);

    return 0;
}