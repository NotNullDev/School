#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int i, valid, *tab, n;

    printf("Podaj ilosc liczb do wygenerowania: ");
    valid = scanf("%d", &n);
    if (valid != 1 || n <= 0)
    {
        printf("asdfasdfdasf\n");
        return 1;
    }

    tab = malloc(n * sizeof(int));

    for (i = 0; i < n; ++i)
    {
        tab[i] = rand();
        printf("tab[%d] == [%d]\n", i, tab[i]);
    }

    free(tab);
    return 0;
}
