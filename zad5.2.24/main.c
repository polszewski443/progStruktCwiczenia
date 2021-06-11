#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char* napis, char* tab[])
{
    strcpy(tab, napis);
}

void kopiuj2(wchar_t* napis, wchar_t* tab[])
{
    wcscpy(tab, napis);
}

int main()
{
    char* napis = "Piotr nowak";
    char* tab[20]={"Jan kowalski"};
    kopiuj(napis, tab);
    printf("%s\n", tab);
    wchar_t* napis2 = L"Piotr nowak";
    wchar_t* tab2[20]={L"Jan Kowalski"};
    kopiuj2(napis2, tab2);
    wprintf(L"%s\n", tab2);
    return 0;
}
