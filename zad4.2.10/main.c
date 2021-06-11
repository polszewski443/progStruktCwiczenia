#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wyswietl(unsigned int n, int *tab)
{
    printf("[");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void wypelnij(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));
    }
}

int funkcja1(unsigned int n, int tab1[])
{
    int maks = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]>maks)
            maks=tab1[i];
    return maks;
}

int funkcja2(unsigned int n, int tab1[])
{
    int min = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]<min)
            min=tab1[i];
    return min;
}

int funkcja3(unsigned int n, int tab1[])
{
    int max = tab1[0];
    int maxindeks = 0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>max)
        {
            max=tab1[i];
            maxindeks=i;
        }
    }
    return maxindeks;
}

int funkcja4(unsigned int n, int tab1[])
{
    int min = tab1[0];
    int minindeks = 0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]<min)
        {
            min=tab1[i];
            minindeks=i;
        }
    }
    return minindeks;
}

int funkcja5(unsigned int n, int tab1[])
{
    int maks = tab1[0];
    for(int i=0;i<n;i++)
    {
        tab1[i]=abs(tab1[i]);
    }
    for(int i=0;i<n;i++)
        if(tab1[i]>maks)
            maks=tab1[i];
    return maks;
}

int funkcja6(unsigned int n, int tab1[])
{
    int maks = tab1[0];
    int maksindeks=0;
    for(int i=0;i<n;i++)
    {
        tab1[i]=abs(tab1[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>maks)
        {
            maks=tab1[i];
            maksindeks=i;
        }
    }

    return maksindeks;

}

int main()
{
    int n;
    printf("Enter the number of elements in tab1 : ");
    scanf("%d", &n);
    int tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    wypelnij(n, tab1);
    wyswietl(n, tab1);
    printf("Maksymalna wartosc z tab1 : %d \n", funkcja1(n, tab1));
    printf("Minimalna wartosc z tab1: %d \n", funkcja2(n, tab1));
    printf("Indeks maksymalnej wartosci z tab1: %d \n", funkcja3(n, tab1));
    printf("Indeks minimalnej wartosci z tab1 : %d \n", funkcja4(n, tab1));
    printf("Wartosc maksymalnej wartosci bezwzglednej tab1  : %d \n", funkcja5(n, tab1));
    printf("Index maksymalnej wartosci bezwzglednej tab1 : %d \n", funkcja6(n, tab1));


    return 0;
}

