#include <stdio.h>
int main(void)
{
    char plec;

    printf("Podaj plec: \n");
    scanf("%c", &plec);
    fflush(stdin);

    switch(plec)
    {
        case 'm' :    
        case 'M' :
            printf("Hello male.\n");
            break;
        case 'f' :
        case 'F' :
            printf("Hello female.\n");
            break;
        default:
            printf("Im not sure...\n");
            break;
    }


    return 0;
}