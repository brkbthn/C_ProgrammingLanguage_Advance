#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct personel{
        int sifre;
        char ad[19];
        char soyad[19];
        int yas;
        float maas;
        char cinsiyet[19];

    }kisiler;

void sirala(kisiler x[], int m){
    int i, j;
    kisiler t;
    for(i=0; i<m-1; i++ ){
        for(j=i+1; j<m; j++){
                if(strcmp(x[i].ad, x[j].ad)>0){//buyuk olanin ascii kodu daha buyuktur.
                     t = x[i];
                     x[i] = x[j];
                     x[j] = t;//islemleri pointer ile yaptigimiz icin maindeki degerler degisiyor;)
                }
        }
    }
}
void listele( kisiler x[], int m){

        int i;
        for(i=0; i<m; i++){
            printf("%d   %s  %s   %d   %d   %s\n", x[i].sifre,  x[i].ad,  x[i].soyad,  x[i].yas,  x[i].maas,  x[i].cinsiyet);
        }


}

int main()
{   /*Asagida verilen yapiyi kullanarak, personel bilgilerinin alinmasini ve alindiktan sonra
    personel adlarina gore a dan z ye alfabetik olarak personel bilgilerinin listelenmesini saglayan
    c programini yaziniz
        void sirala(kisiler x[], int m);
        void listele(kisiler x[], int m);   */

    int N;
    int i;
    printf("kac adet personel bilgisi tutulacak\n");
    scanf("%d", &N);
    kisiler p[N];
    for(i=0; i<N; i++){
        printf("sifre?\n");
        scanf("%d", &p[i].sifre);
        printf("ad?\n");
        scanf("%s", &p[i].ad);
        printf("soyad?\n");
        scanf("%s", &p[i].soyad);
        printf("yas?\n");
        scanf("%d", &p[i].yas);
        printf("Maas?\n");
        scanf("%d", &p[i].maas);
        printf("cinsiyet?\n");
        scanf("%s", &p[i].cinsiyet);
    }
    sirala(p, N);
    listele(p, N);

    return 0;
}
