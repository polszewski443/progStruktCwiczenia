#include <stdio.h>
#include <stdlib.h>

struct student {

    char imie[20];
    char nazwisko[20];
    char adres[40];
    char pesel[11];
    char kierunek[20];
    char numer_legitymacji[20];

};


void wczytanie(struct student *skan){

    printf("Podaj imie : ");
    scanf("%s", skan->imie);
    printf("Podaj nazwisko : ");
    scanf("%s", skan->nazwisko);
    printf("Podaj adres : ");
    scanf("%s", skan->adres);
    printf("Podaj pesel : ");
    scanf("%s", skan->pesel);
    printf("Podaj kierunek studiow : ");
    scanf("%s", skan->kierunek);
    printf("Podaj numer swojej legitymacji studenckiej : ");
    scanf("%s", skan->numer_legitymacji);

}

int main()
{
    struct student S1[120];
    wczytanie(S1);
    printf("\nPodane dane osobowe : \n");
    printf("Imie : %s\n\n", S1->imie);
    printf("Nazwisko : %s\n\n", S1->nazwisko);
    printf("Adres : %s\n\n", S1->adres);
    printf("Pesel : %s\n\n", S1->pesel);
    printf("Kierunek : %s\n\n", S1->kierunek);
    printf("Numer Legitymacji : %s\n\n", S1->numer_legitymacji);
    return 0;
}
