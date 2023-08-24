#include <stdio.h>
#include <stdlib.h>
//k l b d q i s t e f o r c h x elemanlarýný içeren bir karakter dizisini tanýmlarýn.
//2 pointer ve bir for döngüsü kullanarak bu dizinin aynýsýný koyalayýn ve ekrana bastýrýn.

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
