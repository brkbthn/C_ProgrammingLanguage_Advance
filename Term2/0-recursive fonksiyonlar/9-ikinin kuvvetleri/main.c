#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir N tamsayisina kadar 2 nin kuvvetlerinin listelenmesini
saglayan c programini recursive fonksiyon ile yaiziniz.*/
int ikininKuvvetleri(int n){
    int deger;
    if(n==0)
        deger=1;
    else
        deger=2*ikininKuvvetleri(n-1);
    printf("%d\t", deger);
    return deger;
}

int main()
{   int sayi;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    printf("%d ye kadar olan 2 nin kuvvetleri=",sayi);
    ikininKuvvetleri(sayi);


    return 0;
}
