#include <stdio.h>
#include <stdlib.h>

void wytnijzn(char *napis1, char *napis2)
{
    int i=0;
    int j=0;
    int czyjest[256]={};
    for(i = 0; i < 256; i++)
    {
        czyjest[i]=0;
    }
    for(i = 0; *(napis2+i)!= 0; i++)
        *(czyjest+(int)(*(napis2+i))) = 1;
    for(i = 0; *(napis1+i)!= 0; i++)
    {
        if (*(czyjest+(int)(*(napis1+i)))==0)
        {
            if(j<i)
                *(napis1+j)=*(napis1+i);
            j++;
        }
    }
    *(napis1+j)=0;
}

int zawart(wchar_t napis1, wchar_t *napis2)
{
    int i=0;
    for(i=0; *(napis2+i)!= 0; i++)
        if(*(napis2+i)== napis1)
            return 1;
    return 0;
}

void wytnijzn2(wchar_t *napis1, wchar_t *napis2)
{
    int i=0;
    int j=0;
    for(i=0; *(napis1+i)!=0; i++)
    {
        if(zawart(*(napis1+i), napis2)==0)
        {
            if(j<i)
                *(napis1+j)=*(napis1+i);
            j++;
        }
    }
    *(napis1+j) = 0;
}


int main()
{
    char *napis1 = malloc(20*sizeof(char));
    char *napis2 = malloc(20*sizeof(char));
    scanf("%s", napis1);
    scanf("%s", napis2);
    wytnijzn(napis1, napis2);
    printf("Po wycieciu : %s\n", napis1);
    wchar_t *napis3 = malloc(20*sizeof(wchar_t));
    wchar_t *napis4 = malloc(20*sizeof(wchar_t));
    wscanf(L"%s", napis3);
    wscanf(L"%s", napis4);
    wytnijzn2(napis3, napis4);
    wprintf(L"Po wycieciu : %s\n", napis3);
    return 0;
}
