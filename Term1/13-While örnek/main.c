#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{   setlocale(LC_ALL,"Turkish");
    int x,y, toplam=0;
    printf("Kaçla kaç arasýnda sayýlarý toplamamý isterisiniz, 2 sayý giriniz\n");
    scanf("%d%d", &x,&y);
    int terimSayisi = abs(x-y)+1;
    printf("%d\n", terimSayisi);
    int buyuk, kucuk;
    if(y>x){
        buyuk = y;
        kucuk = x;
        while(terimSayisi>0){
            printf("%d\n", x);
            toplam = toplam + x;
            x++;
            terimSayisi--;


        }
    }
    else if(x>=y){
        buyuk = x;
        kucuk = y;
        while(terimSayisi>0){
            printf("%d\n", y);
            toplam = toplam +y;
            y++;
            terimSayisi--;

        }
    }
    printf("%d den %d ye kadar olan sayilarin topamý= %d", kucuk, buyuk, toplam);

    return 0;
}
