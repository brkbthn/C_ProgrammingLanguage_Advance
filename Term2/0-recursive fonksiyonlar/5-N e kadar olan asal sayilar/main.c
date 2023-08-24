#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen N pozitif tamsayisina kadr olan asal sayilarin
 akrana bastirilmasini saglayan c programini yaziniz.*/
 int asalMi(int sayi, int i){
     if(i==1)
        return 1;
     else if(sayi%i==0)
        return 0;
     else
        asalMi(sayi, i-1);


 }

int main()
{  int n, i, kontrol;
    printf("lutfen bir sayi giriniz");
    scanf("%d", &n);
    for(i=2; i<=n;i++){
        kontrol = asalMi(i, i/2);
        if(kontrol==1)
            printf("%d\t",i);
    }

    return 0;
}
