#include <stdio.h>
#include <stdlib.h>
void takimlar(){//void: bos de�er d�nd�r�r
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
    printf("%d",sayininIkiKatiniAl(7));//return de�erinin d�nd�r�lebilmesi i�in fonksiyonun printf fonksiyonunun i�inde azd�r�lmas� gerekir

    return 0;
}
