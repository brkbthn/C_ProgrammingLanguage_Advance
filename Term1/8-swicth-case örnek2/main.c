#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{       setlocale(LC_ALL,"Turkish");
        int secim;
        float sayi1, sayi2;
menu:     printf("Lütfen yapmak istediðiniz iþlemi seçiniz\n");
                printf("1.Toplama\n2.Cýkarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Kuvvet\n");
                printf("lütfen çıkmak için -1 değerini giriniz\n");
                scanf("d", &secim);
                printf("lütfen 2 adet sayı giriniz...\n");
                scanf("%f%f", sayi1, sayi2);
        if (secim == -1){
            goto cikis;
        }

        switch(secim){
        case 1:
            printf("toplam: %f\n", sayi1 +sayi2);
            break;
        case 2:
            printf("Çýkarma %f\n", sayi1-sayi2);
            break;
        case 3:
            printf("Çarpma: %f\n", sayi1*sayi2);
            break;
        case 4:
            printf("Bölme: %f\n", sayi1*sayi2);
            break;
        case 5:
            printf("Karekök: %f = %f, karekök %f = %f\n", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2));
            break;
        case 6:
            printf("%f üzeri %f =%f", sayi1, sayi2, pow(sayi1, sayi2));
            break;

    }
    goto menu;

    cikis: printf("Hesaplama işlemleri sona erdi");
    return 0;
}
