#include <stdio.h>
#include <stdlib.h>
/*klavyeden girilen N poizitif tamsayisina kadar olan tek sayilarin ekrana
 listelenmesni saglayan c programini recursive fonksiyon ile yaziniz*/
 void tekSayilar(int baslangic, int bitis){

     if(baslangic<=bitis){
        printf("%d", baslangic);
        baslangic +=2;
        tekSayilar(baslangic, bitis);
     }

 }
int main()
{   int n;
    printf("lutfen bir sayi girinz");
    scanf("%d", &n);
    if (n%2==0)
        n--;
    tekSayilar(1, n);

    return 0;
}
