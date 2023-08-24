#include <stdio.h>
#include <stdlib.h>
int F(int a, int b){
    int t;
    if(a==0) return b;
    printf("%d %d\n", a, b);
    t=a;
    a=b%t;
    return F(a,t);

}
int main()
{   int x=115, y=4, c;
    c = F(x,y);
    printf("%d\n", c);
    system("pause");

    return 0;
}
