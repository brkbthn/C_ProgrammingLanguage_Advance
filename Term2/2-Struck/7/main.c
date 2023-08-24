#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
    char ad[10];
    char soyad[10];
    int no;
};
int main()
{   struct ogrenci can;
     strcpy(can.ad, "can");
     strcpy(can.soyad, "Boz");
     can.no=27;
     printf("%s \t %s \t %d", can.ad, can.soyad, can.no);

     struct ogrenci batuhan={"batuhan", "devran", 595};
     printf("%s \t %s \t %d", batuhan.ad, batuhan.soyad, batuhan.no);
    return 0;
}
