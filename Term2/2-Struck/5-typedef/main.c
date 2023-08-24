#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct ogrenciler{
        int okulNo;
        char isim[15];
        char soyIsim[15];
        char sube;
        double genelOrtalama;
}ogrenci;  //Struct tan tek farki burada tanimlanan ogrencinin taslak halinde kullanilabilmesidir.

int main()
{
    //normal struct olusturmaktan tek farki struck un tipinin tanimli olmasidir

    ogrenci o1; //o1 ogrencisi tanimlandi
    ogrenci o2;//o2 ogrencisi tanimlandi
    o1.genelOrtalama = 3.6;
    o2.genelOrtalama = 3.1;
    strcpy(o1.isim, "batuhan");
    strcpy(o2.isim, "berk");
    o1.sube='B';//char karakter dizisi þeklinde tanýmlanmamýþsa strcyp kullanamzsýn. Tek harfi b þekilde yazarsýn.
    o1.sube='A';
    printf("%c   %.2lf\n", o1.sube, o1.genelOrtalama);
    printf("%c  %.2lf\n",o1.sube, o1.genelOrtalama);

    printf("lutfen ogrencinin ismini soyismini numarasini sirasiyla giriniz...\n");
    scanf("%s %s %d", o1.isim, o1.soyIsim, &o1.okulNo);//bu tiplerde stringler için& girmeyebilirsin fakat diðer veri tipleri için girmek zorundasýn
    printf("%s %s %d\n", o1.isim, o1.soyIsim, o1.okulNo);
    printf("-------------------------------\n");
    scanf("%s %s %d", o2.isim, o2.soyIsim, &o2.okulNo);//bu tiplerde stringler için& girmeyebilirsin fakat diðer veri tipleri için girmek zorundasýn
    printf("%s %s %d\n", o2.isim, o2.soyIsim, o2.okulNo);





    return 0;
}
