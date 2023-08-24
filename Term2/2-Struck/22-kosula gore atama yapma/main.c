#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
    char ad[20];
    char soyad[10];
    int no;
    int sinif;
}ogrencim;
int main()
{
    /* verilen yapiyi kullanarak ogrenci numarasi 2019 oldugunda asagida
    verilen bilgilerin tutulmasini ve ekran girilmesini saglayan c programini yaziniz*/

    struct ogrenci ogr;
    printf("lutfen ogrenci numarasini giriniz\n");
    scanf("%d", &ogr.no);

    if(ogr.no==2019){
        ogr.no = 2019;
        strcpy(ogr.ad, "berk btuhan");
        strcpy(ogr.soyad, "devran");
        ogr.sinif=2;
        printf("\n No:%d", ogr.no);
        printf("\n Adi; %s", ogr.ad);
        printf("\n soyad: %s", ogr.soyad);
        printf("\n sinif=%d", ogr.sinif);
    }








    return 0;
}
