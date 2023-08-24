#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fgetc(); -->dosyadan tek bir karakter okur
    //fscanf(); -->dosyadan bicimlendirilmis karakter dizisi okur
    /*char karakter;
    FILE *dosya;
    dosya = fopen("deneme.txt", "r");
    if(dosya!=NULL){
        karakter = fgetc(dosya);//dosyanin ilk karakterinden baslar.
        printf("karakter = %c", karakter);
    }
    else{
        printf("dosya bulunamadi\n");
    }
    fclose(dosya);
    */
    /*
    FILE *dosya;
    char k1[10];
    char k2[10];
    int sayi;
    if((dosya = fopen("canan.txt", "r"))!= NULL){

        fscanf(dosya, "%s", &k1);
        fscanf(dosya, "%s", &k2);
        fscanf(dosya,"%d", &sayi);
        printf("%s %s %d", k1, k2, sayi);

    }
    else{
        printf("dosya bulunamadi\n");
    }
    fclose(dosya);
    */
/*
     FILE *dosya;
     char kelime[50][20];
     int i;
     if((dosya = fopen("kdizim.txt", "r"))!= NULL){
            while(!feof(dosya)){//doysa bitmediyse

                    fscanf(dosya, "%s", kelime[i]);
                    printf("%s\t", kelime[i]);
                    i++;
            }
     }
    else{
        printf("dosya bulunamadi\n");
    }
    fclose(dosya);
    */
/*
    FILE *dosya;
    char numaralar[10][10], isimler[20][20];
    int notlar[10];
    int i=0;
     if((dosya = fopen("ogrenci.txt", "r"))!= NULL){
            while(!feof(dosya)){//doysa bitmediyse
                fscanf(dosya, "%s %s %d", &numaralar[i], &isimler[i], &notlar[i]);
                printf("%s %s %d\n", numaralar[i], isimler[i], notlar[i]);
                i++;
            }
            }
    else{
        printf("dosya bulunamadi\n");
    }
    fclose(dosya);
*/
    FILE *dosya;
    char karakter;
    if((dosya = fopen("lorem.txt","r"))!=NULL){
        karakter = fgetc(dosya);
        while(karakter != EOF){
            printf("%c", karakter);
            karakter = fgetc(dosya);
        }
    }
    else{
        printf("dosya bulunamadi\n");
    }
    fclose(dosya);

    return 0;
}
