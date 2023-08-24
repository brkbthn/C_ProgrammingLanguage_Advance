#include <stdio.h>
#include <stdlib.h>
#include<string.h>//strcoy için

    struct ogrenci{
    char ad[30];
    char soyadi[30];
    char okul[30];
    char bolum[30];
    int okulNumarasi;
    int sinif;
    }ogr1, ogr2;
int main()
{   strcpy(ogr1.ad,"Batuhan");
    strcpy(ogr1.soyadi, "Devran");
    strcpy(ogr1.okul, "YILDIZ TEKNIK UNIVERSITESI");
    strcpy(ogr1.bolum, "Matematik Muhendisligi");//str ogelerin verilebilmesi için strcpy kullanmak zorunluyken
    ogr1.okulNumarasi=21052610;// int degerler direkt verilebilir
    ogr1.sinif=2;

    printf("ogrencinin adi: %s\nogrencinin soyadi: %s\nogrencinin okulu:%s\nogrencinin bolumu:%s", ogr1.ad, ogr1.soyadi,ogr1.okul, ogr1.bolum);
    printf("ogrencinin numarasi:%d\nogrencinin sinifi:%d\n", ogr1.okulNumarasi, ogr1.sinif);

    strcpy(ogr2.ad,"Berk");
    strcpy(ogr2.soyadi, "Devran");
    strcpy(ogr2.okul, "ANAMUR TEKNIK UNIVERSITESI");
    strcpy(ogr2.bolum, "KALDIRIM Muhendisligi");//str ogelerin verilebilmesi için strcpy kullanmak zorunluyken
    ogr2.okulNumarasi=19021999;// int degerler direkt verilebilir
    ogr2.sinif=9;
     printf("ogrencinin adi: %s\nogrencinin soyadi: %s\nogrencinin okulu:%s\nogrencinin bolumu:%s", ogr2.ad, ogr2.soyadi,ogr2.okul, ogr2.bolum);
    printf("ogrencinin numarasi:%d\nogrencinin sinifi:%d", ogr2.okulNumarasi, ogr2.sinif);

    return 0;
}
