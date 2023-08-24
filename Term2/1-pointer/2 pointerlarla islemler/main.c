#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1, *ad2, *ad3;
    int n=10, p=20;
    ad1=&n;
    ad2=&p;

    *ad1=*ad2+2;
    printf("%d\n", *ad1);
    printf("%d\n", ad1);
    printf("%d\n", n);
    printf("%d\n", &n);



    return 0;
}
