#include <stdio.h>
#include <stdlib.h>

//sayisal loto programi
//sayisal lotoda 49 sayidan farkli alti tanesi cekilir
int main()
{
    /* C de rastgele sayi üretme
    srand(time(NULL));
    int rastgeleSayi = rand();
    //int rastgeleSayi =  rand() % 49; (0 den 48 e kadar olan sayýlardan rasgele birini seçer)
    //int rastgeleSayi = 1+ rand() % 49; (1 den 49 a kadar olan sayýlardan rasgele birini seçer)
    printf("%d", rastgeleSayi);*/

    int rastgeleSayi = rand();
    srand(time(NULL));
    int loto[49]= {0}; //49 elemanin hepsi 0 degerini gosteriyor
    printf("sayilar uretilmeye baslaniyor\n");
    for(int i=0; i<6;i++){
        rastgeleSayi = 1+ rand() % 49;
        while(loto[rastgeleSayi -1]==1){
                rastgeleSayi = 1+rand() % 49;

    }
    loto[rastgeleSayi-1]=1;
    printf("%d\n", rastgeleSayi);
    }
    printf("sayisal loto cekilisi tamamlandi......\n");

    return 0;
}
