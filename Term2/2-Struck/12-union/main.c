#include <stdio.h>
#include <stdlib.h>
union test{
    int i; //int deger bellekte 4 byte tutar
    char c; // 1 byte
    float f; // 4 byte
};
int main()
{
    union test t;
    t.i=2;
    printf("%d\n", t.i);
    t.c='c';
    printf("%c\n", t.c);
    t.f=19.1919;
    printf("%f\n", t.f);

    printf("unionuumuzun tuttugu alan %d byte dir.\n", sizeof(t));
    return 0;
}
