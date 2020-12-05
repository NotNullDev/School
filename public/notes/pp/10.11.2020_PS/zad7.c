#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int **tab2D;

    int W, K, max, preMax, temp;

    srand(time(NULL));

    printf("Podaj ilosc wierszy: ");
    scanf("%d", &W);
    printf("\nPodaj ilosc kolumn: ");
    scanf("%d", &K);

    tab2D = malloc(W * sizeof(int *));
    for (int i = 0; i < W; ++i)
    {
        tab2D[i] = malloc(K * sizeof(int));
    }

    for (int i = 0; i < W; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            tab2D[i][j] = rand() % 20;
            printf("%2d ", tab2D[i][j]);
            if (i == 0 && j == 0)
            {
                max = tab2D[i][j];
                preMax = tab2D[i][j];
            }
            else
            {
                if (tab2D[i][j] < max && tab2D[i][j] > preMax)
                    preMax = tab2D[i][j];
                if (tab2D[i][j] > max)
                {
                    temp = max;
                    max = tab2D[i][j];
                    preMax = temp;
                }
            }
        }
        printf("\n");
    }

    printf("Max znaleziona wartosc to: %d, wystepuje na pozycjach (i,j) : ", max);
    for (int i = 0; i < W; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            if (tab2D[i][j] == max)
            {
                printf("(%d,%d), ", i, j);
            }
        }
    }
    putchar('\b');
    putchar('\n');
    if (preMax != max)
    {
        printf("PreMax = %d\n", preMax);
    }

    //free memory
    for (int i = 1; i < W; i++)
    {
        free(tab2D[i]);
    }
    free(tab2D);

    return 0;
}