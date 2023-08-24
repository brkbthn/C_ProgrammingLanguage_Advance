#include <stdio.h>
#include <stdlib.h>
struct karmasikSayi{
    float a,b;
};
int main()
{   struct karmasikSayi sayi1, sayi2, sonuc;
    char oper;
    printf("lutfen yapmak istediginiz islemi giriniz");
    scanf("%c", &oper);
    printf("sayi1 in gercek ve sanal kismini giriniz\n");
    scanf("%f %f", &sayi1.a, &sayi1.b);
    printf("sayi2 in gercek ve sanal kismini giriniz\n");
    scanf("%f %f", &sayi2.a, &sayi2.b);

    if(oper=='+'){
        sonuc.a=sayi1.a+sayi2.a;
        sonuc.b=sayi1.b+sayi2.b;
    }
    else if(oper=='-'){
        sonuc.a=sayi1.a-sayi2.a;
        sonuc.b=sayi1.b-sayi2.b;
    }
      else
        printf("lutfen adam gibi bir operator girin tanýmlananlar + ve -\n");

    printf("sonuc;\n");
    printf("%.2f\t", sonuc.a);
    if(sonuc.b>0)
        printf("+%.2fi", sonuc.b);
    else
        printf("%2.fi",sonuc.b);

    return 0;
}
