#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n,\nby otrzymac wartosc elementu o indeksie n\nciagu:\n");
    scanf("%d", &n);
    while (n<0)
    {
        printf("Podano liczbe ujemna, podaj liczbe nieujemna!\n");
        scanf("%d", &n);
    }
    printf("Element ciagu o wyrazie %d ma wartosc %d.", n, ciag(n));
    return 0;
}
int ciag(int n)
{
    if (n == 0)
        return 1;
    return 2 * ciag(n - 1) + 5;
}
