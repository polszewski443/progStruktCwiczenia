#include <stdio.h>
#include <stdlib.h>
int sumuj(int tab[][100], int n)
{
int i, j, suma = 0;
for (i = 0; i < n; i++)
{
    for (j = 0; j < 100; j++)
    {
        suma+=tab[i][j];
    }
}
return suma;
}

