#include <stdio.h>
#include <stdlib.h>
int toplama(int sayi){
        if(sayi<0){
            printf("lutfen pozitif bir sayi giriniz...");
        }

        if (sayi>0){
            return sayi + toplama(sayi-1);
        }
        else
            return sayi;

}

int main()
{
    //Recursive Function --> Ozyinelemeli Fonksiyon: Kendi kendini cagýran fonksiyon
    int sayi;
    printf("Lutfen pozitif bir tamsayi giriniz...\n");
    scanf("%d", &sayi);
    printf("%d",toplama(sayi));
    return 0;
}
