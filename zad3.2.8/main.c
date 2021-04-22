#include <stdio.h>
#include <stdlib.h>

void zamien(int *, int *);

int main()
{
    int a = 4, b = 3;
    int *wsk_b = &b;
    printf("Wartosci przed zamiana:\n a=%d b=%d\n", a, b);
    zamien(&a, wsk_b);
    printf("Wartosci po zamianie:\n a=%d b=%d\n", a, b);
    return 0;
}
void zamien(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
