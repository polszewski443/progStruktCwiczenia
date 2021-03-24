#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int *w)
{
    *w = n;
}
int main()
{
    int zmw = 4;
    int *w = &zmw;
    printf("Przed przepisaniem: %d\n", *w);
    przepisz(3, &w);
    printf("Po przepisaniu: %d", w);
}
