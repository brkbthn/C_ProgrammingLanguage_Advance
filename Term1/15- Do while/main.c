#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{       setlocale(LC_ALL,"Turkish");
        //D�ng�ye girdikten sonra �art� sorgular
        int a=0;
        do{
            printf("%d\n", a);
            a++;
        }    while(a<10);
printf("---------------------------------------------\n");
        int b=10;
        do{
            printf("%d\n", b);
            b++;
        }    while(b<10);
    return 0;
}
