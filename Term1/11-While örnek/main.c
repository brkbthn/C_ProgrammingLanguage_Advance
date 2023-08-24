#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"Turkish");
       //örnek: 1-10 arasý çarpým tablosu

   int i=1;
   while(i<11){
            printf("1*%d =%d\t",i,1*i);
            printf("2*%d =%d\t",i,2*i);
            printf("3*%d =%d\t",i,3*i);
            printf("4*%d =%d\t",i,4*i);
            printf("5*%d =%d\t",i,5*i);
            printf("6*%d =%d\t",i,6*i);
            printf("7*%d =%d\t",i,7*i);
            printf("8*%d =%d\t",i,8*i);
            printf("9*%d =%d\t",i,9*i);
            printf("10*%d =%d\t",i,10*i);
            printf("\n");
            i ++;
   }

    return 0;
}
