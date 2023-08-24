#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, n, sum=1;

    printf("please give me a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
