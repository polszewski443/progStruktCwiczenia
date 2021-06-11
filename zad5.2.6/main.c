#include <stdio.h>
#include <stdlib.h>

int strlength(char* napis)
{
    int len=0;
    while(*(napis++))
    {
        len++;
    }
    return len;
}

int w_strlength(wchar_t *napis)
{
    int len=0;
    for(int i=0; *(napis+i)!=L'\0';i++)
    {
        len=len+1;
    }
    return len;
}
void kopiuj(int n, int m, char* napis1, char* napis2)
{
    m=strlength(napis1);
    char* temp;
    int j=0;
    int i=0;
    for(j=0;napis2[j]!='\0'; j++)
    {
        temp[j]=napis2[j];
    }
    if(m<n)
    {
        for(i=0; i<m; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[m+i]=temp[i];
        }
        napis2[m+i]=0;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[n+i]=temp[i];
        }
        napis2[n+i]=0;
    }
}


void kopiuj2(int n, int m, wchar_t* napis1, wchar_t* napis2)
{
    m=w_strlength(napis1);
    wchar_t* temp;
    int j=0;
    int i=0;
    for(j=0;napis2[j]!=L'\0'; j++)
    {
        temp[j]=napis2[j];
    }
    if(m<n)
    {
        for(i=0; i<m; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[m+i]=temp[i];
        }
        napis2[m+i]=0;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[n+i]=temp[i];
        }
        napis2[n+i]=0;
    }
}

int main()
{
    char napis1[]="Nap";
    char napis2[]="iss";
    printf("Napis 1 : %s\n", napis1);
    printf("Napis 2 przed skopiowaniem : %s\n", napis2);
    kopiuj(3, 4,  napis1, napis2);
    printf("Napis 2 po skopiowaniu : %s\n", napis2);
    char napis3[]="Jan kowalski";
    char napis4[]="Piotr nowak";
    printf("Napis 3 : %s\n", napis3);
    printf("Napis 4 przed skopiowaniem : %s\n", napis4);
    kopiuj(4, 5, napis3, napis4);
    printf("Napis 4 po skopiowaniu : %s\n", napis4);
    wchar_t napis5[]=L"nowak";
    wchar_t napis6[]=L"Kowalski";
    wprintf(L"Napis 5 : %s\n", napis5);
    wprintf(L"Napis 6 przed skopiowaniem : %s\n", napis6);
    kopiuj2(1, 6, napis5, napis6);
    wprintf(L"Napis 6 po skopiowaniu : %s\n", napis6);
    printf("\n");
    return 0;
}


