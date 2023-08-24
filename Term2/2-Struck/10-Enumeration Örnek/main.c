#include <stdio.h>
#include <stdlib.h>
//yilin aylarini gosteren bir enumeration hazýrlayin
//Ayni sekilde aldigi parametreye göre yilin ayini donduren bir fonksiyon yaziniz.

typedef enum{
    ocak,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik

}aylar;
void ayi_goster(aylar canan ){
    switch(canan){
    case ocak:
        printf("ocak");
        break;
    case subat:
        printf("subat");
        break;
    case mart:
        printf("mart");
        break;
    case nisan:
        printf("nisan");
        break;
    case mayis:
        printf("mayis");
        break;
    case haziran:
        printf("haziran");
        break;
    case temmuz:
        printf("temmuz");
        break;
    case agustos:
        printf("agustos");
        break;
    case eylul:
        printf("eylul");
        break;
    case ekim:
        printf("ekim");
        break;
    case kasim:
        printf("kasim");
        break;
    case aralik:
        printf("aralik");
        break;
    default:
        printf("boyle bir ay yok");
        break;
    }
}
int main()
{
    aylar can = temmuz;
    ayi_goster(can);
    return 0;
}
