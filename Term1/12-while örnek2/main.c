#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{   setlocale(LC_ALL,"Turkish");
    int sayi;
    int x=1;
	printf("L�tfen ka�a kadar bast�rmak iistedi�inizi giriniz...\n");
	scanf("%d", &sayi);

	while(sayi>0){
		printf("%d\n",x);
		x++;
        sayi--;

	}
    return 0;
}
