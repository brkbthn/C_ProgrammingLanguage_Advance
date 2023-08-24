#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int yas ;

    printf("lütfen yasýnýzý giriniz!\a\n");

    scanf("%d", &yas);

    if (yas >= 18)  {
            printf("Reþitsiniz...\n");
    }
    else  {
            printf("reþit deðilsiniz\n");
    }

    /*80-100 çok iyi
    60-80 iyi
    40-60 orta
    20-40 kötü
    0-20 çok kötü*/
    int puan;
    printf("lütfen sýnvdan aldýðýnýz puaný giriniz\a\n");
    scanf("%d", &puan);
    if (puan >= 80 && puan<=100) {
            printf("çok iyi\n");
    }
    else if (puan >= 60 && puan < 80) {
            printf("iyi\n");

    }
    else if (puan >= 40 && puan < 60) {
            printf("orta\n");

    }
    else if (puan >= 20 && puan < 40) {
            printf("kötü\n");
    }
    else if (puan >100){
            printf("lütfen puanýnýzý adam gibi giriniz");
    }
    else  {
            printf("çok kötü\n");
    }

    /* ve iþareti = &&
    veya iþareti = ||
    */
    char cinsiyet;
    float boy;


    printf("lütfen cinsiyetinizi giriniz E/e, K/k\a\n");
    scanf("%c", &cinsiyet);

    printf("lütfen boyunuzu cm cinsinde giriniz\a\n");
    scanf("%d", &boy);


    if( (cinsiyet=='E' || cinsiyet=='e') && boy >160) {
            printf("Tebrikler boy mülakatýný geçtiniz.\n");
    }

    else if(( cinsiyet =='K' || cinsiyet=='k') && boy > 150){
            printf("tebrikler boy mülakatýný geçtiniz\n");
    }

    else{
            printf("Malesef elendiniz\n");
    }



    //Toptancı Örneği
    /*0-100 adet --> adet fiyatı = 3tl
    100-200 adet  --> adet fiyatı = 2,5tl
    200-300 adet --> adet fiyatı 2 tl
    300-400 adet --> adet fiyatı = 1,25 tl
    400 den fazlaysa adetfiatı 0.75 tl*/

    int adet;
    float adetFiyati;

    printf("kaç adet ürün alacaksınız?\n");
    scanf("%d", &adet);

    if (adet >= 400){
            adetFiyati = 0.75;
    }
    else if (adet >=300 && adet <400){
            adetFiyati = 1,25;
    }
    else if (adet >=200 && adet < 300){
            adetFiyati = 2;
    }
     else if (adet >=100 && adet <200){
            adetFiyati = 2.5;
    }
      else if (adet >0 && adet <100){
            adetFiyati = 3;
    }
      else {
            printf("lütfen birden büyük bir sayı giriniz.....");
    }
    float toplamTutar = adet*adetFiyati;
    int toplamTutarYuvarlama = adet*adetFiyati;
    printf("toplam ödenecek tutar: %f %d ", toplamTutar, toplamTutarYuvarlama);







    return 0;
}


















