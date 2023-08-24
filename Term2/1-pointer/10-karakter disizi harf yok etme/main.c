#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýdan bir karakter dizisi girmesini isteyin
girdiðiniz karakter dizisinden istediðiniz ir harfin kaldýrýlmasýný
isteyin istediðiniz karakter kaldýrýldýktan sonra dizinin son halini
ekran bastýrn bir c programý yazýnýz. */

int main()
{   char dizi[100];
    char eleme;
    char *ptr;
    char temp;
    printf("lutfen bir karakter dizisi giriniz..\n");
    gets(dizi);
    printf("Diziden cikarmak istediginiz karakter nedir?\n");
    scanf("%c", &eleme);
    ptr = dizi;
    while(*ptr){//ptr /n i gorünceye kadar anlamýna gelir.
        if(*ptr == eleme)
            strcpy(ptr, ptr+1);//ptr adresini ptr+1 e koydu
        ptr++;
    }
    /*
    for(ptr=dizi;*ptr;ptr++){
        if(*ptr==eleme){
                strcpy(ptr, ptr+1);
        }
    }*/
    printf("eleme sonrasi dizi=%s", dizi);

    return 0;
}
