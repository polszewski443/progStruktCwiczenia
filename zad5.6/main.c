#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;
    printf("Podaj dwie liczby calkowite: granice gorna, nastepnie dolna: ");
    scanf("%d %d", &a, &b);
    if (a>b)
    {
      int temp = a;
      a = b;
      b = temp;
      printf("Wartosc granicy gornej nie moze byc wieksza od dolnej, wiec liczby zostaly zamienione!\n");
    }
    for(i = a; i <= b; i++)
    {
        printf("-------------\n");
        printf("| %d | %d | %d |\n", i, i * i, i * i * i);
    }
    printf("-------------\n");
    return 0;
}
