#include <stdio.h>

int main(void)
{
    char * string;

    printf("Wpisz cokolwiek, a ja to powtorze: \n");

    fgets(string, 100, stdin);

    printf("Wprowadzony text: \n%s\n", string);

    getchar();


    return 0;
}