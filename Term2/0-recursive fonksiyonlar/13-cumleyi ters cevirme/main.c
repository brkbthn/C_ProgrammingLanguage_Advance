#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir cumlenin tersten okunusunun elde edilmesini
saglayan C programini recursive fonksiyon ile yaziniz*/
void terseCev(char *metin, int boy){
    if(boy==0)
        printf("%c", metin[boy]);
    else{
        printf("%c", metin[boy]) ;
        terseCev(metin, boy-1);
    }
}
int main()
{   char cumle[100];
    printf("lutfen bir cumle giriniz\n");
    gets(cumle);
    printf("%d", strlen(cumle));
    terseCev(cumle, strlen(cumle)-1);
    return 0;
}
