#include <stdio.h>
#include <stdlib.h>

struct kitap{
char ad[50];
char yazarIsmi[50];
int basimYili;
float fiyat;
}romanKitaplari[2] = {{"dokuzuncu hariciye kogusu", "peyami safa", 1980, 23.50}, {"suc ve ceza", "dostoyevski", 1901, 35,75}};
int main()
{
    float toplamFiyat=0;
    for(int i=0; i<2; i++)
        toplamFiyat += romanKitaplari[i].fiyat;
    printf("toplam fiyat:%f\n", toplamFiyat);
    return 0;
}
