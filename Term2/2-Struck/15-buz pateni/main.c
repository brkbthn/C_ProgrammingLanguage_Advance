#include <stdio.h>
#include <stdlib.h>
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
    /*Bir buz pateni karsilasmasinda, bir yarismacinin performansi 6 üzerinden puanlanarak 10 hakem tarfindan degerlendirilmektedir.
    Yarismacinin performans puani ise hakemlerin vermis oldugu en düsük ve en yuksek puan atilip, geri kalanlarin oortalamasi alinarak bulunmaktadir.
    Yazacaginiz programda yarismacinin adi, soyadi, performans puanini hesaplayip ekranda goruntuleiniz. Performans  hesaplamasini
    tek parametreli bir fonksiyonda yapiniz. Bu fonksiyon yarismaciya ait yapiyi parametre olarak almali ve performans puanini hesaplayarak geri dondurmelidir*/
    int i;
    struct yarismaciTip patenci;
    printf("yarismacininin adi\n");
    scanf("%s", patenci.isim);
    printf("yarismacininin soyadi\n");
    scanf("%s", patenci.soyisim);
    printf("hakem puanlari\n");
    for(i=0; i<10;i++){
        scanf("%f", &patenci.puan[i]);
    }
    patenci.performans = puanHesap(patenci);

    printf("performans puani = %f", patenci.performans);

    return 0;
}
