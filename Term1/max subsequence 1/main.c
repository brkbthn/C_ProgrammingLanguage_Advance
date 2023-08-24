#include <stdio.h>
#include <stdlib.h>

int main()
{   int dizi[10]= {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int maxSum, thisSum, best_i, best_j, i, j, k;
    maxSum=0;
    thisSum=0;
    best_i=-1;
    best_j=-1;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++){
            thisSum=0;
            for(k=i;k<=j;k++)
                thisSum+=dizi[k];
            if(thisSum>maxSum){
                maxSum = thisSum;
                best_i=i;
                best_j=j;
            }
        }
        printf("%d, %d, %d", best_i, best_j, maxSum);


    return 0;
}
