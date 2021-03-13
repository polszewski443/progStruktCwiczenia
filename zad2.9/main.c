#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;
    int i, j;
    printf("Podaj znak, ktory ma byc wyswietlony,\n a nastepnie podaj numery kolumn,\n od ktorej do ktorej ma byc on wyswietlony.\n");
    scanf("%c %d %d", &ch, &i, &j);
    rzad_zn(ch, i, j);
    return 0;
}
void rzad_zn(char ch, int i, int j)
{
    for (int k = 0; k<=j; k++)
       if (k<i)
        printf("%c", ' ');
       else
        printf("%c", ch);
}
