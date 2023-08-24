#include <stdio.h>
#include <stdlib.h>
/*Taban ve us degerleri klavyeden girilmek usere a^b ifadesinin
hesaplanmasini saglayan c programini recursive olarak yaziniz.*/
int usAl(int a, int b){
    int sonuc;
    if(b==0)
        sonuc=1;
    else
        sonuc = a*usAl(a,b-1);
    return sonuc;
}
int main()
{   printf("%d", usAl(2,4));

    return 0;
}
