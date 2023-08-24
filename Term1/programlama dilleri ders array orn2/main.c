#include <stdio.h>
#include <stdlib.h>
#define N 20
#define lower -20
#define upper  50
int main()
{    int arr[N], i,j;
        srand(time(0));
        for( i=0; i<N;i++)
            arr[i]=lower+rand()%(upper-lower+1);
            printf("the elements of array:\n");
            for(i=0; i<N;i++)
                printf("%4d", arr[i]);
                printf("\n");
                system("pause");
            for(i=0; i<N;i++){
                for(j=0;j<N;j++){
                    if(i==j) continue;
                    if(arr[i]==arr[j]) break;
                }
                if(j==N) printf("%4d",arr[i]);
                //system("pause");
            }
    return 0;
}
