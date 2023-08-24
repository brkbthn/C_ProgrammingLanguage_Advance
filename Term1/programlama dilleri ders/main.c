#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n;
    printf("Enter a value:\n");
    scanf("%d", &n);
    for(i=1; i<=n;n--){
            if(n%2==1){
                printf("%d cift sayidir\n",n);
            }
            else{
                printf("%d tek sayidir\n",n);
            }
    }

    return 0;
}
