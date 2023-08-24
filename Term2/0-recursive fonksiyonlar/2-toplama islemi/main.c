#include <stdio.h>
#include <stdlib.h>
int toplama(int sayi){

    if (sayi==1)
            return 1;

    else
            return sayi+= toplama(sayi-1);

}
int main()
{
    printf("%d", toplama(10));

    return 0;
}
