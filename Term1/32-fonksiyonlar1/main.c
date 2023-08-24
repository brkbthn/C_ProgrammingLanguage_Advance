#include <stdio.h>
#include <stdlib.h>
void takimlar(){//void: bos deðer döndürür
        printf("FENERBAHCE\n");
        printf("galatasaray\n");
        printf("besiktas\n");
        printf("trabzon belediye spor\n");
}
int sayininIkiKatiniAl(int sayi){
    return sayi*2;

}
int main()
{   takimlar();
    printf("%d",sayininIkiKatiniAl(7));//return deðerinin döndürülebilmesi için fonksiyonun printf fonksiyonunun içinde azdýrýlmasý gerekir

    return 0;
}
