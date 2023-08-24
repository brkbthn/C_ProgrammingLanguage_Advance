#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{       setlocale(LC_ALL,"Turkish");
        //Döngüye girdikten sonra þartý sorgular
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
