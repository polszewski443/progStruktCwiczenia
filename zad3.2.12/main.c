#include <stdio.h>
#include <stdlib.h>
int rezerw(int);

int main()
{
    int n = 3;
    printf("%d --> %d", rezerw(n));
    return 0;
}
int rezerw(int n)
{
    int *wsk;
    int zarez = malloc(n * sizeof(double));
    wsk = &zarez;
    return  wsk;
}
