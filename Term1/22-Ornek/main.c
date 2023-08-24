#include <stdio.h>
#include <stdlib.h>

int main()
{   int biletSayi = 100;
    char biletAl;
    for(;biletSayi>0;){
        printf("bilet almak ister misiniz [E/e]?\n");
        scanf("%c",&biletAl);
        if(biletAl == 'e' || biletAl =='E'){
            int alinanBiletSayisi;
            printf("Kac tane bilet istiyorsunuz?");
            scanf("%d",&alinanBiletSayisi);
            biletSayi-= alinanBiletSayisi;
            printf("Alinabilecek toplam bilet sayisi:%d\n", biletSayi);
        }
        else{
            printf("program kapatiliyor\n");
            break;
        }
    }

    return 0;
}
