#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char isim[4] = "Cam";//4byte yer kaplar
    printf("%s\n", isim);
    for(int i=0;i<3;i++)
        printf("%d.elemani:%c\n", i+1, isim[i]);

    char ad[4] = {'c', 'a', 'm', '\0'} ;//4 byte yer kaplar
    for(int i=0;i<4;i++){
        printf("%d.elemani:%c\n", i+1, ad[i]);
        if(isim[i]=='\0'){
            printf("Dizimiz tamamlandi\n");
        }
        }

    char benimAdim[] = {'b', 'a', 't','u','h','a','n', '\0'} ;//8byte yer kaplar// i�eri�ini teker teker bizim girdi�imiz karakter ya da say� dizilerinde terim say�s�n� girmek zorunlu de�ildir
    printf("%s\n", benimAdim);
*/
    char ulkeler[7];//6 eleman al�nacak fakat bir fazlas�n� yazmak zorundas�n
    for(int i= 0; i<6; i++){
            printf("lutfen 5 elemanli bir karakter dizisi giriniz...\n");
            scanf(" %c",&ulkeler[i]);
    }

    printf("%s\n",ulkeler);


    return 0;
}
