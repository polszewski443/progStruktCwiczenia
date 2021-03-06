#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char tab[]={'F','E','D','C','B','A'};
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", tab[j]);
        }
        printf("\n");
    }
    return 0;
}
