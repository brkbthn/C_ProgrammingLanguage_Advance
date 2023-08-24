#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
    int secim;
    printf("lütfen seçiminizi yapýnýz....\a\n");
    printf("1.Ýlkbahar\n2.yaz\n3.sonbahar\n4.kýþ\n");
    scanf("%d", &secim);
    switch(secim){
            case 1:  printf("hava çok güzel") ; break;
            case 2:  printf("hava sýcak") ; break;
            case 3:  printf("hava yaðmurlu") ; break;
            case 4 :  printf("hava karlý") ; break;
            default: printf("lütfen 1 ile 4 arasýnda bir deðer giriniz");

    }

    char karaktereGoreSecim;

    printf("Karakter Giriniz!!!\n");
    scanf("%c", &karaktereGoreSecim);
    switch(karaktereGoreSecim){
    case 'a': printf("Ali geldi...\n"); break;
    case 'b': printf("Batuhan geldi...\n"); break;
    case 'c': printf("Ceren geldi...\n"); break;
    default : printf("Boyle birisini tanımıyorum...\n");
    }
    printf("Switch case islemi tamamlandı...\n");




    return 0;
}


