#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dzialanie, czyP = 0;
    float a, b;
    printf("Wybierz operacje matematyczna na dwoch liczbach wpisujac numer dzialania: \n 1 -> dodawanie\n 2 -> odejmowanie\n 3 -> mnozenie\n 4 -> dzielenie\n 5 -> potegowanie\n 6 -> modulo\n");
    scanf("%d", &dzialanie);
    printf("Wprowadz dwie liczby: ");
    if (scanf("%f%f", &a, &b) == 2)
    {
        printf ("Wprowadzono liczby: %f i %f\n", a, b);
        czyP = 1;
    }
    else
        printf ("Nie wprowadziles dwoch liczb!");


    if (czyP)
    switch (dzialanie)
    {
      case 1:
        printf("%f + %f = %f", a, b, a + b);
        break;
      case 2:
        printf("%f - %f = %f", a, b, a - b);
        break;
      case 3:
        printf("%f * %f = %f", a, b, a * b);
        break;
      case 4:
        if (b != 0)
         printf("%f / %f = %f", a, b, a / b);
        else
         printf("Nie mozna dzielic przez 0!");
        break;
      case 5:
        printf("%f ^ %f = %f", a, b, pow(a,b));
        break;
      case 6:
        printf("%i mod %i = %i", (int)a, (int)b, (int)a % (int)b);
        break;
      default:
        printf("Wybrano zla operacje!");
        break;
    }
    return 0;
}

