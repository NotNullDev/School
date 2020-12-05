#include <stdio.h>

int main(void)
{
    int valid;
    float x, y, pole, obwod;
    printf("Podaj pierwszy bok prostokata: ");
    valid = scanf("%f", &x);
    if (valid != 1 || x <= 0.0)
    {
        printf("Podano niewlasciowe dane wejsciowe. \n");
        return 1;
    }
    putchar('\n');

    printf("Podaj drugi bok prostokata: ");
    valid = scanf("%f", &y);
    if (valid != 1 || y <= 0.0)
    {
        printf("Podano niewlasciowe dane wejsciowe. \n");
        return 1;
    }
    putchar('\n');

    pole = x * y;
    obwod = x + y;

    printf("Pole prostokata o bokach %.2f i %.2f wynosi %.2f.\n", x, y, pole);
    printf("Obwod prostokata o bokach %.2f i %.2f wynosi %.2f.\n", x, y, obwod);

    return 0;
}