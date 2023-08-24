#include <stdio.h>
#include <stdlib.h>
/*klavyeden girilen iki tam sayinin carpimini carpma islemi kullanmadan
gerceklesitiren c programini recursive fonksiyon yardimiyla yazdiriniz*/
int carpim(int sayi1, int sayi2){
    int sonuc;
    if(sayi2==1)
            sonuc =sayi1;
    else
        sonuc =sayi1+carpim(sayi1, sayi2-1);
    return sonuc;
}

int main()
{   int a, b;
    printf("lutfen ifi adet sayi giriniz\n");
    scanf("%d %d", &a, &b);
    printf("carpim=%d", carpim(a,b));

    return 0;
}
