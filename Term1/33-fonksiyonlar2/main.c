#include <stdio.h>
#include <stdlib.h>
int sayininIkiKatiniAl(int sayi){
    printf("%d\n", sayi*2);
    return sayi*2;
}
float kareKokunuAl(int sayi){
    return sqrt(sayi);
}
double karesiniAl(int sayi){
    return sayi*sayi;
}
void altSatiraGec(){
    printf("\n");
}
int main()
{   sayininIkiKatiniAl(9);//return de�eri �a��r�ld�
    printf("%d\n", sayininIkiKatiniAl(9));//fonksiyonun i�erisi �a��r�ld�: hem i�erideki printf de�erdi d�nd�r�ld� hem de return de�eri d�nd�r�ld�
    printf("%f\n",kareKokunuAl(9));
    altSatiraGec();
    printf("%lf\n", karesiniAl(9));
    return 0;
}
