#include <stdio.h>


int main(void)
{

    typedef enum kolory {niebieski, zielony, czerwony, pomaranczowy=7}kolory;

    

    kolory kolor1 = niebieski;

    printf("%d", kolor1);

    return 0;
}