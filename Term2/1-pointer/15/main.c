#include <stdio.h>
#include <stdlib.h>

int main()
{   char *gun[7]={"pazartesi", "sal�", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
    // *gun[7]=gun[7][...] anlam�na gelir. poiinter olmazsa ikinci koseli parantez tan�mlanmak zorundadir
    int i;
    do{
            printf("lutfen 1 ve 7 arasinda bir deger giriniz");
            scanf("%d", &i);

    }while(i<=0 || i>7);
    printf("%d numrali haftanin gunu=%s\n", i,  gun[i-1]);


    return 0;
}
