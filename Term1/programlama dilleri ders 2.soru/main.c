#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    for(ch=97;ch<=127;ch++){


            printf("ch=%d ch=%c\n",ch,ch);
            if(ch==127) break;



            //char tipli bir degiskene 127 den daha buyuk bir sayi atanamaz--Atanabilmesi icin 9 byt lýk yer gerekir fakat ch sadece 8 byt lik yer tutabilir
            //bu nedenle program kendisini 128 e esitleyip dongu kosulunu yeniden sorgulamamalýdýr eger sorgularsa program sonsuz donguye girer.
    }

    return 0;
}
