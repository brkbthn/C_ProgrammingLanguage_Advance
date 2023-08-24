#include <stdio.h>
#include <stdlib.h>
typedef struct AdresDefteri{
    char ad[100];
    char soyad[100];
    char telNo[10];
    char adres[200];
    char postaKodu[6]
}defter;
int main()
{   int N;
    int i;
    char satir;
    printf("kac adet kayit tutulacak\n");
    scanf("%d", &N);
    scanf("%c", &satir);
    defter iletisim[N];
    for(i=0; i<N; i++){
        printf("adi giriniz\n");
        gets(iletisim[i].ad);

        printf("soyadi giriniz\n");
        gets(iletisim[i].soyad);

        printf("telno giriniz\n");
        gets(iletisim[i].telNo);

        printf("adres giriniz\n");
        gets(iletisim[i].adres);

        printf("posta kodunu giriniz\n");
        gets(iletisim[i].postaKodu);

    }
    printf("KISI BILGILERI\n");
    printf("---------------------\n");
    for(i=0; i<N; i++){
        printf("%s \t  %s \t %s \t %s\n", iletisim[i].ad, iletisim[i].soyad, iletisim[i].adres, iletisim[i].telNo, iletisim[i].postaKodu);

    }





    return 0;
}
