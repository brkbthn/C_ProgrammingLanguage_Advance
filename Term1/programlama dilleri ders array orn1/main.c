#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 100
#define lower -20
#define upper  50

int main()
{      int arr1[N], arr2[N];
        srand(time(0));
        for(int i=0; i<N;i++)
            arr1[i]=lower+rand()%(upper-lower+1);
        for(int i=0; i<N;i++)
            arr2[i]=arr1[i];
        for(int i=0; i<N;i++)
            printf("%d", arr2[i]);

    return 0;
}
