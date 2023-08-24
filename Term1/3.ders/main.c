#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{      setlocale(LC_ALL,"Turkish");

       char basHarf;
       printf("lütfen bir karakter giriniz\n");
       scanf("%c", &basHarf);
       printf("%", basHarf);

         char isim[] = "Batuhan ACADEMY\n";
       printf("%s", isim);

       int sayi1;
       sayi1 = 5;
       sayi1++;
       printf("%d\n", sayi1);
        sayi1 =  sayi1 + 3;
        printf("%d\n", sayi1);
        sayi1 += 6;
        printf("%d\n", sayi1); //diger işlemler de aynen bu şekilde yapılır, fakat çarpma ve bölmede ** ve // yapılamaz.

        sayi1 %= 2;
        printf("%d", sayi1);

        // Karenin alanı
        int x;
        printf("lütfen bir kenar uzunluğu giriniz\n");
        scanf("%d", &x);
        printf("Karenin alanı;%d\n ", x*x);

        //dikdörtgenin alanı

        int dikdortgenKisaKenar, dikdortgenUzunKenar;
        printf("lütfen dikdörtgenin kenar uzunluklarını giriniz\n");
        scanf("%d%d", &dikdortgenKisaKenar, &dikdortgenUzunKenar);
        printf("Dikdörtgenin alanı:%d\n", dikdortgenKisaKenar*dikdortgenUzunKenar);
        int dikdortgeninAlani = dikdortgenKisaKenar * dikdortgenUzunKenar;
        printf("%d", dikdortgeninAlani);

        //dairenin alanı
        float pi = 3.14;
        float r;
        printf("lütfen yarıçapı giriniz\n");
        scanf("%f", &r);
        printf("çemberin alanı; %f\n", pi*(r*r));
        printf("çemberin çevresi: %f\n", 2*pi*r);


        // Küpün alanı
        int kupBirKenar;
        printf("lütfen küpün kenar uzunluğunu giriniz");
        scanf("%d", &kupBirKenar);
        printf("küpün hacmi : %d", 6* kupBirKenar*kupBirKenar);


        float  a, b, c, k;
        printf("Sırasıyla a, b, c, k degerlerini giriniz\a\n");//   \a uyarı sesi verir
        scanf("%f%f%f%f", &a, &b, &c, &k);
        float sonuc = a*k*k + b*k +c;
        printf("Denklemin sonucu=%d",(int)sonuc);//dönüşüm yapıldığı için %f değil %d yazıldı
        /*Dönüştürme sırası şu sırada yapılır
        int->float->double*/

        int sayi, onbinler, binler, yuzler, onlar, birler;
        printf("5 basamaklı ir sayı giriniz...\a\n");
        scanf("%d", &sayi);
        onbinler = sayi /10000;
        binler = (sayi % 10000)/1000;
        yuzler =(sayi % 1000)/100;
        onlar = (sayi % 100)/10;
        birler = (sayi % 10);
        printf("%d     %d     %d     %d     %d",onbinler, binler, yuzler, onlar, birler);

    return 0;
}
