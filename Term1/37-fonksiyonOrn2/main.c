#include <stdio.h>
#include <stdlib.h>
//Cok boyutlu bir i�ci listesini yazd�ran program
void isimleriListele(char isimListesi[ ][30], int boyut){
        for(int i=0; i<boyut; i++){
            printf("%s\n", isimListesi[i]);
        }



}
int main()
{   char isciIsimleri[5][30]={"Haydar", "Burcu", "Kaan", "Abdurrrahman", "Halil Ibrahim Yavuz"};
    printf("%s\n", isciIsimleri[0]);//0. satirdaki t�m karakterleri basar
    printf("%s\n", isciIsimleri[4]);
    //printf("%s\n", isciIsimleri[4][1]);// bu sekilde yazd�rmad�
    printf("----------------------------------------------\n");
    isimleriListele(isciIsimleri, 5);
    return 0;
}
