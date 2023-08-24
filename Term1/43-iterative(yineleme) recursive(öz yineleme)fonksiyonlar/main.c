#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int sayi){

    int sonuc = 1;
    for(int i=0; i<sayi;i++)
        sonuc = sonuc*(i+1);

    return sonuc;
}


int faktoriyelRekursif(int sayi){

    if(sayi<=1)
        return 1;
    else
        return sayi*faktoriyelRekursif(sayi-1);

}



int main()
{
    //iterative=yinelemeli, recursive göre daha hizli calisir
    printf("%d\n", faktoriyel(5));
    printf("%d\n", faktoriyelRekursif(5));



    return 0;
}
