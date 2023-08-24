#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Klavyeden girilen bir kelimenin pallindrom(tersi kendisine esit olan) olup olmadigini kontrol eden program.

    char cumlem[100];
    char *p1, *p2;

    printf("lutfen max 100 karakter iceren bir cumle giriniz\n");
    gets(cumlem);  //scanf bosluga kadar alabilir o nedenle gets fonksiyonunu kullandýk

    for(p2=cumlem; *p2 ;p2++);
    p2--;
    int kontrol=1;
    for(p1=cumlem; kontrol &&  p1<p2; p1++,p2--){
        if(*p1 != *p2){
            kontrol=0;
        }
    }
    if(kontrol){
        printf("girilen cumle: %s // bir pallindromdur", cumlem);
    }
    else{
        printf("girilen cumle: %s // bir pallindrom degildir", cumlem);
    }
    return 0;
}
