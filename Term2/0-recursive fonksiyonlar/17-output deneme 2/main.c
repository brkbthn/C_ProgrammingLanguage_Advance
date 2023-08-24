#include <stdio.h>
#include <stdlib.h>
void F(int a){
    if(a<5)
        return;
    a--;
    F(a);
    printf("\n %d", a);
    return;
}
int main()
{   int a = 7;
    F(a);
    printf("main %d",a);


    return 0;
}
