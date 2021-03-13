#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj liczbe calkowita nieujemna n: ");
   scanf("%d", &n);
   if (n<0)
   {
      printf("Podana zla liczbe! Podaj jeszcze raz! ");
      scanf("%d", &n);
   }
   printf( "Wartosc liczby 2 do potegi n to: %d", dwadon(n));
   return 0;
}

int dwadon(int n)
{
   int wynik = 2;
   for (int i = 0; i<n-1; i++)
      wynik *= 2;
   if (n == 0)
      wynik = 1;
   return wynik;
}
