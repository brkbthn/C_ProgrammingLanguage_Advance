#include <stdio.h>
#include <stdlib.h>
//k l b d q i s t e f o r c h x elemanlar�n� i�eren bir karakter dizisini tan�mlar�n.
//2 pointer ve bir for d�ng�s� kullanarak bu dizinin ayn�s�n� koyalay�n ve ekrana bast�r�n.

int main()
{   char dizi[16]={'k', 'l', 'b', 'd', 'q', 'i', 's', 't', 'e', 'f', 'o', 'r', 'c', 'h', 'x', '\0'};
    char copyDizi[16];
    char *ptr1;
    char *ptr2;
    for(ptr1=dizi, ptr2=copyDizi; ptr1<dizi+15 ;ptr1++, ptr2++){
            *ptr2 = *ptr1;
             printf("%c", *ptr2);
    }
    printf("\n");
    printf("%s", copyDizi);
    return 0;
}
