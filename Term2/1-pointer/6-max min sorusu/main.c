#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    /*
        10 tane integer tipinde bir eleman� olan bir dizi tan�mlay�n ve
    bu elemenlar� kullan�c�n�n girmesini sa�lay�n.
        Pointer yard�m�yla dizideki elemanlar�n en b�y�k ve en k���k de�erini bulun
        */
        /*
        int i;
        int can[N];

        printf("%d adet deger giriniz\n", N);
        for(i=0; i<N;i++){
            scanf("%d",can+i);
        }
        int max, min;
        max = *can;
        min = *can;
        for(i=1;i<N; i++){
                if(*(can+i)>max){
                    max = *(can+i);
                }
                if(*(can+i)<min){
                    min = *(can+i);
                }
        }
        printf("max=%d  min=%d",max, min); */

        int i , min, max;
        int *canan;
        int can[N];
        printf("%d tane deger giriniz\n", N);
        for(canan=can; canan<can+N;canan++){
            scanf("%d", canan);
        }
        max = min = *can;
        for(canan=can+1;canan<can+N;canan++){
            if(*canan>max){
                max = *canan;
            }
            else if(*canan<min){
                min = *canan;
            }
        }
        printf("max=%d, min=%d", max, min);


    return 0;
}
