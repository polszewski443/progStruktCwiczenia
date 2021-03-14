#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, m;
   printf("Podaj liczby calkowite nieujemna n: ");
   scanf("%d %d", &n, &m);
   while (n<0 || m<0)
   {
      printf("Podano liczbe ujemna! Podaj jeszcze raz obie liczby! ");
      scanf("%d %d", &n, &m);
   }
   while (n == 0 && m == 0)
   {
      printf("Obie liczby sa rowne 0! Podaj jeszcze raz obie liczby! ");
      scanf("%d %d", &n, &m);
   }
   printf( "Wartosc liczby n do potegi m to: %d", ndom(n, m));
   return 0;
}
int ndom(int n, int m)
{
   int moc = 1;
   for (int i = 0; i<m; i++)
     moc *= n;
   if (m == 0)
     return 1;
   return moc;
}
