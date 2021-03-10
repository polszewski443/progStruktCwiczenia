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


    printf("Podaj liczby calkowite od 1 do 30 (0 konczy dzialanie programu):\n");
    scanf("%d", &in);
    while (in != 0)
    {
      switch (in)
      {
        case 1:
            sumaNPar += in;
            ileNPar++;
            break;
        case 2:
            sumaPar += in;
            ilePar++;
            break;
        case 3:
            sumaNPar += in;
            ileNPar++;
            break;
        case 4:
            sumaPar += in;
            ilePar++;
            break;
        case 5:
            sumaNPar += in;
            ileNPar++;
            break;
        case 6:
            sumaPar += in;
            ilePar++;
            break;
        case 7:
            sumaNPar += in;
            ileNPar++;
            break;
        case 8:
            sumaPar += in;
            ilePar++;
            break;
        case 9:
            sumaNPar += in;
            ileNPar++;
            break;
        case 10:
            sumaPar += in;
            ilePar++;
            break;
        case 11:
            sumaNPar += in;
            ileNPar++;
            break;
        case 12:
            sumaPar += in;
            ilePar++;
            break;
        case 13:
            sumaNPar += in;
            ileNPar++;
            break;
        case 14:
            sumaPar += in;
            ilePar++;
            break;
        case 15:
            sumaNPar += in;
            ileNPar++;
            break;
        case 16:
            sumaPar += in;
            ilePar++;
            break;
        case 17:
            sumaNPar += in;
            ileNPar++;
            break;
        case 18:
            sumaPar += in;
            ilePar++;
            break;
        case 19:
            sumaNPar += in;
            ileNPar++;
            break;
        case 20:
            sumaPar += in;
            ilePar++;
            break;
        case 21:
            sumaNPar += in;
            ileNPar++;
            break;
        case 22:
            sumaPar += in;
            ilePar++;
            break;
        case 23:
            sumaNPar += in;
            ileNPar++;
            break;
        case 24:
            sumaPar += in;
            ilePar++;
            break;
        case 25:
            sumaNPar += in;
            ileNPar++;
            break;
        case 26:
            sumaPar += in;
            ilePar++;
            break;
        case 27:
            sumaNPar += in;
            ileNPar++;
            break;
        case 28:
            sumaPar += in;
            ilePar++;
            break;
        case 29:
            sumaNPar += in;
            ileNPar++;
            break;
        case 30:
            sumaPar += in;
            ilePar++;
            break;
      }
         scanf("%d", &in);
    }
    sredniaNPar = (sumaNPar/ileNPar);
    sredniaPar = (sumaPar/ilePar);
    printf("Ilosc wpisanych liczb nieparzystych: %d\nSrednia wartosc liczb nieparzystych: %f\nIlosc wpisanych liczb parzystych: %d\nSrednia wartosc liczb parzystych: %f", ileNPar, sredniaNPar, ilePar, sredniaPar);
    return 0;
}
