#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip{
    int no;
    char cevap[10];
};
struct sonucTip{
    int no;
    int not;
};

int main()
{/*Bir ogretmen 30 kisilik sinifa 10 soruluk coktan secmeli sorulardan olusan bir sinav vermistir.
    Bu sinavda her sorunun 4 secenegi vardir ve 4 yanlis 1 dogruyu goturmektedir. Bu programda
    bir ogrencinin okul numarasini ve cevaplarini iceren bir yapi tanimlayiniz. Daha sonra ogremenin
    hazirladigi cevap anahtarini bir karakter dizisine giriniz ve her ogrencinin 10 uzerinden aldigi notu
    hesaplayiniz. Her ogrencinin okul numarasi ile hesaplanan sinav sonucunu bir baska yapi dizisinde
    tutunuz ve sonuclari ekranda goruntuleyiniz.*/
    struct ogrenciTip ogrenci[30];
    struct sonucTip sonuc[30];
    char anahtar[10];
    int i,j;
    int dogru, yanlis;
    printf("lutfen cevap anatarini giriniz\n");
    for(i=0; i<10;i++){
        scanf("%s", &anahtar[i]);
    }
    printf("ogrenci bilgilerini giriniz\n");
    for(j=0; j<30;j++){
        printf("ogrenci no\n");
        scanf("%d", &ogrenci[j].no);
        sonuc[j].no=ogrenci[j].no ;
        printf("ogrenci cevap\n");
        dogru=yanlis=0;
        for(i=0; i<10; i++){
            scanf("%s", &ogrenci[j].cevap[i]);
            if(anahtar[i]==ogrenci[j].cevap[i])
                dogru++;
            else if(ogrenci[j].cevap[i] != ' ')
                yanlis++;
        }
        printf("dogru : %d yanlis : %d\n",dogru, yanlis);
        sonuc[j].not= dogru-0.25*yanlis;
    }

    for(j=0; j<30;j++){
        printf("ogrenci no=%d \t Not= %d\n", sonuc[j].no, sonuc[j].not );

    }
    return 0;
}
