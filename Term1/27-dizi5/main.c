#include <stdio.h>
#include <stdlib.h>
//Parola dogrulamasýný saglayan program
int main()
{   char sifre[80];
    char sifreDogrulama[80];
    int i;
    int yanlis;

    while(1){
            yanlis = 0;
            i = 0;
            printf("lutfen parolanizi giriniz....\n");
            scanf("%s", &sifre);
            printf("parolanizi tekrar giriniz.....\n");
            scanf("%s", &sifreDogrulama);
            while(!(sifre[i] == '\0' && sifreDogrulama[i] == '\0') ){
                    if(sifre[i] != sifreDogrulama[i]){
                        printf("hatali giris yaptiniz lutfen iki sifreyi de ayni giriniz..\n");
                        yanlis = 1;
                        break;
                    }
                    else
                        i++;
                    }
            if(yanlis==0){
                printf("sifreniz onaylanmistir.\n");
                break;
            }
    }

    return 0;
}
