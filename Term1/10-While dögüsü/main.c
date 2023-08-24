#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    int i=0;

    while(i<10){
        printf("i=%d deðeri 1 arttýrýlýyor...\n", i);
        i ++;



    }

    return 0;
}
