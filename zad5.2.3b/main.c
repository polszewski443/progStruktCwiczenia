#include <stdio.h>
#include <stdlib.h>
int porownaj(const char *, const wchar_t *);
int main()
{
    const char n1 = "Napis�u�d����";
    const wchar_t n2 = "Napis�u�d����";
    printf("Wynik: %d", porownaj(&n1, &n2));
    return 0;
}
int porownaj(const char *n1, const wchar_t *n2)
{
    if (strcmp(n1, n2) == 0)
        return 1;
    return 0;
}
