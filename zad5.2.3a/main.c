#include <stdio.h>
#include <stdlib.h>
int porownaj(const char *, const char *);
int main()
{
    const char n1 = "Napis", n2 = "Napis";
    printf("Wynik: %d", porownaj(&n1, &n2));
    return 0;
}
int porownaj(const char *n1, const char *n2)
{
    if (strcmp(n1, n2) == 0)
        return 1;
    return 0;
}
