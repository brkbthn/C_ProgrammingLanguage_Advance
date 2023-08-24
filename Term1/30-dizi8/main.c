#include <stdio.h>
#include <stdlib.h>
//matris toplamý
int main()
{
    int dizi1[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};//herhangi bir elemani bos birakirsak o eleman yerine 0 yazýlýr.
    int dizi2[3][4] = {{4,2,9,4}, {3,5,75,8}, {9,0,11,123}};
    int toplam[3][4];
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            toplam[i][j] = dizi1[i][j] +dizi2[i][j];
        }
    }
     for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            printf("%d                   ", toplam[i][j]);
        }
        printf("\n");
     }
printf("-------------------------------------------------------------------------------\n");

    int dizi3[3][4] ;
    int dizi4[3][4] ;

      for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            printf("ilk matrisiniz icin; %d. satir %d. sutundaki elemani giriniz....\n", i+1, j+1);
            scanf("%d", &dizi3[i][j]);
        }
     }

     system("CLS");//Bu satirdan once konsolda yazilan her seyi siler       CLS= Clear Screen


      for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            printf("ikinci matrisiniz icin; %d. satir %d. sutundaki elemani giriniz....\n", i+1, j+1);
            scanf("%d", &dizi4[i][j]);
        }
     }
      for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            toplam[i][j] = dizi3[i][j] +dizi4[i][j];
        }
    system("CLS");//Bu satirdan once konsolda yazilan her seyi siler       CLS= Clear Screen
    printf("iki matrisin toplami\n");
    }
      for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            printf("%d                   ", toplam[i][j]);
        }
        printf("\n");
     }


    return 0;
}
