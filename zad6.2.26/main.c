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

int **transpozycja(int **tab, unsigned int n, unsigned int m){

    int i=0;
    int j=0;
    int **temp=zalokuj(m, n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            temp[i][j]=tab[j][i];
        }
    }
    return temp;
}

int main()
{

    int n=4;
    int m=3;
    int **tab1=zalokuj(n, m);
    printf("Tablica1: \n");
    stworz(n, m, tab1);
    printf("Tablica1: \n");
    wyswietl(n, m, tab1);
    printf("Tablica2: \n");
    int **tab2=transpozycja(tab1, n, m);
    wyswietl(m, n, tab2);
    return 0;
}
