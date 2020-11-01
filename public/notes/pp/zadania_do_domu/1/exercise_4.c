#include <stdio.h>

#define VALIDATION_SUCCESS 3

int main(void)
{

    double num1, num2, result;
    char operator;

    int validation;

    printf("Podaj wyrazenie do obliczenia z listy:\n");

    printf("+ - & /\n");

    printf("Przykladowe wejscie: \n");

    printf("2*3");
    printf("\n");

    printf("Podaj wyrazenie do oblicznia: \n");

    validation = 0;
    validation = scanf("%lf%c%lf", &num1, &operator, & num2);
    fflush(stdin);

    /*
        check for valid input 
    */
    if (validation != VALIDATION_SUCCESS)
    {
        printf("Podano niewlasciwe dane wejsciowe. \n");
        return 0;
    }

    if (num2 == 0 && operator== '/')
    {
        printf("Nie mozna dzielic przez 0!! Konczenie pracy.\n");
        return 0;
    }

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Podano niewlasciwe dane wejsciowe. Konczenie pracy programu.\n");
        return 0;
    }

    printf("Wynik: %.3lf.\n", result);

    return 0;
}