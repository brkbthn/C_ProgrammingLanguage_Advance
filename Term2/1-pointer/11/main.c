#include <stdio.h>
#include <stdlib.h>
/* 0 dan 14 e kadar olan deðerleri dizide tanýmlayýn
dizinin içindeki çift elemanlarý bastýrýn
dizinin içindeki tek elemanlarý bastýrýn*/


int main()
{   int dizi[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int *ptr;
    printf("dizimizin ilk hali: \n");
    for(ptr=dizi; ptr<dizi+15; ptr++){
        printf("%d\t", *ptr);
    }
    printf("\n");
    for(ptr=dizi; ptr<dizi+15; ptr+=2){
        printf("%d\t", *ptr);
    }
    printf("\n");
     for(ptr=dizi+1; ptr<dizi+15;ptr+=2){
        printf("%d\t", *ptr);
    }

    return 0;
}
