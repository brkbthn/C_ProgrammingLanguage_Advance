#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan bir karakter dizisi girmesini isteyin
girdi�iniz karakter dizisinden istedi�iniz ir harfin kald�r�lmas�n�
isteyin istedi�iniz karakter kald�r�ld�ktan sonra dizinin son halini
ekran bast�rn bir c program� yaz�n�z. */

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
    while(*ptr){//ptr /n i gor�nceye kadar anlam�na gelir.
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
