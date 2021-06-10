#define ilerekordow 5

enum info {polaczenienawiazane, poloczenienienawiazane, polaczeniewtrakcienawiazywania};

struct komputer{
    int stanpolaczenia;
    char ipkomputera[30];
    char nazwawlasciciela[30];
};

void pokazwszysko(struct komputer tab[ilerekordow])
{
    printf("stanpolaczenia\ipkomputera\tnazwawlasciela\n");
    for(int i = 0; i < ilerekordow; i++)
    {
            printf("%d\t%s\t%s\n", tab[i].stanpolaczenia, tab[i].ipkomputera, tab[i].nazwawlasciciela);

    }
    printf("\n");
}
