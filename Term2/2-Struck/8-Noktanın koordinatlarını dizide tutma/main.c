#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char isim[10];
    float x_ekseni;
    float y_ekseni;

}nokta;
void ekranaYazdir( /*struct*/ nokta p[] , int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s (%f %f)\n", p[i].isim, p[i].x_ekseni, p[i].y_ekseni);
    }


}

int main()//typedef kullanýgýmýz icin structan sonra isim koymamiza gerek kalmadi
{   nokta can[5] = {{"B",3 ,4 },{"Be",5 ,6 },{"Ber",7 ,8 },{"Berk",9 ,10 },{"Berkk",11 ,12 }};
    /*typedef kullanigimiz için "struct nokta can diye taným yapmamiza gerek kalmadi.*/
    ekranaYazdir(can, 5);
    return 0;
}
