#include <stdio.h>
#include <stdlib.h>
//Cok boyutlu bir iþci listesini yazdýran program
void isimleriListele(char isimListesi[ ][30], int boyut){
        for(int i=0; i<boyut; i++){
            printf("%s\n", isimListesi[i]);
        }



}
int main()
{   char isciIsimleri[5][30]={"Haydar", "Burcu", "Kaan", "Abdurrrahman", "Halil Ibrahim Yavuz"};
    printf("%s\n", isciIsimleri[0]);//0. satirdaki tüm karakterleri basar
    printf("%s\n", isciIsimleri[4]);
    //printf("%s\n", isciIsimleri[4][1]);// bu sekilde yazdýrmadý
    printf("----------------------------------------------\n");
    isimleriListele(isciIsimleri, 5);
    return 0;
}
