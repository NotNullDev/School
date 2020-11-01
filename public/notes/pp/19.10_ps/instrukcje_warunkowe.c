#include <stdio.h>

int main(void)
{

    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    fflush(stdin);

    if(liczba < 10)
        printf("Podana liczba jest mniejsza niz 10\n");
    else
        printf("Podana liczba jest wieksza badz rowna 10.\n");

    getchar();


    return 0;
}