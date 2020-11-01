#include <stdio.h>

int main(void)
{

    int wiek;
    char plec;
    char * imie;
    float jakisfloat;
    double odleglosc;

    printf("Podaj swoje imie: \n");
    scanf("%s", imie);

    printf("Podaj swoj wiek: \n");
    scanf("%d", &wiek);

    printf("Podaj swoja plec: m albo f:");
    scanf("%c", &plec);

    printf("Podaj jakas odlegosc zmiennoprzecinkowa: \n");
    scanf("%f", &odleglosc);


    return 0;
}