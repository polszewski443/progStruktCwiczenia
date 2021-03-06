#include  <stdio.h>
#include <stdlib.h>

int main()
{
    char c, b;
    long lZnak = 0L;
    int lZNL = 0;
    int lOdst = 0;


    printf("Podaj dane (# konczy dzialanie programu):\n");
    c = getchar();
    while (c != '#')
    {
        lZnak++;
        if (c =='\n')
            lZNL++;
        if (c == ' ')
        {
            lOdst++;
        }
        c = getchar();
    }
    printf("znaki = %ld, liczba odsepow = %d, znaki nowej linii = %d\n",
           (lZnak--), lOdst, lZNL);
    return 0;
}
