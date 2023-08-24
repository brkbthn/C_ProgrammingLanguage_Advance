#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{   setlocale(LC_ALL," Turkish");
    int sayi;
    int basamakSayisi=0;
    int SayiDegerleriToplam=0;


    char devam='E';
    while(devam == 'E' || devam == 'e'){
            printf("lutfen sayi degerlerinin toplamini ogrenmek istediginiz sayiyi giriniz...\n");
            scanf("%d",&sayi);
            int  orijinalSayi = sayi;
            if(orijinalSayi>=0){
                    do{
                        SayiDegerleriToplam += sayi%10;
                        basamakSayisi++;
                        sayi = sayi / 10; //sayi deðeri in olduðu için virgülden sonrasý kullanýlmayacak
                        }while(sayi>0);
                        printf("%d sayisinin sayi degerleri toplami: %d basamak sayisi ise:%d'dir\n",orijinalSayi, SayiDegerleriToplam,basamakSayisi);
                        basamakSayisi=0;
                        SayiDegerleriToplam=0;
                        printf("Devam etmek istiyor musunuz[E\\e]?\n");
                        scanf(" %c", &devam);
                }
            else{
                printf("Lutfen sifirdan buyuk bir sayi giriniz.\n");

    }
    }
    printf("Programimiz basarili bir sekilde sonuclandi.\n");
    return 0;
}
