#include <stdio.h>
#include <stdlib.h>
/*enum tek tip sembolik listelere denir.
ornek: enum istanbul{
            besiktas,  // 0 degerini alir
            kadikoy,  // 1 degerini alir
            sisli // 2 degerini alir
            ...
};
ornek: enum istanbul{
            besiktas,  // 0 degerini alir
            kadikoy,  // 1 degerini alir
            sisli=100,  degerini alir
            beyoglu, //101 degerini alir
            kadikoy // 102 degerini alir
            ...
};
tanimlam: enum renkler{mavi, kirmizi, sari, yesil};
kullanimi: enum renkler renk=sari;

farkli sekilde de tanimlanabilir
typedef enum {mavi, kirmizi, sari, yesil} renkler;
kullanim: renkler renk=yesil;  */

enum renkler{
    mavi,
    kirmizi,
    yesil
};
typedef enum sebzeler{
    sogan,
    biber,
    prasa
}sebze;
int main()
{   enum renkler can=kirmizi;
    printf("%d\n", can);

    sebze batuhan=sogan;
    printf("%d\n", batuhan);

/*
Enumeration yapilirken dikkat edilmesi gerekenler;
    Birden fazla enumeration yaparken bazi seyler yasaktir.
        *Ayni sembolü birden fazla kere kullanmak.
        *Enumeration yapilmamis bir degiskeni enumeration yaparken kullanmak
        *Buna karsın enumeration icinde aynı degere sahip birbirinden farklı degiskenler olabilir.*/


    return 0;
}
