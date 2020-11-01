#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
    int i, j;
    int N;
    int randomInt;
    int input;
    int from, to;

    srand(time(NULL));
    randomInt = rand() % 100;

    do
    {
        printf("Zgdanij liczbe: ");
        scanf("%d", &input);
        if (input > randomInt)
            printf("Podana liczba jest za duza!\n");
        else if (input < randomInt)
            printf("Podana libcza jest za mala!\n");
        else
            break;
        printf("Sprobuj ponownie!\n");
    } while (1);

    printf("Gratulacje, zgadles moja losowa liczbe!\n");

    printf("Teraz ja zgadne twoja liczbe! Podaj ja: ");
    scanf("%d", &input);
    from = 0;
    to = 99;
    do
    {
        randomInt = from + rand() % to;
        if (randomInt < input)
            from = randomInt;
        else if (randomInt > input)
            to /= 2;
        printf("Hmm, moze to bylo %d ", randomInt);
        sleep(1);
    } while (randomInt != input);
    printf("Zgadlem twoja liczbe! Oto ona: ", randomInt);

    return 0;
}