#include <stdio.h>
#include <stdlib.h>

int main()
{
    //adres tutan de�i�kenlere pointer denir
    //Pointerin t�r� i�aret etti�i de�iskenin t�r�n� anlamam�z� saglar
    //�rnek: int* turundeki bir pointer int turunde bir degiskeni isaret eder
    //Variable pointed: pointerin adresini tuttugu degisken

    int a = 10;
    int *p;
    p = &a; // p, a n�n adresine esit olsun.

    printf("%d\n", p); //p degerinin icinde tuttugu adres
    printf("%d\n", *p); //p degerinin icinde tuttugu adresteki deger
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("--------------------------------------------------\n");
    int *sayi;
    int n=20;
    sayi = &n;
    printf("%d\n", sayi); //sayi degerinin icinde tuttugu adres
    printf("%d\n", *sayi); //sayi degerinin icinde tuttugu adresteki deger
    printf("%d\n", n);
    printf("%d\n", &n);
    printf("--------------------------------------------------\n");
            *sayi = 30; //adresin g�sterdigi degere 30 u ata
                printf("%d\n", sayi); //sayi degerinin icinde tuttugu adres
                printf("%d\n", *sayi); //sayi degerinin icinde tuttugu adresteki deger
                printf("%d\n", n);
                printf("%d\n", &n);
    printf("-------------------------------------------------\n");
                n = 30; //  *sayi = 30 ile ayn� i�i yapiyor
                printf("%d\n", sayi); //sayi degerinin icinde tuttugu adres
                printf("%d\n", *sayi); //sayi degerinin icinde tuttugu adresteki deger
                printf("%d\n", n);
                printf("%d\n", &n);






    return 0;
}
