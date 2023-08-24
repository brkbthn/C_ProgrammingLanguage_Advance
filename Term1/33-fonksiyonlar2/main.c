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
{   sayininIkiKatiniAl(9);//return deðeri çaðýrýldý
    printf("%d\n", sayininIkiKatiniAl(9));//fonksiyonun içerisi çaðýrýldý: hem içerideki printf deðerdi döndürüldü hem de return deðeri döndürüldü
    printf("%f\n",kareKokunuAl(9));
    altSatiraGec();
    printf("%lf\n", karesiniAl(9));
    return 0;
}
