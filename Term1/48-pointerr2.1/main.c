#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ulkeler[5][19];
    for(int i=0; i<5;i++){
        printf("%d. ulkeyi giriniz\n", i+1);
        scanf("%s",ulkeler[i]);

        }
        for(int i=0; i<5;i++)
            printf("%s\n", ulkeler[i]);
    printf("---------------------------------------------------\n");

    char *ulkelerinAdresleri[5];
     for(int i=0; i<5;i++)
        ulkelerinAdresleri[i] = &ulkeler[i];

    for(int i=0;i<5;i++)
        printf("%s\t", *(ulkelerinAdresleri+i));



    return 0;
}
