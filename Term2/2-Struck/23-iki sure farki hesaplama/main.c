#include <stdio.h>
#include <stdlib.h>
struct zaman{
    int saniye;
    int dakika;
    int saat;
};
void fark(struct zaman t1, struct zaman t2, struct zaman *farki){
    if(t2.saniye>t1.saniye){
        --t1.dakika; //t1 in dakikasini bir azalt demek
        t1.saniye+=60;
    }
    farki->saniye=t1.saniye - t2.saniye; //struct tipindeki pointerlarin içinde islem yapmak icin . yerine -> kullanilir.

    if(t2.dakika>t1.dakika){
        --t1.saat; //t1 in dakikasini bir azalt demek
        t1.dakika+=60;
    }
    farki->dakika=t1.dakika - t2.dakika; //struct tipindeki pointerlarin içinde islem yapmak icin . yerine -> kullanilir.
    farki->saat = t1.saat - t2.saat;
    printf("%d, %d , %d", farki->saat, farki->dakika, farki->saniye);




}
int main()
{
    /*kullanici tarafindan baslangic ve bitis zamanlari saat, dakika, ve saniye biciminde girilmektedir.
    Buna gore asagida kullanilan yapi ve fonksiyon kullanilarak iki zaman dilimi arasindaki farki hesaplayan
    c programini yaziniz*/
    struct zaman t1, t2, *frk;
    printf("bitis;");
    scanf("%d %d %d",&t1.saat, &t1.dakika, &t1.saniye);
    printf("baslangic;");
    scanf("%d %d %d",&t2.saat, &t2.dakika ,&t2.saniye);
    fark(t1, t2, &frk);
    return 0;
}
