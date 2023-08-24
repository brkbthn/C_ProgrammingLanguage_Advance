#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n<0)
        printf("nefatif deger girilemez\n");
    else
        return fibonacci(n-2)+fibonacci(n-1);/* fibonaccinin n. terimini verir*/

}
int main()
{
    int sayi, i;
    printf("kac adet sayi uretilecek?");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++){
        printf("%d\n", fibonacci(i));
    }

    return 0;
}
