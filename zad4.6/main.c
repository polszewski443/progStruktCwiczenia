#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int j, i, k;
    printf("Podaj wielka litere: ");
    scanf("%c", &c);
    int litera = (int)c - 65;
    for(i = 65; i <= (int)c; i++)
    {
        for(j = 0; j < litera; j++)
        {
            printf(" ");
        }

        for(j = 65;j <= (int)c - litera; j++)
        {
            printf("%c", j);
        }
        litera--;
        j -= 2;

        for(k = 65; k <  i; k++)
        {
            printf("%c", j);
            j -= 1;
        }
        printf("\n");
    }
    return 0;
}
