#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir cumlenin kac karakterden olustugunu(bosluk dahil) bulan c programini
recursive func yardimiyla yaziniz.*/
int karakter(char *cumle){
    if(*cumle=='\0')
        return 0;
    else
        return (1+ karakter(cumle+1));

}
int main()
{   char cumle[100];
    printf("lutfen bir cumle giriniz\n");
    gets(cumle);
    printf("karakter sayisi = %d\n", karakter(cumle));

    return 0;
}
