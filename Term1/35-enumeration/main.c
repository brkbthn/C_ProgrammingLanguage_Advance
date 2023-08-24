#include <stdio.h>
#include <stdlib.h>
#define onemacro  1
#define tenmacro  10

enum hafta{Pazartesi=1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar} ;//SEN BELÝRTMEZSEN ÝLK ELEMAN 0 OLARAK BAÞLAR
enum aylar{ocak=1,mart=3, haziran=6, eylul=9};
enum ogrenciOkulKaydi{aktif,donmus=1,silinmis=1};
enum macSonucu {Kazandi=0, Kaybetti=1};
int main()
{
    /*char dizi[10] = "Batuhan";
    for(int i = 0; i<7;i++)
        printf("%c\n", dizi[i]);*/

    printf("%d\n", Persembe);
    printf("%d\n", ocak);
    printf("%d\n", haziran);



    for(int i=Pazartesi; i<= Pazar; i++)
        printf("%d\n", i);



    for(int i=onemacro; i<= tenmacro; i++)
        printf("%d\n", i);


    enum ogrenciOkulKaydi kayit;
    kayit = donmus;
    if(kayit==0)
        printf("%s\n","ogrenci Derslere girebilir");
    else if(kayit==1)
        printf("%s\n","ogrenci derslere giremez");


    enum macSonucu sonuc;
    sonuc = Kazandi;
    (sonuc==Kazandi)  ?  printf("Kazandi") : printf("Kaybetti");

    return 0;
}
