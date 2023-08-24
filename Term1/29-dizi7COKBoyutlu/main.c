#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cokBoyutluDizi[3] [2] = {1,2,3,4,5,6}; //3 =satir sayisi 2 = sutun sayisi  // matris gibi düsün

    printf("%d\n", cokBoyutluDizi[0][0]);
    printf("%d\n", cokBoyutluDizi[0][1]);
    printf("%d\n", cokBoyutluDizi[1][0]);
    printf("%d\n", cokBoyutluDizi[1][1]);
    printf("%d\n", cokBoyutluDizi[2][0]);
    printf("%d\n", cokBoyutluDizi[2][1]);

printf("-----------------------------------------------------------------------\n");

    int cokBoyutluDizi2 [3] [2] = {{11,12}, {13,14}, {15,16}};
    printf("%d\n", cokBoyutluDizi2[0][0]);
    printf("%d\n", cokBoyutluDizi2[0][1]);
    printf("%d\n", cokBoyutluDizi2[1][0]);
    printf("%d\n", cokBoyutluDizi2[1][1]);
    printf("%d\n", cokBoyutluDizi2[2][0]);
    printf("%d\n", cokBoyutluDizi2[2][1]);
printf("-----------------------------------------------------------------------\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", cokBoyutluDizi2[i][j]);
        }
        printf("\n");
    }
printf("-----------------------------------------------------------------------\n");
    int m,n;
    printf("kac satir istiyorsunuz..\n");
    scanf("%d", &m);
    printf("kac sutun istiyorsunuz..\n");
    scanf("%d", &n);
    int cokBoyutluDizi3[m][n];
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            printf("%d satirindaki %d sutunundaki elemani giriniz....\n", i+1, j+1);
            scanf("%d", &cokBoyutluDizi3[i][j]);
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            printf("   %d   ", cokBoyutluDizi3[i][j]);
        }
        printf("\n");

printf("-----------------------------------------------------------------------\n");
    }
    int cokBoyutluDizi4[2][2][2];     // x y z ekseni gibi dusunulebilir
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            for(int k=0; k<2;k++){
                printf("%d. %d. %d. elemani giriniz\n", i+1, j+1, k+1);
                scanf("%d", &cokBoyutluDizi4[i][j][k]);

            }
        }
    }
     for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            for(int k=0; k<2;k++){
                printf("%d ", cokBoyutluDizi4[i][j][k]);// ampersantin kalirildigine dikkat

                   }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
