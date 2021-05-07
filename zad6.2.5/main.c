#include <stdio.h>
#include <stdlib.h>
int*** tworz(int n,int m,int o)
{
    int *** tab = malloc(n*sizeof(int**));
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i < m; j++)
            tab[j] = malloc(o*sizeof(int));
    }
    return tab;
}
void usunzpam(int n, int m, int o, int ***tab)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i <m; i++)
            free(tab[i]);
        free(tab);
    }
}
