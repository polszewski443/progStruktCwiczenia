#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char* napis1, char** napis2){

    char* temp[]= { "Andrzej nowak", "Jan Jagie³³o", "Edward Kwiatkowski" };
    strcpy(temp[0], napis1);
    strcpy(temp[1], napis1);
    strcpy(temp[2], napis1);
    napis2=*temp;
}
//do dokonczenia

int main()
{

    char* napis1="Piotr nowak";
    char** napis2="Jan Kowalski";
    kopiuj(napis1, napis2);
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    return 0;
}
