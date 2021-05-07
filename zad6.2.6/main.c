#include <stdio.h>
#include <stdlib.h>
int (** alokacja(int n, int m, int o))[]
{
    return malloc(n*m*sizeof(int[o]));
}
void zwolnienie(int n,int m, int tab[][n][m])
{
    free(tab);
}
