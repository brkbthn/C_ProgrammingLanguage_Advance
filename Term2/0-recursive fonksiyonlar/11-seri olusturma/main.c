#include <stdio.h>
#include <stdlib.h>
//seri olusturma
void seriOlustur(int bas, int bit, int artis){
    if(bas<=bit){
        printf("%d\t",bas);
        seriOlustur(bas+artis, bit, artis);
    }
}
int main()
{
    int bas, bit, artis;
    printf("lutfe sisaryla serinin baslangic bitis ve artis degerlerini giriniz\n");
    scanf("%d%d%d",&bas, &bit,&artis);
    seriOlustur(bas, bit, artis);
    return 0;
}
