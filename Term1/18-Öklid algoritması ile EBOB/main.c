#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
        setlocale(LC_ALL,"Turkish");
        int sayi1,sayi2, buyukSayi, kucukSayi, kalan;
        int orijinalBuyukSayi, orijinalKucukSayi;
        do{
            printf("Ebob'unu bulmak istediginiz 2 adet pozitif tam sayiyi giriniz...\n");
            scanf("%d%d", &sayi1, &sayi2);
             }while(sayi1<=0 || sayi2<=0);
                           if (sayi1>sayi2){
                                buyukSayi=sayi1;
                                kucukSayi=sayi2;
                                orijinalBuyukSayi = sayi1;
                                orijinalKucukSayi = sayi2;

                            }
                            else{
                                buyukSayi=sayi2;
                                kucukSayi=sayi1;
                                orijinalBuyukSayi = sayi2;
                                orijinalKucukSayi = sayi1;
                            }
                            kalan = buyukSayi%kucukSayi;
                            while(kalan!=0){
                                        buyukSayi=kucukSayi;
                                        kucukSayi=kalan;
                                        kalan = buyukSayi%kucukSayi;
                            }

                    printf("EBOB[%d,%d]=%d", orijinalBuyukSayi,orijinalKucukSayi,kucukSayi);
    return 0;
}
