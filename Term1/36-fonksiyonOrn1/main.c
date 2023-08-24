#include <stdio.h>
#include <stdlib.h>
#define yazdir printf
#define EBS enBuyukSayi
//Elemanlari dogal sayi olan bir dizideki en buyuk sayiyi bulan fonksiyon
void enBuyukSayi(int dizi[], int boyut){
        int enBuyukDeger=0;
        for(int i=0; i<boyut;i++){
            if(dizi[i]>enBuyukDeger){
                enBuyukDeger = dizi[i];
            }
        }
        printf("En Buyuk Deger: %d\n", enBuyukDeger);
}
int main()
{
    int dizi[]={2, 4, 5, 6, 7};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    printf("dizinin boyutu: %d\n", boyut);
    enBuyukSayi(dizi,5);
    enBuyukSayi(dizi,boyut);
    //enBuyukSayi({2, 4, 5, 6, 7},boyut); diziyi bu sekilde fonksiyona gonderemezsin


    yazdir("bu sekilde fonksiyonlarin ismini degistirebilirsin\n");
    EBS(dizi, boyut);

    return 0;
}
