#include <stdio.h>
#include <stdlib.h>
/*klavyeden girilen N pozitif tamsayidan 0 a kadar olan sayilarlin ekrana
gosterilmesini saglayan c programini yaziniz*/
void listele(int sayi){
    if(sayi<0){
        printf("lutfen gecerlii bir sayi degeri giriniz...\n");
        return 0;
    }
   else if(sayi>=0){
        printf("%d", sayi);
            if(sayi-1<0)
                return 0;
        listele(sayi-1);
    }
}


int main()
{   int n;
    printf("lutfen bir sayi giriniz");
    scanf("%d", &n);
    listele(n);

    return 0;
}
