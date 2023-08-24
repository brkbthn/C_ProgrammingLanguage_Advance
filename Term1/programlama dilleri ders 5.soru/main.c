#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        for(j=1;j<=n;j++)
            printf("%5d",i*j);
        printf("\n");
    }
    return 0;
}
