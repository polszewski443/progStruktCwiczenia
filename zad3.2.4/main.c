#include <stdio.h>
#include <stdlib.h>

void zmiana(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int x=5, y=8;
    printf("Przed zmiana: x = %d y = %d\n", x, y);
    zmiana(&x, &y);
    printf("Po zmianie: x = %d y = %d", x, y);
    return 0;
}
