#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a, b, c, delta, pier, x0, x1, x2;
  int czyP = 0;

  printf ("Wprowadz wspolczynniki c.: ");

  if (scanf("%f%f%f", &a, &b, &c) == 3)
  {
    printf ("Wprowadziles trzy wspolczynniki rownania kwadratowego: %f %f oraz %f\n", a, b, c);
    czyP = 1;
  }
  else
    printf ("Nie wprowadziles trzech wspolczynnikow rownania kwadratowego!\n");

  if (czyP)
  {
    delta = b * b - 4 * a * c;
    printf("Delta = %f\n", delta);
    pier = sqrt(delta);
    if (delta < 0)
         printf("Ujemna delta. Brak rozwiazan w zbiorze liczb rzeczywistych");
    else if (delta == 0)
       {
         printf("Pierwiastek z delty = %f\n", pier);
         x0 = - b / (2 * a);
         printf("\nx = %f", x0);
       }
    else if (delta > 0)
       {
         printf("Pierwiastek z delty = %f\n", pier);
         x1 = (- b - pier) / (2 * a);
         x2 = (- b + pier) / (2 * a);
         printf("x1 = %f\nx2 = %f", x1, x2);
       }
  }
return 0;
}
