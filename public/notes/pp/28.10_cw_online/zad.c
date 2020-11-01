#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int n, m, *tab1, *tab2, *tab3, min, max, a, b;

    srand(time(NULL));

    printf("Podaj rozmiar pierwszej tablicy: ");
    scanf("%d", &n);

    printf("\nPodaj rozmiar drugiej tablicy: ");
    scanf("%d", &m);

    tab1 = malloc(n * sizeof(int));
    tab2 = malloc(m * sizeof(int));
    tab3 = malloc((n + m) * sizeof(int));

    min = 0;
    max = 50;

    printf("tab1: \n[");
    for (int i = 0; i < n; ++i)
    {
        tab1[i] = rand() % (max - min) + min;
        min = tab1[i];
        printf("%d, ", tab1[i]);
    }
    putchar('\b');

    min = 0;
    max = 50;

    printf("\b]\n");
    printf("tab2: \n[");
    for (int i = 0; i < m; ++i)
    {
        tab2[i] = rand() % (max - min) + min;
        min = tab2[i];
        printf("%d, ", tab2[i]);
    }
    putchar('\b');
    printf("\b]\n");

    a = 0;
    b = 0;

    for (int i = 0; i < (n + m); ++i)
    {
        if (tab1[a] < tab2[b] && a < n)
        {
            tab3[i] = tab1[a++];
        }
        else
        {
            tab3[i] = tab2[b++];
        }
    }

    printf("tab3: \n[");
    for (int i = 0; i < n + m; ++i)
    {
        printf("%d, ", tab3[i]);
    }
    putchar('\b');
    printf("\b]\n");

    free(tab1);
    free(tab2);
    free(tab3);

    return 0;
}