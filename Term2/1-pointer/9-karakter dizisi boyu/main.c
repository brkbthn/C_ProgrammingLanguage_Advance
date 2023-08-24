#include <stdio.h>
#include <stdlib.h>
//kullanýcýdan bir karakter dizisi isteyin ve girilen dizinin kac karakterden olustugunu gosteren programý yazýnýz

int main()
{
    char can[100];
    char *pointer;
    printf("lutfen bir karakter dizisi giriniz..\n");
    gets(can);
    for(pointer=can;*pointer;pointer++){

    }
    printf("karakter dizimiz %s %d kadar karakterden olusmaktadir", can, pointer-can);
    return 0;
}
