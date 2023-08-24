#include <stdio.h>
#include <stdlib.h>
//1-1000 arasi asal sayilari bulmak için fonksiyon
int asalMi(int sayi){
        if(sayi==1){
            return 0;
        }
        for(int carpan = 2; carpan<=sayi/2;carpan++){
            if(sayi % carpan ==0){
                return 0; //return degeri fonksiyonu kýracagi için alttaki degeri okumayaaktir
            }
        }
        return 1;
}


int main()
{   int i;
    for(i=1; i<=1000; i++){
        if(asalMi(i)==1){
            printf("%d sayisi asaldir\n", i);
        }
}
    return 0;
}
