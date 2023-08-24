#include <stdio.h>
#include <stdlib.h>
void degistir(int *ad1, int *ad2){
        int temp;
        temp = *ad1;
        *ad1 = *ad2;
        *ad2 = temp;
}
int main()
{   int a=10, b=20;
    printf("cagirmadan once: a=%d, b=%d\n",a,b);
    degistir(&a,&b);
    printf("cagirdiktan sonra a=%d, b=%d \n", a, b);
    /*fonksiyonun icinde a ve b deðskenlerinin adreslerini
     kullandýgýmýz icin globalde a ve b degerleri degisti
     eger adresleri kullamasaydik fonksiyon icinde degerler degismesine ragmen
    main fonksiyonu icinde degismeden kalacaklardi*/

    return 0;
}
