#include <stdio.h>
#include <stdlib.h>

int min(int x, int y);

int main()
{
   int x, y;
   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &x, &y);
   printf( "Najmniejsza z podanych liczb to: %d\n", min(x, y));
   return 0;
}

int min(int x, int y)
{
   if (x == y)
      return 0;
   else if (x < y)
      return x;
   else
      return y;
}
