#include <stdio.h>
#include <stdlib.h>

int main()
{
   //fputs() --> dosyaya bir karakter dizisi kaydeder.
   //fprintf() --> dosyaya bicimlendirilmis veri kaydetme icin kullanilir.


   /*
   FILE *dosya;

   dosya = fopen("can.txt","w");
   fclose(dosya);
   */
   /*FILE *dosya;
   char isim[] = "can";
   dosya = fopen("canan.txt", "w");
   fprintf(dosya, "bu dosya %s'in dosyasidir.", isim);
   fclose(dosya);
    */
    /*FILE *dosya;
    dosya = fopen("carrpim taplosu.txt", "w");
    int i,j;
    for(i=1; i<=10;i++){
            for(j=1;j<=10;j++){
                fprintf(dosya, "%d*%d=%d\n",i,j, i*j);
            }
            fprintf(dosya, "\n\n\n");

    }
    fclose(dosya);*/

    /*FILE *dosya;
    dosya = fopen("ogrenci.txt", "a");
    char isim[20];
    char okul[40];
    char bolum[40];
    printf("adiniz?"); gets(isim);
    printf("okulunuz?"); gets(okul);
    printf("bolumunuz?"); gets(bolum);

    fprintf(dosya, "%s\n",isim);
    fprintf(dosya, "%s\n",okul);
    fprintf(dosya, "%s\n",bolum);
    fclose(dosya);
    */
    FILE *dosya;
    dosya = fopen("merhaba.txt", "a");
    fputs("\n naber", dosya); //dosyaya karakter dizisi kaydeder.
    fclose(dosya);

}
