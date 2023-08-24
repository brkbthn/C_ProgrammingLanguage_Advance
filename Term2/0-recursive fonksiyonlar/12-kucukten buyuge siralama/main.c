#include <stdio.h>
#include <stdlib.h>
/*Rastgele uretilen n adet tamsayi bir dizie tutulmaktadir. Dizi elemanlarinin
kucukten buyuge dogru siralanmasini saglayan c prgramini recursive olarak yaziniz*/
void sirala(int A[], int boy){    // A[]=*A
        int gecici, i;
        if(boy>0){
                for(i=0;i<boy;i++){
                    if(A[i]>A[i+1]){
                        gecici = A[i+1];
                        A[i+1] = A[i];
                        A[i] = gecici;
                    }
                }
                sirala(A, boy-1);
        }

}
int main()
{   int n, i;
    printf("kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));//srand olmasaydi rand hep ayni sayiyi atardi.
    for(i=0;i<n;i++){
        dizi[i] = rand() % 100;
        printf("%d\t", dizi[i]);
    }
    sirala(dizi, n-1);
    printf("\n");

    for(i=0;i<n;i++){
            printf("%4d\t", dizi[i]);
}
    return 0;
}
