#include <stdio.h>
#include <stdlib.h>
void przepisz(const char *, char *);
int main()
{
    const char n1[30] = "NapisŸuódœŸ¹œ";
    char n2[30];
    przepisz(&n1, &n2);
    for (int i = 0; i<(sizeof(char)/sizeof(n2)); i++)
        printf("%c ", n2[i]);
    return 0;
}
void przepisz(const char *n1, char *n2)
{
   strcpy(*n2,*n1);
}
//kod niestety nie dziala, poprawie go gdy znajde rozwiazanie problemu
