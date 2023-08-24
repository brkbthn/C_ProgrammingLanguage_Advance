#include <stdio.h>
#include <stdlib.h>
int factoriyel(int *sayi){
    int sonuc = 1;
    int i;
    for(i=*sayi; i>0; i--){
        sonuc *= *sayi;
        (*sayi)--;
    }
    return sonuc;




}
int main()
{
    int n, originalSayi;
    printf("lutfen faktoriyeli alinacak sayiyi giriniz\n");
    scanf("%d", &n);
    originalSayi = n;
    printf("%d factoriyel = %d\n",originalSayi, factoriyel(&n));
    printf("n = %d, originalSayi = %d",n, originalSayi);

    return 0;
}
