#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{       setlocale(LC_ALL,"Turkish");
        float sayi;
        char devam;
        float buyuk=0;
        do{
                printf("lütfen bir sayi giriniz..\n");
                scanf("%f", &sayi);
                if(sayi>buyuk){
                    buyuk=sayi;
                    printf("yeni büyük sayýmýz=%f\n", buyuk);
                }
                else{
                    printf("Büyük sayý deðiþmedi, hala %d", buyuk);

                }
                printf("Büyük sayýyý hesaplamya devam etmek istiyor musunuz?\n");
                scanf(" %c", &devam);
        }while(devam=="e" || devam=="E");
        printf("Programýmýz baþarýyla sonuçlandý...\n");


    return 0;
}
