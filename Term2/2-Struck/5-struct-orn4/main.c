 #include <stdio.h>
#include <stdlib.h>
struct kitap{
char ad[50];
char yazarIsmi[50];
int basimYili;
float fiyat
};
int main()
{   struct kitap romanKitaplari[2] = {{"dokuzuncu hariciye kogusu", "peyami safa", 1980, 23.50}, {"suc ve ceza", "dostoyevski", 1901, 35,75}};
    float toplamFiyat=0;
    for(int i=0; i<2; i++){
        printf("%d. kitabin==> ismi: %s \nyazari:%s \nbasim yili:%d \nfiyati:%f\n", i+1, romanKitaplari[i].ad, romanKitaplari[i].yazarIsmi, romanKitaplari[i].basimYili, romanKitaplari[i].fiyat);
        toplamFiyat += romanKitaplari[i].fiyat;
    }
    printf("toplam fiyat:%.2f\n", toplamFiyat);


    return 0;
}
