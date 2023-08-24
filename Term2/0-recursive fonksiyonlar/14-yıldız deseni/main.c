#include <stdio.h>
#include <stdlib.h>
/* recursive fonk yardimiyla N den bire her satýrda bir öncekinden 1 azalan
kadar yildiz basan programi yaziniz.
* * * * *
* * * *
* * *
* *
*  gibi
*/
void yildiz(int N){
    int i;
    if(N==0){
        return 0;
    }
    else{
        for(i=0; i<N;i++){
            printf("*\t");
        }
    printf("\n");
    yildiz(N-1);

    }

}
int main()
{   int n;
    printf("girilebilecek max yidiz sayisini giriniz\n");
    scanf("%d", &n);
    printf("\n");
    printf("\n");
    printf("\n");
    yildiz(n);

    return 0;
}
