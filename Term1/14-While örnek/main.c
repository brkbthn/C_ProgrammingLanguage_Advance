#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{       setlocale(LC_ALL, "Turkish");
        int sayi;
        int faktoriyelSonuc=1;
        printf("Fakt�riyelini almak istedi�iniz say�y� giriniz.....\n");
        scanf("%d", &sayi);

            while(sayi>=0){
                if(sayi==0){
                        faktoriyelSonuc *= 1;
                }
                else{
                    faktoriyelSonuc*=sayi;

                }
                sayi--;
            }
            printf("%d", faktoriyelSonuc);

    return 0;
}
