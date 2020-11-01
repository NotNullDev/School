#include <stdio.h>

#define PI 3.14

int main(void)
{
    float promien;

    printf("Podaj promien kola.");
    scanf("%f", &promien);
    fflush(stdin);
    
    printf("Pole tego kola to: %.3f\n", PI*promien*promien);
    printf("Obwod tego kola to: %.3f\n", 2*PI*promien);


    printf("\nNacisnij enter aby zakonczyc program.\n");
    getchar();
    return 0;
}