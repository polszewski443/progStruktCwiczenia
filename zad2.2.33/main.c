#include <stdio.h>
#include <stdlib.h>

unsigned int suma(int liczba, unsigned int *tab)
{
    unsigned int sumaL = 0;
    for (int i = 0; i < liczba; i++)
        {
        sumaL += tab[i];
        }
    return sumaL;
}

int main()
{
    unsigned int l, tab[100];
    int liczba;
    printf("Podaj ile liczb chcesz zsumowac: ");
    scanf("%d", &liczba);
    for(int i = 0; i < liczba; i++)
        {
        scanf("%d", &l);
        tab[i] = l;
        }
    printf("Wynik to: %d", suma(liczba, tab));
    return 0;
}

