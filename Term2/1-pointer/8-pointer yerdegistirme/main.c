#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullan�c�dan integer tipindeki bir dizinin de�erlerini girmesini isteyin
    2 pointer kullanarak girdi�iniz dizi elemanlar�n�n ba�tan sona yerini degistiren
    bir c program� yaz�n�z*/
    int can[5];
    int *sayi1, *sayi2;
    int n;
    printf("lutfen dizimizin eleman sayisini giriniz\n");
    scanf("%d", &n);

    for(sayi1=can; sayi1<can+n; sayi1++){
            printf("lutfen eleman giriniz:\n");
            scanf("%d", sayi1);
    }
    printf("dizimizin ilk hali:");
    for(sayi1=can; sayi1<can+n; sayi1++){
        printf("%d\t", *sayi1);
    }
    printf("\n");

    for(sayi1=can, sayi2=can+n-1;sayi1<sayi2; sayi1++, sayi2--){
        int temp;
        temp = *sayi1;
        *sayi1 = *sayi2;
        *sayi2 = temp;
    }
    printf("dizimizin son hali:");
for(sayi1=can; sayi1<can+n; sayi1++){
        printf("%d\t", *sayi1);
    }
    printf("\n");

    /*sayi2=can+n;
    printf("%c", *sayi2);*/
    return 0;
}
