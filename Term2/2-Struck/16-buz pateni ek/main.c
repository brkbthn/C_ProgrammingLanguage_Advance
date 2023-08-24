#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct yarismaciTip{
    char isim[10];
    char soyisim[10];
    float puan[10], performans;

};
float puanHesap(struct yarismaciTip pat){
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;

    for(i=0; i<10; i++){
            if(pat.puan[i]>max)
                max=pat.puan[i];
            if(pat.puan[i]<min)
                min=pat.puan[i];
            sonuc += pat.puan[i];
    }
    sonuc = (sonuc - max - min)/8;
    return sonuc;
}

int main()
{

    /* Bu programda ilk once yarismaya katilan yarismaci sayisini n, yarismacilarin adi, soyadi ve hakemlerin degerlendirme puanlarini
    tanimlayacaginiz bir yapi dizisine giriniz. Daha sonra her yarismacinin performans puanini yukarida yazilmis fonksiyonu kullanarak hesaplayiniz.
    Son olarak yapi dizisini taratarak birinci gelen yarismaciyi bulunuz.*/

    struct yarismaciTip yarismaci[100];
    int n, birinci;
    int i,j;
    char satir;
    float max = 0.0;
    printf("lutfen yarismaci sayisini giriniz\n");
    scanf("%d", &n);
    scanf("%c", &satir);

    for(j=0; j<n;j++){
        printf("lutfen yarismacinin ismini giriniz\n");
        gets(yarismaci[j].isim);

        printf("lutfen yarismacinin soyismini giriniz\n");
        gets(yarismaci[j].soyisim);

        printf("hakem puanini giriniz\n");
        for(i=0; i<10; i++){
            scanf("%f", &yarismaci[j].puan[i]);
        }
        scanf("%c", &satir);
        yarismaci[j].performans = puanHesap(yarismaci[j]);
        printf("puan = %f", yarismaci[j].performans);

        if(yarismaci[j].performans>max){
            max = yarismaci[j].performans;
            birinci = j;

        }
    }

    printf("yarismanin birincisi:\n");
    printf("isim=%s soyisim=%s puan=%f", yarismaci[birinci].isim, yarismaci[birinci].soyisim, max);










    return 0;
}
