#include <stdio.h>

int main(void)
{
    int valid, sum, currentNumber;
    sum = 0;
    do
    {
        printf("Podaj liczbe calkowita: ");
        valid = scanf("%d", &currentNumber);

        if (valid != 1)
        {
            printf("Podano nieprawidlowe dane wejciowe. Konczenie programu.\n");
            return 1;
        }
        sum += currentNumber;
        if (sum > 100)
            break;
    } while (1);
    printf("Suma podanych liczb przekroczyla 100. Wyonosi ona: %d.\ns", sum);

    return 0;
}