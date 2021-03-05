#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int letters = 97;
    char tab[25];
    for (i = 0; i<26; i++)
    {
        tab[i] = (char)letters;
        letters++;
    }
    for (i = 0; i<26; i++)
        printf("%c ", tab[i]);
    return 0;
}
