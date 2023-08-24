#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi;
    printf("girdiginiz sayi ile 0 arasinda kalan 5'e bolunebilen sayilari bastiralim\n");
    printf("lütfen bir sayi giriniz\n");
    scanf("%d", &sayi);
    if(sayi>=0){
        for(int i=0;i<sayi; i+=5)
            printf("%d\n",i);
        }
    else{
        for(int i=0; i>sayi;i-=5){
            printf("%d\n",i);
        }
    }

    return 0;
}
