#include <stdio.h>
#include <stdlib.h>
//kullan�c�dan bir karakter dizisi isteyin ve girilen dizinin kac karakterden olustugunu gosteren program� yaz�n�z

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
