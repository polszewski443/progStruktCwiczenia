#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, int *tab){

    printf("[");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void stworz(unsigned int n, int *tab){

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));


    }
}

void funkcja1(unsigned int n, int tab1[], int tab2[]){

    for(int i=0;i<n;i++)
        tab2[i]=tab1[i];



}

void funkcja2(unsigned int n, int tab1[], int tab2[]){

    for(int i=0;i<n;i++)
    {

        tab2[i]=tab1[n-i-1];

    }

}


int main()
{
    int n;
    printf("Dodaj n: ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    printf("\n");
    printf("Dodaj wart tab1: \n");
    stworz(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    printf("Dodaj wart tab2 : \n");
    stworz(n, tab2);
    printf("\n");
    print(n, tab2);
    printf("\n");
    printf("Po przepisaniu: \n");
    funkcja1(n, tab1, tab2);
    print(n, tab1);
    print(n, tab2);
    printf("Po przepisaniu i odwr : \n");
    funkcja2(n, tab1, tab2);
    print(n, tab1);
    print(n, tab2);
    return 0;
}
