#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL, "Turkish") ;

    int ayinNumarasi;
    printf("��renmek istedi�iniz ay�n numaras�n� giriniz...!!!!\n");
    scanf("%d", &ayinNumarasi);
    char ayinMevsimi;

    switch(ayinNumarasi){
    case 1: printf("%d numaral� ay:Ocak\n", ayinNumarasi);
                ayinMevsimi = 'K';
                break;
    case 2:
                printf("%d numaral� ay:�ubat\n", ayinNumarasi);
                ayinMevsimi = 'K';
                break;
    case 3:
                printf("%d numaral� ay:Mart\n", ayinNumarasi);
                ayinMevsimi = 'I';
                break;
    case 4:
                printf("%d numaral� ay:Nisan\n", ayinNumarasi);
                ayinMevsimi = 'I';
                break;
    case 5:
                printf("%d numaral� ay:May�s\n", ayinNumarasi);
                ayinMevsimi = 'I';
                break;
    case 6:
                printf("%d numaral� ay:Haziran\n", ayinNumarasi);
                ayinMevsimi = 'Y';
                break;
    case 7:
                printf("%d numaral� ay:Temmuz\n", ayinNumarasi);
                ayinMevsimi = 'Y';
                break;
    case 8:
                printf("%d numaral� ay:A�ustos\n", ayinNumarasi);
                ayinMevsimi = 'Y';
                break;
    case 9:
                printf("%d numaral� ay:Eyl�l\n", ayinNumarasi);
                ayinMevsimi = 'S';
                break;
    case 10:
                printf("%d numaral� ay:Ekim\n", ayinNumarasi);
                ayinMevsimi = 'S';
                break;
    case 11:
                printf("%d numaral� ay:Kas�m\n", ayinNumarasi);
                ayinMevsimi = 'S';
                break;
    case 12:
                printf("%d numaral� ay:Aral�k\n", ayinNumarasi);
                ayinMevsimi = 'K';
                break;
    default:
                printf("L�tfen 1-12 aras�nda bir say� giriniz....\n");

    }
    if (ayinMevsimi=='I'){
        printf("ilkbahar");
    }
    if (ayinMevsimi=='K'){
        printf("K��");
    }
    if (ayinMevsimi=='Y'){
        printf("Yaz");
    }
    if (ayinMevsimi=='S'){
        printf("Sonbahar");
    }

    return 0;
}
