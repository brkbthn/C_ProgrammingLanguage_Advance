#include <stdio.h>
#include <stdlib.h>
struct degerTip{
    int tip;
    union{
        char kar;
        float sayi;
    }bir;
};



int main()
{   /*Birinci elemani tamsayi ve ikinci elamani bir union olan yapi dizisini(en fazla 20 elemanli)
    tanimlayiniz. Union tipindeki eleman, karakter ve reel sayi olan 2 elemandan olussun.
    programinizda bir tamsayi degerine gore bir karakter veya bir reel sayiyi girdi olarak aliniz. Bu
    tamsayi degeri 1 ise bie karakter 0 ise bir reel sayi girilmelidir. Bu tamsayilari ve bu tam sayilara
    bagli olarak karakter veya reel sayilari bu yapi dizisinde saklayiniz. Veri girme islemi ise tamsayi
    degerinin 0 ve 1 den farkli bir sayi girilmesiyle sonlanmalidir. Ayrica yapi dizisini tarayarak reel
    sayilarin ortalamasini bulunuz.*/

    struct degerTip degerler[20];
    char satir; //iki scanf arasinda hata almamak icin
    int i=-1;
    int j;
    float ortalama=0.0;
    int n=0;
    do{
            i++;
            printf("lutfen bir tamsayi giriniz\n");
            scanf("%d", &degerler[i].tip);
            scanf("%c", &satir);//iki scanf arasinda hata almamak icin
            if(degerler[i].tip==1){
                printf("karakter giriniz\n");
                scanf("%c", &degerler[i].bir.kar);
                scanf("%c", &satir);//iki scanf arasinda hata almamak icin
            }
            else if(degerler[i].tip==0){
                printf("reel sayi giriniz\n");
                scanf("%f", &degerler[i].bir.sayi);
            }

    }while(degerler[i].tip == 0 || degerler[i].tip == 1);

    for(j=0;j<=i; j++){
             if(degerler[j].tip==0){
                    ortalama += degerler[j].bir.sayi;
                    n++;
                }
    }
    ortalama = ortalama/n;
    printf("reel sayilarin ortalamasi = %f", ortalama);









    return 0;
}
