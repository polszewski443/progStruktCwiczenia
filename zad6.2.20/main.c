#include <stdio.h>
#include <stdlib.h>

int **zalokuj(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));  //*(tab+i)  =malloc(m*sizeof(int));

    }
    return tab;
}

void wypelnij(int n, int m, int **tab){

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

void zamien(int **tab1, int **tab2, unsigned int n, unsigned int m){

    int i,j;
    int **temp=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
    {
        *(temp+i)=malloc(m*sizeof(int));

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(temp+i)+j)=*(*(tab2+i)+j);

        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(tab2+i)+j)=*(*(tab1+i)+j);

        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(tab1+i)+j)=*(*(temp+i)+j);

        }
    }
}




int main()
{

    int n=4;
    int m=5;
    int **tab1=zalokuj(n, m);
    printf("Tablica pierwsza : \n");
    wypelnij(n, m, tab1);
    printf("Tablica pierwsza : \n");
    wyswietl(n, m, tab1);
    int **tab2=zalokuj(n, m);
    printf("Tablicdruga : \n");
    wypelnij(n, m, tab2);
    printf("Tablica druga : \n");
    wyswietl(n, m, tab2);
    zamien(tab1, tab2, n, m);
    printf("Tablica pierwsza po zamianie: \n");
    wyswietl(n, m, tab1);
    printf("Tablica druga po zamianie: \n");
    wyswietl(n, m, tab2);
    return 0;
}
