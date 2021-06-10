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
        tab3[i]=tab1[i];
    for(int j=0;j<n;j++)
        tab3[j+n]=tab2[j];
}


void funkcja2(unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)tab3[i]=tab1[i];
        if(i%2==0)tab3[i]=tab2[i];
    }
}



int main()
{
    int n;
    printf("Dodaj n: ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    int tab3[2*n];
    printf("\n");
    printf("Dodaj tab1 : \n");
    stworz(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    printf("Dodaj tab2: \n");
    stworz(n, tab2);
    printf("\n");
    print(n, tab2);
    printf("\n");
    printf("Dodaj tab3: \n");
    stworz(2*n, tab3);
    printf("\n");
    print(2*n, tab3);
    printf("\n");
    printf("tab3 po przepisaniu : \n");
    funkcja1(n, tab1, tab2, tab3);
    print(2*n, tab3);
    printf("\n");
    printf("tab3 po drugim przepisaniu : \n");
    funkcja2(n, tab1, tab2, tab3);
    print(2*n, tab3);
    printf("\n");
    return 0;
}
