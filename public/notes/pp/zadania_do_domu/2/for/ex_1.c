#include <stdio.h>

int main(void)
{

    int iloscLiczb, valid;
    double userInput, sum;

    printf("Podaj ilosc liczb, ktorych srednia arytmetyczna chcesz wyliczyc: ");
    valid = scanf("%d", &iloscLiczb);
    if (valid != 1)
    {
        printf("Podano niepoprawne dane wejsciowe. Konczenie pracy programu. \n");
        return 0;
    }

    printf("\nWpisz liczbe i zatwierdz ja klawiszem enter. Operacje powtarzaj, do ostatniej liczby. \n\n");

    sum = 0;
    for (int i = 0; i < iloscLiczb; ++i)
    {
        printf("Podaj liczbe %d-sza i zatwierdz klawiszem enter: ", i + 1);

        valid = scanf("%lf", &userInput);
        if (valid != 1)
        {
            printf("Podano niepoprawne dane wejsciowe. Konczenie pracy programu. \n");
            return 0;
        }

        sum += userInput;
        putchar('\n');
    }
    printf("Srednia arytmetyczna podanych liczb wynosi: %lf.\n", sum / iloscLiczb);

    return 0;
}