#include <stdio.h>
#include <stdlib.h>
#define N 20
#define lower -20
#define upper  50
int main()
{       int arr[N], i, j, k, count=0;
        srand(time(0));
        for( i=0; i<N;i++)
            arr[i]=lower+rand()%(upper-lower+1);
        printf("the elements of array:\n");
            for(i=0; i<N;i++)
                printf("%4d", arr[i]);
                printf("\n");

        for(i=0;i<N;i++){
            for(k=0;k<i ;k++)
                    if(arr[i]==arr[k]) break;
            if(k==i){//ram de k deðerinin son hali if bloguna girmese bile tutuluyor.
                for(j=i+1;j<N;j++) if(arr[i]==arr[j]){
                    count++; break;
                }
            }
        }
        printf("The number of dublicate number %d\n", count);





    return 0;
}
