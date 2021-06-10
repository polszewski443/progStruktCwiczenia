#include <stdio.h>
#include <stdlib.h>

double* funkcja(){

    return malloc(sizeof(double));

}


int main()
{

    printf("%I64d\n", sizeof(double));
    printf("%I64d\n", sizeof(double *));

    printf("%p\n", funkcja());
    return 0;
}
