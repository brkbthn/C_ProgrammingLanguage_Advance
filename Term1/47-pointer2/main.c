#include <stdio.h>
#include <stdlib.h>

int main()
{   /*char takimlar[2][20] = {"fenerbahce", "galatasary"};
    printf("%s", takimlar[1]);*/
    char *takimlar[] = {"fenerbahce", "galatasary"}; //pointer a array a eklenen ifaderlerin ramda tutulmaya baslandiklari ilk gozun adresi atanir.
    printf("%s\n", takimlar[1]);
    printf("%s\n", *takimlar);
    for(int i=0; i<2; i++)
        printf("%s\n", *(takimlar+i));
    for(int i=0;takimlar[i] !='/0' ; i++)
        printf("%s\n", *(takimlar+i));



    char ulkeler[5][19];
    for(int i=0; i<5;i++){
        printf("%d. ulkeyi giriniz\n", i+1);
        scanf("%s",ulkeler[i]);

        }
        for(int i=0; i<5;i++)
            printf("%s\n", ulkeler[i]);


    return 0;
}
