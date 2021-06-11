#include <stdio.h>
#include <stdlib.h>


void wypisz(unsigned int n, double *tab)
{
    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %lf ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void wypelnij(unsigned int n, double *tab)
{
    for(int i = 0; i < n; i ++)
    {
        scanf("%lf", &(*(tab + i)));
    }
}


void iloczynskalarny(unsigned int n, double tab1[], double tab2[], double tab3[])
{

    for(int i = 0; i < n; i ++)
    {
      tab3[i]=tab1[i] * tab2[i];
    }
}


int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    double tab1[n];
    double tab2[n];
    double tab3[n];
    printf("\n");
    printf("Wypelnij tab1 : \n");
    wypelnij(n, tab1);
    printf("\n");
    wypelnij(n, tab1);
    printf("\n");
    printf("Wypelnij tab2 : \n");
    wypelnij(n, tab2);
    printf("\n");
    wypisz(n, tab2);
    printf("\n");
    printf("Iloczyn skalarny: \n");
    iloczynskalarny(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    return 0;
}

