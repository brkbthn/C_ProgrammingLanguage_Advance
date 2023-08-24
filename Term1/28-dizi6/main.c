#include <stdio.h>
#include <stdlib.h>
//girilen sayýninin toplamini ve ortalamasini bulan program
int main()
{   int girilenSayiAdedi;
    float sayilar[99], toplam=0, ortalama;
    printf("lutfen kac tane sayinin ortalamasini hesaplamak istediginizi giriniz.\n");
    scanf("%d", &girilenSayiAdedi);
    while(girilenSayiAdedi > 100 || girilenSayiAdedi<=0){
        printf("lutfen 1-100 arasinda sayi giriniz\n");
        printf("lutfen kac tane sayinin ortalamasini hesaplamak istediginizi yeniden giriniz..\n");
        scanf("%f", &girilenSayiAdedi);
    }
    for(int i = 0; i<girilenSayiAdedi; i++){
        printf("lutfen %d. sayiyi giriniz... \n", i+1);
        scanf("%f", &sayilar[i]);
        toplam += sayilar[i];
    }
    ortalama = toplam/girilenSayiAdedi;
    printf("ortalama = %f\ntoplam=%f\n", ortalama, toplam);
    return 0;
}
