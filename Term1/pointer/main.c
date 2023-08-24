#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointer=iþaretleyici, ram de adres gösterir
    int sayi;
    printf("lutfen bir sayi giriniz..\n");
    scanf("%d", &sayi);

    int *sayininAdresi;//adres tutan deðiþken tanýmlamak için baþýna * iþareti konur.
    sayininAdresi = &sayi;//ades tutan deðiþkene adres & ile atanýr
    printf("-----------------------------------\n");
    printf("%d   %x\t  %p\n", *sayininAdresi, sayininAdresi, sayininAdresi);//adresi yazdýrmak için ya %d yapýp * kullanarak adresi yazdýrýrýz ya da deðiþkeni %x veya %p ile yazdýrýrýz.
    printf("%d %x\n", sayi, &sayi);
    // (%x &sayi) , (%x sayininAdresi) girildiðinde hepsi girilen sayinin adresini gösterir
    printf("-----------------------------------\n");
    printf("%x\n", &sayi);
    printf("%x\n", sayininAdresi);
    printf("%d\n", *sayininAdresi);//sayýnýn adresine git içindeki deðeri al demektir.
    printf("%d", sayininAdresi);
    printf("-----------------------------------");


    int sayii=12, *sayininAdresii;
    float kesirliSayi = 5.7, *kesirliSayininAdresi;
    double buyukKesirliSayi=7.5, *buyukKesirliSayiAdresi;
    char karakter = 'K', *karakterinAdrsi;
    printf("%d\n", sayi);
    printf("%f\n", kesirliSayi);
    printf("%lf\n", buyukKesirliSayi);
    printf("%c", karakter);

    sayininAdresi = &sayii;
    kesirliSayininAdresi = &kesirliSayi;
    buyukKesirliSayiAdresi = &buyukKesirliSayi;
    karakterinAdrsi = &karakter;

    printf("%f      %x\n",*kesirliSayininAdresi, kesirliSayininAdresi);
    printf("%d     %x\n",*sayininAdresi, sayininAdresii);
    printf("%lf     %x\n",*buyukKesirliSayiAdresi, buyukKesirliSayiAdresi);
    printf("%c      %x\n",*karakterinAdrsi, karakterinAdrsi);


    printf("%x\n", kesirliSayininAdresi + 1);
    printf("%x\n", buyukKesirliSayiAdresi + 1);//bir sonraki adrei bastýrma
    printf("%x\n", sayininAdresii+ 1);
    printf("%x\n", karakterinAdrsi+ 1); //alt*shift çoklu satýr sütun seçmeye yarar kopyalamak için

    int sayilar[] = {9, 11, 13, 15, 17};
    printf("%x\n", &sayilar);// sayilar dizisinin adresi= dizinin elemanlarýndan ilkinin yazýldýðý adresi verir
    printf("%x\n", &sayilar[0]);// ilk elemanýn adresi

    int *sayilarDizisininAdresi;
    sayilarDizisininAdresi = &sayilar;
    printf("%d\n", *sayilarDizisininAdresi);


    return 0;
}
