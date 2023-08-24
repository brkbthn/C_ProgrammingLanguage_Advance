#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[5][50];
    char *ilk;
    char *ikinci;
    int i;
    char gecici;
    printf("lutfen 5 adet kelime giriniz..\n");
    for(i=0;i<5;i++){
            printf("%d.kelime\n", i);
            scanf("%s", dizi[i]);
    }
    for(i=0; i<5; i++){
        ilk=ikinci=dizi+i;

            while(*ikinci){//dizi bitinceye kadar demektir
                        ikinci++; //su an \0 da
            }
            ikinci--;
            while(ilk<ikinci){
                    gecici=*ilk;
                    *ilk=*ikinci;
                    *ikinci=gecici;
                    ilk++;
                    ikinci--;

            }
    }
            printf("dizinin son hali\n");
            for(i=0;i<5;i++){
            printf("%s", dizi[i]);
            printf("\n");

            }

    return 0;
}
