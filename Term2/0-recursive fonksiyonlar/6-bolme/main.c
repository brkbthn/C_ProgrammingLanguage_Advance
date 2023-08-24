#include <stdio.h>
#include <stdlib.h>
/*klavyeden girilen iki tamsaynin bolumunu (a/b) bolme sembolu
kullanmadan gerceklestiren programi yaziniz.*/
float bolum(int bolunen, int bolen){
    if(bolen==0)
        return 0;
    else if(bolunen==bolen)
        return 1; //bolum=1 demektir
    else if(bolunen< bolen)
        return 0;
    else
        return(1+bolum(bolunen-bolen, bolen));
}




int main()
{   float a, b;
    printf("bolunen sayiyi giriniz\n");
    scanf("%f", &a);
    printf("lutfen bolen sayiyi giriniz");
    scanf("%f", &b);
    printf("bolum = %f\n", bolum(a,b));
    printf("kalan=%f", a- bolum(a,b)*b);

    return 0;
}
