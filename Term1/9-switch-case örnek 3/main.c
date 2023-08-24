#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    printf("MENÜ\t\t\tSİPARİŞ KODU\t\tFİYAT\n");
    printf("Başlangıçlar\t\t1\t\t\t5.5₺\n");
    printf("Salatalar\t\t2\t\t\t7.5₺\n");
    printf("Ana Yemekler\t\t3\t\t\t12₺\n");
    printf("Tatlılar\t\t4\t\t\t9.5₺\n");
    printf("İçecekler\t\t5\t\t\t3.5₺\n");
    printf("Ara Sıcaklar\t\t6\t\t\t7.5₺\n");
    int siparisNumarasi;
    float  toplam;

    Menu:printf("lütfen yemek istediğiniz ürünün sipariş kodunu giriniz.\n");
               scanf("%d",&siparisNumarasi);
    if(siparisNumarasi==-1){
        goto cikis;
    }
    else if (siparisNumarasi>0 && siparisNumarasi<7) {
            float porsiyon;
            printf("kaç porsiyon almak istersiniz");
            scanf("%f",&porsiyon);

    switch(siparisNumarasi){

            case 1:
                if (porsiyon>0){
                toplam += porsiyon*5.5;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;


            case 2:
                if (porsiyon>0){
                toplam +=porsiyon*7.5;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;


            case 3:
                if (porsiyon>0){
                toplam +=porsiyon*12;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;


            case 4:
                if (porsiyon>0){
                toplam +=porsiyon*9.5;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;


            case 5:
                if (porsiyon>0){
                toplam +=porsiyon*3.5;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;


            case 6:
                if (porsiyon>0){
                toplam +=porsiyon*7.5;
            }

            else{
                printf("lütfen sıfırdan büyük bir değer giriniz\n");
            }

            break;

            default:
                printf("lütfen 1-6 arasında seçim yapınız\n");
                break;
}
}
else{
    printf("lütfen 1-7 arasında bir sayı giriniz\n");
}
    goto Menu;
    cikis:
            printf("siparişiniz tamamlandı");
    printf("Toplam Tutar: %f", toplam);

    return 0;
}
