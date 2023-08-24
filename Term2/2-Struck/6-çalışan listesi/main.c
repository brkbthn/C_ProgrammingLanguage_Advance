#include <stdio.h>
#include <stdlib.h>
struct calisanlar{
char ad[50];
char soyadi[50];
char iseBaslangicTarihi[20];
float maas;
int primSayisi;
char cinsiyet;
};

int main()
{
    struct calisanlar calisan1;
    printf("Lutfen calisanin bilgilerini giriniz\n");
    scanf("%s %s %s %f %d %c", &calisan1.ad, &calisan1.soyadi, &calisan1.iseBaslangicTarihi, &calisan1.maas, &calisan1.primSayisi, &calisan1.cinsiyet);
    /*stringlerde & koyulmayabilir fakat integer, float ve karakterler deðerlerinde koyulmak zorundadýr*/
    printf("calisan bilgileri \n");
    printf("%s %s %s %f %d %c", calisan1.ad, calisan1.soyadi, calisan1.iseBaslangicTarihi, calisan1.maas, calisan1.primSayisi, calisan1.cinsiyet);


    struct calisanlar *calisan1Adres = &calisan1;
    printf("calisan bilgileri:\n");
    printf("%s %s %s %f %d %c", *(calisan1Adres).ad, *(calisan1Adres).soyadi, *(calisan1Adres).iseBaslangicTarihi, *(calisan1Adres).maas, *(calisan1Adres).primSayisi, *(calisan1.dres).cinsiyet);







    return 0;
}
