#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct kitap{
char ad[50];
char yazarIsmi[50];
int basimYili;
float fiyat;
};
int main()
{   struct kitap kitap1;  //dikizzz...... main içeriinde de structa veri baþlýðý ekleyebilirsin
    strcpy(kitap1.ad,"pia mater");
    printf("%s", kitap1.ad);

    char yazarinIsmi[50];
    printf("kitabin yazarinin ismini giriniz...\n");
    scanf("%s",&yazarinIsmi);
    strcpy(kitap1.yazarIsmi, yazarinIsmi);
    printf("eklediginiz yazarin adi:%s", kitap1.yazarIsmi);


    return 0;
}
