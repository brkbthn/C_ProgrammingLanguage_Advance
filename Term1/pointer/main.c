#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointer=i�aretleyici, ram de adres g�sterir
    int sayi;
    printf("lutfen bir sayi giriniz..\n");
    scanf("%d", &sayi);

    int *sayininAdresi;//adres tutan de�i�ken tan�mlamak i�in ba��na * i�areti konur.
    sayininAdresi = &sayi;//ades tutan de�i�kene adres & ile atan�r
    printf("-----------------------------------\n");
    printf("%d   %x\t  %p\n", *sayininAdresi, sayininAdresi, sayininAdresi);//adresi yazd�rmak i�in ya %d yap�p * kullanarak adresi yazd�r�r�z ya da de�i�keni %x veya %p ile yazd�r�r�z.
    printf("%d %x\n", sayi, &sayi);
    // (%x &sayi) , (%x sayininAdresi) girildi�inde hepsi girilen sayinin adresini g�sterir
    printf("-----------------------------------\n");
    printf("%x\n", &sayi);
    printf("%x\n", sayininAdresi);
    printf("%d\n", *sayininAdresi);//say�n�n adresine git i�indeki de�eri al demektir.
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
    printf("%x\n", buyukKesirliSayiAdresi + 1);//bir sonraki adrei bast�rma
    printf("%x\n", sayininAdresii+ 1);
    printf("%x\n", karakterinAdrsi+ 1); //alt*shift �oklu sat�r s�tun se�meye yarar kopyalamak i�in

    int sayilar[] = {9, 11, 13, 15, 17};
    printf("%x\n", &sayilar);// sayilar dizisinin adresi= dizinin elemanlar�ndan ilkinin yaz�ld��� adresi verir
    printf("%x\n", &sayilar[0]);// ilk eleman�n adresi

    int *sayilarDizisininAdresi;
    sayilarDizisininAdresi = &sayilar;
    printf("%d\n", *sayilarDizisininAdresi);


    return 0;
}
