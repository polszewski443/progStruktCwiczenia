#include  <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int lZnak = 0;
    int kod;


    printf("Podaj znak, aby sprawdzic jaki jest jego kod ASCII (# konczy dzialanie programu):\n");
    c = getchar();
    while (c != '#')
    {
        lZnak++;

        printf("%c -> %d, ", c, c);
        if (lZnak % 8 == 0)
        {
            printf("\n");
        }
        c = getchar();
    }
    return 0;
}
