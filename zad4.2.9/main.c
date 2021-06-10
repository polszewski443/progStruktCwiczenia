#include <stdio.h>
#include <stdlib.h>

void stworz(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element of array : ", i+1);
        scanf("%d", &(*(tab+i)));
    }
}

void print(unsigned int n, int *tab)
{
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]\n");
}

void funkcja1(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0; i<n; i++)
    {
        if(tab1[i]>tab2[i] && tab3[i]>tab1[i])
            tab1[i]=tab3[i];
        if(tab1[i]>tab2[i] && tab3[i]==tab1[i])
            tab1[i]=tab1[i];
        if(tab1[i]>tab3[i] && tab2[i]>tab3[i])
            tab1[i]=tab2[i];
        if(tab1[i]>tab3[i] && tab2[i]==tab3[i])
            tab1[i]=tab1[i];
        if(tab1[i]<tab2[i] && tab2[i]==tab3[i])
            tab1[i]=tab2[i];
        if(tab1[i]<tab2[i] && tab2[i]>tab3[i])
            tab1[i]=tab2[i];
        if(tab1[i]<tab2[i] && tab2[i]<tab3[i])
            tab1[i]=tab3[i];
        else
            tab1[i]=tab1[i];
    }

    for(int i=0; i<n; i++)
    {
        if(tab2[i]>tab2[i] && tab3[i]>tab1[i])
            tab1[i]=tab3[i];
        if(tab1[i]>tab2[i] && tab3[i]==tab1[i])
            tab1[i]=tab1[i];
    }
}

int main()
{
    int n;
    printf("Dodaj n: ");
    scanf("%d", &n);
    int *tab1=malloc(n*sizeof(int));
    stworz(n, tab1);
    print(n, tab1);
    int *tab2=malloc(n*sizeof(int));
    stworz(n, tab2);
    print(n, tab2);
    int *tab3=malloc(n*sizeof(int));
    stworz(n, tab3);
    print(n, tab3);
    printf("Po przepisaniu najwiekszej wartosci do tab1 : \n");
    funkcja1(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    return 0;
}
