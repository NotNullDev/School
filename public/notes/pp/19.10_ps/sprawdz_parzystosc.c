#include <stdio.h>

int main(void)
{

    int liczba;

    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);
    fflush(stdin);
    
    if(liczba == 0)
    {
        printf("Liczba jest parzysta.\n");
        return 0;
    }
    if( (liczba % 2) == 1 || (liczba % 2) == -1)
        if(liczba < 0)
            printf("Liczba jest nieparzysta i ujemna.\n");
        else
            printf("Liczba jest nieparzysta i dodatnia.\n");
    else
        if(liczba < 0)
            printf("Liczba jest parzysta i ujemna.\n");
        else
            printf("Liczba jest parzysta i dodatnia.\n");
    return 0;
}