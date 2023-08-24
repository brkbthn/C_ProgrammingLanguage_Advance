#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[] = {5,10};
    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);
    return 0;

    int sayilar[] = {3, 6, 9, 12, 15}; //20 byte yer kaplar
    for(int i=0; i<5;i++) printf("%d\n", sayilar[i]);

    float sayilar[]= {1.5, 2.4, 4.3, 7.8, 8.9};

    float sayilar[7]; // istenilirse sayilat[7]={} şeklinde 7 elemanlı içine 0 yerleştirilmiş array tanımlanıp daha sonra içerisi doldurulabilir.
    for(int i=0;i<7;i++){
        printf("%d. elemani giriniz", i+1);
        scanf("%f", &sayilar[i]);
        printf("\t\t");

    }
    for(int i=0; i<7;i++){// for döngüsü içinde tanımlanan int değer geçicidir o nedenle her seferinde yeniden tanımlanması gerekir. istenilirse ana blokta da tanımlanabilir.
        printf("%f", sayilar[i]);
    }




}
