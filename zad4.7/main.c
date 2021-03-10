#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int zmiana = 0;
    while((c = getchar()) != '#'){
        if(c == '.')
        {
                c = '!';
                zmiana++;
        }
        else if(c == '!')
        {
            c = '!!';
            zmiana++;
        }

    }
    printf("Liczba zmian jaka wykonal program: %d", zmiana);
    return 0;
}
