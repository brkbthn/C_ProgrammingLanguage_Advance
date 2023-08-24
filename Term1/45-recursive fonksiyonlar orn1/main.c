#include <stdio.h>
#include <stdlib.h>
//faktoriyel hesabi
int faktoriyel(int sayi){
    if(sayi<0)
        printf("Lutfen pozitif bir sayi giriniz...\n");
    else if(sayi>=1)
        return sayi*(faktoriyel(sayi-1));
    else
        return 1;

}
int main()
{   int sayi;
    printf("Lutfen faktoriyelini ogrenmek istediginiz pozitif bir sayi giriniz...\n");
    scanf("%d", &sayi);
    printf("%d", faktoriyel(sayi));

    return 0;
}
