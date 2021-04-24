#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void przepisz(const char *, char *);
int main()
{
    const char n1[] = "vghslvnasfplf";
    char n2[0];
    przepisz(n1, n2);
    printf("%s ", n2);
    return 0;
}
void przepisz(const char *n1, char *n2)
{
   strcpy(n2,n1);
}
