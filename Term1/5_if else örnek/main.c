#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    char karakter;
    printf("Bir karakter s�yle sana onun ASCII de�erini s�yleyeyim.");
    scanf("%c", &karakter);

    int karakterinASCIIDegeri = karakter;
    if(karakterinASCIIDegeri>=65 && karakterinASCIIDegeri<=90){
            printf("%d b�y�k bir harftir....", karakterinASCIIDegeri);
    }
    else if(karakterinASCIIDegeri>=97 && karakterinASCIIDegeri<=122){
            printf("%d k���k bir harftir....", karakterinASCIIDegeri);
    }
    else{
            printf("l�tfen A-z aras�nda bir harf giriniz....!!!!!!!");
    /* integer de�eri %c ile bast�rmak istersek o say�ya asc�� tablosunda denk gelen karakteri
    karakteri integer bast�rmak istersek o karakterin asc�� degerini bbast�rm�� oluruz*/
    }


    return 0;
}
