#include <stdio.h>
#include <stdlib.h>
// EBOB
int EBOB(int sayi1, int sayi2){
    if(sayi1>=0 && sayi2>=0){
            if(sayi1>sayi2){
                   if(sayi2!=0){
                        return EBOB(sayi2, sayi1%sayi2);
                    }
                    else
                        return sayi1;
            }
            else{
                int temp;
                sayi1=temp;
                sayi1 = sayi2;
                sayi2 = temp;
                    if(sayi2!=0){
                        return EBOB(sayi2, sayi1%sayi2);
                    }
                    else
                        return sayi1;
            }

    }
    else
        printf("lutfen pozitif sayilar giriniz..\n");
}
int main()
{   int sayi1, sayi2;
    printf("lutfen ebobunu bulmak istediginiz  sifirdan farkli iki sayi giriniz\n");
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    printf("%d", EBOB(sayi1,sayi2));

    return 0;
}
