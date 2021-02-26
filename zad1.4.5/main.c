#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, suma = 0, i;
    printf("Podaj nieujemna liczbe calkowita n:\n");
    scanf("%i", &n);
    if(n>=0)
    {
    for (i = 0; i <= n; i++)
    {
      suma += i * i;
    }
    printf("Suma kwadratow liczb calkowitych od 0 do n wynosi: %i", suma);
    }
    else printf("Podana liczba nie jest nieujemna.");
    return 0;
}
