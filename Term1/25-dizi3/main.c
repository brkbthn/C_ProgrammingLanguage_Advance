#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    int sayi[] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", sayi[1]);
    sayi[1] = !sayi[1];
    printf("%d\n", sayi[1]);

    for(int i=0; i<6;i++)
        sayi[i] = !sayi[i];
    for(int i=0; i<6;i++)
        printf("%d\t\t", sayi[i]);
    */
    int acik[10]= {0};//bütün deðerlere sýfýr atadý
    int tur, kapi;
    for(tur=0; tur<10;tur++)
            for(kapi = tur; kapi<10; kapi = kapi+tur+1){
                acik[kapi] = !acik[kapi];
            }

    printf("Acik kapilarimiz sunlardir;\n");
    for(kapi=0; kapi<10;kapi++)
                if(acik[kapi]){
                    printf("%d", kapi+1);
                }




    return 0;
}
