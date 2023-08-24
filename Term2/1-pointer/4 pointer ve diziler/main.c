#include <stdio.h>
#include <stdlib.h>

int main()
{   //c dilinde her dizi bir pointerdir her pointer da dogal bir dizidir
    char can[100]="canan"; // dizinin ismi dizinin ilk elemaninin adresine esittir. yani can=&can[0]
    char *p1;
    p1 = can; //can=&can[0]
    printf("5.karakter = %c\n",can[4]);
    printf("5.karakter = %c\n",*p1);
    printf("5.karakter = %c\n",*(p1+1));
    printf("5.karakter = %c\n",*(p1+2));
    printf("5.karakter = %c\n",*(p1+3));
    printf("5.karakter = %c\n",*(p1+4));


    /*
    int t[10];
    int *pt;
    pt = &t[0 ];
    Eger pt bir degiskeni isaret eden bir pointersa: int *pt;
        ornek: pt=&t[0];
        pt t dizisinin ilk elemanini gosteriyor yani t[0]'in adresini tutuyor
    Eger pt t dizisinin ilk elemanini gosteiorsa pt+1 bir sonraki elemaninin adresini gosteriyor demektir.
        *(pt+1) bir sonraki elemanin degerini gosterir.
        pt+i t dizisinin i'ninci elemaninin adresini gosterir
        *(pt+i) t dizisinin i'ninci elemaninin degerini gosterir

        tanimlamaya gore;
            t bir degisken degil ama dizinin adresini gosterir
            bu sayede t diziyi adresler, t dizisinin ilk elaminin adresidir.//t dizinin ismi
            t ve &t[0] ayni seydir.
                o halde;
                    in *tab; ve int tab[] ayni seydir.*/


                int t[100];
                int i;
                for(i=0; i<100; i++){
                    t[i]=0;
                }

                for(i=0; i<100; i++){
                    printf("%d", t[i]);

                }
                printf("\n");

                int *pt;
                pt = t;
                for(i=0; i<100;i++){
                    *(pt+i)=0;
                }
                   for(i=0; i<100;i++){
                    printf("%d", *(pt+i));
                }


    return 0;
}
