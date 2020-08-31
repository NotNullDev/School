#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrToCelsius(int);

int main(void)
{
    int fahr;

    printf("Fahr\tCelsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d\t%.3f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
float fahrToCelsius(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}