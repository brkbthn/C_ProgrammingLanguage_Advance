#include <stdio.h>
#include <stdlib.h>

int main()
{ /*integer tipinde a ve b dizisinin eleman sayýsýný kullanýcýdan isteyen
    daha sonra kullanýcýdan elemanlarý girmesini isteyen bir program yazýnýz.
    A dizisini ekrana bastýrýn.
    B dizisini ekrana bastýrýn.
    B dizisini A dizisinin sonuna  ekleyin*/
    int n,m;
    printf("Sirasiyla A ve B dizisinin elman sayilarini giriniz.\n");
    scanf("%d %d", &n, &m);
    int can[100], canan[100];
    int *sayi1, *sayi2;
    int i;
    for(sayi1=can; sayi1<can+n;sayi1++){
            printf(" %d. elemanini giriniz", sayi1-can+1);
            scanf("%d", sayi1);

    }
     printf("\n");
    for(sayi2=canan; sayi2<canan+m;sayi2++){
            printf("%d. elemanini giriniz", sayi2-canan+1);
            scanf("%d", sayi2);

    }
     printf("\n");
    printf("can dizimiz\n");
    for(sayi1=can; sayi1<can+n;sayi1++){
        printf("%4d", *sayi1);
    }
     printf("\n");
    printf("canan dizimiz\n");
    for(sayi2=canan; sayi2<canan+m;sayi2++){
        printf("%4d", *sayi2);
    }
    printf("\n");
    for(sayi1=can+n, sayi2=canan; sayi2<canan+m; sayi2++, sayi1++){
        *sayi1 = *sayi2;
    }
    printf("\n");
    printf("can dizimizin yeni hali;\n");
    for(sayi1=can; sayi1<can+m+n; sayi1++){
        printf("%4d", *sayi1);
    }
    return 0;
}
