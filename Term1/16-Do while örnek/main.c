#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{       setlocale(LC_ALL,"Turkish");
        float sayi;
        char devam;
        float buyuk=0;
        do{
                printf("l�tfen bir sayi giriniz..\n");
                scanf("%f", &sayi);
                if(sayi>buyuk){
                    buyuk=sayi;
                    printf("yeni b�y�k say�m�z=%f\n", buyuk);
                }
                else{
                    printf("B�y�k say� de�i�medi, hala %d", buyuk);

                }
                printf("B�y�k say�y� hesaplamya devam etmek istiyor musunuz?\n");
                scanf(" %c", &devam);
        }while(devam=="e" || devam=="E");
        printf("Program�m�z ba�ar�yla sonu�land�...\n");


    return 0;
}
