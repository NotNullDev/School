#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getIndexOfBiggestLine(int **tab, int W, int K);
// zad1
int silniaIteracyjna(int n);
// zad2
void zamiana(int *a, int *b);
//zad3
int sumOfElementsIn1dArray(int *array, int length);
//zad4
float *getArrayFromUser(int length);
//zad5
void fillRandom(int **tab, int W, int K);
//zad6
void print2dArray(int **tab, int W, int K);
//zad7
int sumOnBothDiagonals(int **tab, int N);
//zad8
int sumElementsOfTriangle2dArrayv2(int **tab, int N);
//zad9
void printBiggestLines(int **array, int W, int K);
//zad10
void WspMax(int **tab, int W, int K, int *x, int *y);

int main(void)
{
    int **tab;

    int W, K;

    printf("Podaj ilosc wierszy: ");
    scanf("%d", &W);
    printf("\nPodaj ilosc kolumn: ");
    scanf("%d", &K);

    tab = malloc(W * sizeof(int *));
    for (int i = 0; i < W; ++i)
    {
        tab[i] = malloc(K * sizeof(int));
    }

    fillRandom(tab, W, K);

    print2dArray(tab, W, K);

    int biggestLine = getIndexOfBiggestLine(tab, W, K);
    printf("Biggest line of this array is on index %d.\n", biggestLine);

    printf("tab[1]==*(tab + 1) <=>  %d\n", tab[1] == *(tab + 1));

    for (int i = 0; i < W; i++)
    {
        free(tab[i]);
    }
    free(tab);
    return 0;
}

void fillRandom(int **tab, int W, int K)
{
    srand(time(NULL));
    for (int i = 0; i < W; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            tab[i][j] = rand() % 20;
        }
    }
}

void print2dArray(int **tab, int W, int K)
{
    for (int i = 0; i < W; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            printf("%2d ", tab[i][j]);
        }
        printf("\n");
    }
}

int sumElementsOfTriangle2dArrayv2(int **tab, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; j++)
        {
            if ((j < N - 1 - i) && j >= 0)
            {
                sum += tab[i][j];
            }
        }
    }
    return sum;
}

int getIndexOfBiggestLine(int **tab, int W, int K)
{
    int currentSum = 0, biggestSum, indexOfBiggest;

    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < K; j++)
        {
            currentSum += tab[i][j];
        }
        if (i == 0 || currentSum > biggestSum)
        {
            biggestSum = currentSum;
            indexOfBiggest = i;
        }
        currentSum = 0;
    }
    return indexOfBiggest;
}

int silniaIteracyjna(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;
    int result = 1;
    for (int i = 2; i < n; i++)
    {
        result *= i;
    }
    return result;
}

void zamiana(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// return -1 on error
int sumOfElementsIn1dArray(int *array, int length)
{
    if (length <= 0)
        return -1;
    int sum = 0;
    for (int i = 0; i < length; ++i)
    {
        sum += array[i];
    }
    return sum;
}

float *getArrayFromUser(int length)
{
    float *tab;
    tab = malloc(length * sizeof(float));
    for (int i = 1; i <= length; i++)
    {
        printf("Podaj %d element: ", i);
        if (scanf("%f", tab[i]) != 1)
        {
            return NULL;
        }
    }
    return tab;
}

void printBiggestLines(int **array, int W, int K)
{
    int indexOfBiggest = getIndexOfBiggestLine(array, W, K);
    int biggestSumVal = sumOfElementsIn1dArray(array[indexOfBiggest], K);
    printf("Biggest values on lines: [");
    for (int i = 0; i < W; i++)
    {
        if (sumOfElementsIn1dArray(array[i], K) == biggestSumVal)
            printf("%d, ");
    }
    printf("]\n");
}

void WspMax(int **tab, int W, int K, int *x, int *y)
{
    int max;
    max = tab[0][0];
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (tab[i][j] > max)
            {
                max = tab[i][j];
                *x = i;
                *y = j;
            }
        }
    }
}

int sumOnBothDiagonals(int **tab, int N)
{
    int sum;
    sum = 0;
    int K, W;
    K = W = N;
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (i == j)
            {
                //dla  W = K = 3
                /*
                pierwsza przekatna:
                x=(0,0)
                    x=(1,1)
                        x=(2,2)...
                */
                sum += tab[i][j];
                /*
                druga przekatna:
                        y=(2,2)
                    y=(1,1)
                y=(0,0)
                */
                sum += tab[W - i][K - i];
            }
        }
    }
}