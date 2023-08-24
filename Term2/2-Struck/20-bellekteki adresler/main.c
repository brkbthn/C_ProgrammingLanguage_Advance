#include <stdio.h>
#include <stdlib.h>
union paylasimKontrol{
    int x;
    int y;

}kontrol;







int main()
{
    /*klavyeden girilen sayilari tutan iki adet degisken icin ayni bellek bolgesini tutan paylas adinda bir
    union tanimlayiniz ve degiskenlerin kullandiklari bellek bolgelerinin adreslerini ekranda gosteriniz.*/
    int *X, *Y;
    kontrol.x = 100;
    X = &kontrol.x;
    printf("tamsayi (x) = %d  bellek adresi = %p\n",kontrol.x , X);
    kontrol.x = 200;
    Y = &kontrol.y;
    printf("tamsayi (y) = %d  bellek adresi = %p\n",kontrol.y , Y);





    return 0;
}
