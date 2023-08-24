#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{       setlocale(LC_ALL,"Turkish");
        int tamSayi = 6; // 4 byte
        double buyukYerKaplayanKesirliSayi = 7.2; // 8 byte
        // short int uzunluk: // 2 byte
        // long int uzunluk2; // 4 byte
        char karakter  = 'K'; // 1byte
        char karakterDizisi[14] = "Berk Batuhan";  // 12 byte
        printf("%s",karakterDizisi);
        float kesirliSayi= 9.5 ;
        char karakterDizisi2[6] = "Ahmet"; //Yazýlacak karakter sayýsýnýn bir fazlasýný ram de ayýrmak zorunludur.
        printf("%s",karakterDizisi2);


        printf("%d", tamSayi);  // int
        printf("%f", buyukYerKaplayanKesirliSayi); //double
        printf("%c",karakter); //char
        printf("%s",karakterDizisi); // coklu char
        printf("%f", kesirliSayi); //float


        printf("%10d\n", tamSayi);  // int  9 boşluk bıraktı
        printf("%d\n RAM'da %d byte yer kaplar\n", tamSayi, sizeof(int));  // int  9 boşluk bıraktı
        printf("%.2f  RAM'da %d byte yer kaplar\n", buyukYerKaplayanKesirliSayi, sizeof(double)); //double
        printf("%f  RAM'da %d byte yer kaplar\n", buyukYerKaplayanKesirliSayi, sizeof(double)); //double
        printf("%f  RAM'da %d byte yer kaplar\n", buyukYerKaplayanKesirliSayi, sizeof(double)); //double
        printf("%c  RAM'da %d byte yer kaplar\n",karakter, sizeof(char)); //char
        printf("%s  RAM'da %d byte yer kaplar\n",karakterDizisi, sizeof(char)); // coklu char
        printf("%f  RAM'da %d byte yer kaplar\n", kesirliSayi, sizeof(float)); //float
        printf("%f  RAM'da %d byte yer kaplar \n", kesirliSayi, sizeof(float)); //float

        char karakterDizisiOrnegi[5] = {'K', 'A', 'A', 'N'};
        printf("%s\n", karakterDizisiOrnegi);




        int sayii;
        printf("lütfen bir integer deger giriniz...\n");
        scanf("%d", &sayii);

        printf("Girdiğiniz sayı: %d\n", sayii);

        float kesirliSayii;
        printf("lütfen bir float giriniz...\n");
        scanf("%f", &kesirliSayii);

        printf("Girdiğiniz kesirli sayı: %f\n", kesirliSayii);

        double kesirliSayii2;
        printf("lütfen bir double giriniz...\n");
        scanf("%lf", &kesirliSayii2);

        printf("Girdiğiniz kesirli sayı: %f\n", kesirliSayii2);


        char karakterr;
        printf("lütfen bir karakter giriniz...\n");
        scanf(" %c", &karakterr);

        printf("Girdiğiniz karakter: %c\n", karakterr);


        char karakterDizi[6];
        printf("lütfen bir karakter dizisi giriniz...\n");
        scanf("%s", karakterDizi);

        printf("Girdiğiniz karakter dizisi: %s\n", karakterDizi);



    return 0;
}
