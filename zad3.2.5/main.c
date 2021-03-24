#include <stdio.h>
#include <stdlib.h>

int suma(int *x, int *y)
{
  int dodaj = *x + *y;
  return dodaj;
}
int main()
{

    const int x=5, y=8;
    printf("Sta³e: x = %d y = %d\n", x, y);
    suma(&x, &y);
    printf("Ich suma: %d", suma(&x, &y));
    return 0;
}
