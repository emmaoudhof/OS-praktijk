#include <stdio.h>
#include <string.h>

struct opleiding{
        char naam[100];
        int instroomjaar;
    };

struct persoon{
    char naam[100];
    int leeftijd;
    struct opleiding opl;
} p[20];

void ask(char persoonnaampointer[100], int* persoonjaarpointer, char opleidingnaampointer[100], int* opleidingjaarpointer){
    printf("Welkom! Vul je gegevens in om je registratie compleet te maken.  \n");
    printf("--------------------------------------------------------------------\n"); 
    printf("Wat is je naam? ");
    scanf("%s", persoonnaampointer);
    printf("Hoe oud ben je? ");
    scanf("%i", persoonjaarpointer);
    printf("Welke opleiding doe je? ");
    scanf("%s", opleidingnaampointer);
    printf("In welk jaar ben je begonnen met je opleiding? ");
    scanf("%i", opleidingjaarpointer);
}

int main(){
    char persoonnaam[100];
    int persoonjaar;
    char opleidingnaam[100];
    int opleidingjaar;
    int current = 0;
    int nogmaals = 1;
    ask(&persoonnaam[0], &persoonjaar, &opleidingnaam[0], &opleidingjaar);
    strcpy(p[current].naam, persoonnaam);
    p[current].leeftijd = persoonjaar;
    p[current].opl.instroomjaar = opleidingjaar;
    strcpy(p[current].opl.naam, opleidingnaam);
    printf("--------------------------------------------------------------------\n"); 
    printf("Dit zijn jouw gegevens:\n");	
    printf("Naam: %s \n", p[current].naam);
    printf("Jaar: %i \n", p[current].leeftijd);
    printf("Opleiding: %s \n", p[current].opl.naam);
    printf("Jaar: %i \n", p[current].opl.instroomjaar);
}