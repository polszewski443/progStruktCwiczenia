#include <stdio.h>
#include <stdlib.h>

int **zalokuj(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));

    }
    return tab;
}

void stworz(int n, int m, int **tab){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] =  ", i, j);
            scanf("%d", &tab[i][j]);
            printf("\n");

        }
    }
}

void wyswietl(int n, int m, int **tab){


    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", *(*(tab+i)+j));
        }
        printf("]\n");
    }
}

void wprawo(int **tab, unsigned int n, unsigned int m){

    int i=0;
    int j=0;
    int temp;
    for(i=0; i<n; i++)
    {
        temp=tab[i][m-1];
        for(j=m-1; j>0; j--)
        {
            tab[i][j]=tab[i][j-1];
        }
        tab[i][0]=temp;
    }
}

int main()
{

    int n=4;
    int m=3;
    int **tab1=zalokuj(n, m);
    printf("Tablica: \n");
    stworz(n, m, tab1);
    printf("Tablica: \n");
    wyswietl(n, m, tab1);
    printf("Tablica po przesunieciu kolumn w prawo: \n");
    wprawo(tab1, n, m);
    wyswietl(n, m, tab1);
    return 0;
}
