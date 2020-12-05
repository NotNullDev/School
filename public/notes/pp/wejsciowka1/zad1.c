#include <stdio.h>

int main()
{
    int zakresDolny, zakresGorny, valid, i;
    printf("Podaj ogarniczenie dolne: \n");
    valid = scanf("%d", &zakresDolny);
    if (valid != 1)
    {
        printf("Podano niewlasciwe dane wejsciowe. \n");
        return 1;
    }
    printf("Podaj ogarniczenie gorne: \n");
    valid = scanf("%d", &zakresGorny);
    if (valid != 1)
    {
        printf("Podano niewlasciwe dane wejsciowe. \n");
        return 1;
    }
    printf("Liczby parzyste z danego zakresu:\n");
    for (i = zakresDolny; i <= zakresGorny; ++i)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}