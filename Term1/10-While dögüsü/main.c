#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    int i=0;

    while(i<10){
        printf("i=%d de�eri 1 artt�r�l�yor...\n", i);
        i ++;



    }

    return 0;
}
