#include <stdio.h>
#include <stdlib.h>
//girilen sayinin tek ya da cift oldugunu hesaplayan fonksiyon

void tekCiftKontrol(int sayi){
        if(sayi%2==0)
            printf("%d cifttir\n", sayi);
        else
            printf("%d tektir\n", sayi);
}

int teklikCiftlikKontrol(int sayi){
         if(sayi%2==0)
            return 0;
         else
            return 1;
}

int main()
{
    tekCiftKontrol(7);
    tekCiftKontrol(8);
    printf("------------------------------------------------\n");
    int sayi;
    printf("lutfen tek ya da cift olup olmadigini ogrenmek istediginiz sayiyi giriniz...\n");
    scanf("%d", &sayi);

    if(teklikCiftlikKontrol(sayi)==1)
        printf("sayi tektir\n");
    else
        printf("sayi cifttir..\n");

    printf("------------------------------------------------\n");
    printf("1 den 200 e kadar olan sayilarin tekligi ve ciftligi");
    for(int i=1; i<=200;i++){
            if(teklikCiftlikKontrol(i)==1)
                printf("%d sayisi tektir...\n", i);
            else
                printf("%d sayisi cifttir...\n", i);

    }

    return 0;
}
