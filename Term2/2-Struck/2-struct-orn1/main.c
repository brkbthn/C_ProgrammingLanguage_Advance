#include <stdio.h>
#include <stdlib.h>
struct kitap{
char ad[50];
char yazarIsmi[50];
int basimYili;
float fiyat;
}kitap1 = {"dokuzuncu hariciye kogusu", "peyami safa", 1980, 23.50},
kitap2 = {"suc ve ceza", "dostoyevski", 1901, 35,75};
int main()
{
    printf("Kitap ismi:%s\nYazar ismi:%s\nbasim yili%d\nfiyati:%f\n", kitap1.ad, kitap1.yazarIsmi, kitap1.basimYili, kitap1.fiyat);
    printf("--------------------------------------------------------------\n");
    printf("Kitap ismi:%s\nYazar ismi:%s\nbasim yili%d\nfiyati:%f\n", kitap2.ad, kitap2.yazarIsmi, kitap2.basimYili, kitap2.fiyat);
    printf("--------------------------------------------------------------\n");

    float toplamFiyat = kitap1.fiyat + kitap2.fiyat;
    printf("iki kitabn toplam fiyati: % f", toplamFiyat);
    return 0;
}
