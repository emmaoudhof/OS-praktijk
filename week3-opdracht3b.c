#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100

void main()
{
    char str[str_size];
    int let, cijfer, spec, i;
    let = cijfer = spec = i = 0;


       printf("\n\nEr wordt geteld hoeveel letters er in de string zitten, cijfers en speciale tekens :\n");
       printf("--------------------------------------------------------------------\n"); 	
       printf("Voer een zin in : ");
       fgets(str, sizeof str, stdin);	

     

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            let++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            cijfer++;
        }
        else
        {
            spec++;
        }

        i++;
    }
    printf("--------------------------------------------------------------------\n"); 
    printf("Aantal letters : %d\n", let);
    printf("Aantal cijfers : %d\n", cijfer);
    printf("Aantal speciale tekens (bijv spaties, punten) : %d\n\n", spec);
}
