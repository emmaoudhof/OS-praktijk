#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nummer;

    do {

    printf("Welkom, Er zijn 3 opties.\n");
    printf("Kies 1 2 of 3.\n");
    printf("1. Stop\n");
    printf("2. Run de eerste C opdracht\n");
    printf("3. Stop\n");
    printf("Kies een nummer:");
    scanf("%d", &nummer);

        if (nummer == 1)
        {
            printf("%d is gekozen als nummer\n", nummer);
            break;

        } 

        if (nummer == 2)
        {
            printf("%d is gekozen als nummer\n", nummer);
            system("week2-opdracht2.exe");
            break;

        }

        if (nummer == 3)
        {
            printf("%d is gekozen als nummer\n", nummer);
            break;

        }

        else {
        printf("%d Helaas dit werkt niet, het programma zal nu sluiten.\n", nummer);
        }

    }while(nummer !=4);
} 