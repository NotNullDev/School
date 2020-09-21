#include <stdio.h>

int main(void)
{
    //get birthday date
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Your birthday date is %d.%d.%d\n", day, month, year);
    return 0;
}