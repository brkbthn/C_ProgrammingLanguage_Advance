#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    char karakter;
    printf("Bir karakter söyle sana onun ASCII deðerini söyleyeyim.");
    scanf("%c", &karakter);

    int karakterinASCIIDegeri = karakter;
    if(karakterinASCIIDegeri>=65 && karakterinASCIIDegeri<=90){
            printf("%d büyük bir harftir....", karakterinASCIIDegeri);
    }
    else if(karakterinASCIIDegeri>=97 && karakterinASCIIDegeri<=122){
            printf("%d küçük bir harftir....", karakterinASCIIDegeri);
    }
    else{
            printf("lütfen A-z arasýnda bir harf giriniz....!!!!!!!");
    /* integer deðeri %c ile bastýrmak istersek o sayýya ascýý tablosunda denk gelen karakteri
    karakteri integer bastýrmak istersek o karakterin ascýý degerini bbastýrmýþ oluruz*/
    }


    return 0;
}
