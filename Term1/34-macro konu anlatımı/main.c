#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define enBuyukSayi(sayi1, sayi2) (sayi1>sayi2) ?  sayi1 : sayi2  //true ise sayi  false ise sayi2 yazdýrýlýr--- yazdýrýlacak taraflar ayný veri tipinde olmalýdýr
#define saatiSoyle(karakter) (karakter=='E' || karakter=='e') ? __TIME__ : "kullanici saati ogrenmek istemiyor"
#define topla(sayi1,sayi2)  (sayi1+sayi2)
#define sayiMiKarakterMi(karakter) (karakter=='k') ? karakter : '5'//her iki tarafý da ayný veri tipiyle yazdýrabilirizi bu nedenle int yazamadýðýmýz için string haline dönüstürdük.
int main()
{
    printf("%f\n", PI);
    printf("%d\n", enBuyukSayi(8,9));
    printf("saati ogrenmek ister misiniz?\n");


    char kullaniciKarakter;
    scanf("%c", &kullaniciKarakter);
    if(saatiSoyle(kullaniciKarakter))
        printf("%s\n", saatiSoyle(kullaniciKarakter));
    else
        printf("%s\n", saatiSoyle(kullaniciKarakter));
    printf("%d\n",topla(3,5));

    char karakter = "a";
    if(sayiMiKarakterMi(karakter))
        printf("%c", sayiMiKarakterMi(karakter));
    else
        printf("%c", sayiMiKarakterMi(karakter));






    return 0;

}
