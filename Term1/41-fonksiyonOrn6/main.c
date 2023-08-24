#include <stdio.h>
#include <stdlib.h>
//1-10000 arasindaki m�kemmel sayilari veren fonksiyon
//kendisi disindaki pozitif tam bolenlerinin toplami kendisine esit olan sayilara m�kemmel sayi denir
int mukemmekSayiMi(int sayi){
        int toplam = 1;
        if(sayi==1){
            return 0;
        }
        for(int carpan=2; carpan<=sayi/ 2;carpan++){
            if(sayi%carpan==0){
                toplam += carpan;
            }
        }
        if(toplam==sayi){
            return 1;//m�kemmel
        }
        else{
            return 0;//m�kemmel degil
        }

}
int main()
{      int sayi;
        while(1){
        printf("mukemmel olup olmadigini ogrenmek istediginiz sayiyi giriniz...\n");
        scanf("%d", &sayi);
        if(mukemmekSayiMi(sayi)==1){
            printf("%d mukemmel sayidir.\n", sayi);
        }
        else{
            printf("%d mukemmel sayi degildir.\n",sayi);
        }
        }


    return 0;
}
