#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  int czyP = 0;

  printf ("Wprowadz 3 liczby c.: ");

  if (scanf("%d%d%d", &a, &b, &c) == 3)
  {
    printf ("Wprowadziles %d, %d oraz %d\n", a, b, c);
    czyP = 1;
  }
  else
    printf ("Nie wprowadziles 3 liczb c.!\n");

  if (czyP == 1)
  {
    if ((a >= b) && (a >= c))
    printf("Najwieksza z wartosci tych liczb to: %d", a);
    else if (( b>=a ) && (b >=c ))
    printf("Najwieksza z wartosci tych liczb to: %d", b);
    else if ((c >= a) && (c >=b ))
    printf("Najwieksza z wartosci tych liczb to: %d", c);
  }
  return(0);
}
