#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0; i<10;i++){
            if(i%2==1){
                printf("%d\n",i);
                continue;

            }//break , continue ifadelerini unutma
            printf("xxxxxx    %d\n", i);
    }
printf("Dongu kirildi....\n");
    return 0;
}
