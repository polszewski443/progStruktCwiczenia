#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, int *tab)
{
    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void stworz(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));
    }
}

void funkcja1(unsigned int n, int tab1[], int tab2[], int tab3[])
{

    for(int i=0;i<n;i++)
        tab3[i]=tab1[i]+tab2[i];



}

void funkcja2(unsigned int n, int tab1[], int tab2[], int tab3[])
{

    for(int i=0;i<n;i++)
    {
        if(tab1[i]>=tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];

    }

}



int main()
{
    int n;
    printf("Dodaj n: ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    int tab3[n];
    printf("\n");
    printf("Wartosci tab1 : \n");
    stworz(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    printf("Wartosci tab2 : \n");
    stworz(n, tab2);
    printf("\n");
    print(n, tab2);
    printf("\n");
    printf("Wartosci tab3 : \n");
    stworz(n, tab3);
    printf("\n");
    print(n, tab3);
    printf("\n");
    printf("Tab3 po przepisaniu tab1 i tab2: \n");
    funkcja1(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("\n");
    printf("Tab3 po przepisaniu wiekszych wart z tab1 i tab2: : \n");
    funkcja2(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("\n");
    return 0;
}
