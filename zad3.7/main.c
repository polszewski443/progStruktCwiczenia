#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in;
    int ilePar = 0;
    int ileNPar = 0;
    float sumaPar = 0;
    float sumaNPar = 0;
    float sredniaNPar;
    float sredniaPar;


    printf("Podaj liczby calkowite (0 konczy dzialanie programu):\n");
    scanf("%d", &in);
    while (in != 0)
    {
        if (in%2)
        {
            ileNPar++;
            sumaNPar+=in;
        }
        else
        {
            ilePar++;
            sumaPar+=in;
        }
         scanf("%d", &in);
    }
    sredniaNPar = (sumaNPar/ileNPar);
    sredniaPar = (sumaPar/ilePar);
    printf("Ilosc wpisanych liczb nieparzystych: %d\nSrednia wartosc liczb nieparzystych: %f\nIlosc wpisanych liczb parzystych: %d\nSrednia wartosc liczb parzystych: %f", ileNPar, sredniaNPar, ilePar, sredniaPar);
    return 0;
}
