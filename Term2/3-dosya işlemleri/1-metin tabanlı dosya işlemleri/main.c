#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
          FILE yapisi file pointer olarak adlandirilir.
          FILE *dosya; l-seklinde tanimlanir.
          Dosyayi acmak icin fopen(), kapamak icin fclose() kullanlir.


          FILE *dosya;

          Dosya acma modlari;

          r         ReadOnly  = sadece okuma için.    Dosyanin acilabilmesi icin onceden olusturulmasi gerekir.
          w        WriteOnly = yalnizca yazma icin. Dosya kayitli olsun veya olmasin yeniden olusturulur.
          a         append = ekleme. Kayitli b,r dosyanin sonuna veri eklemek icin kullanilir.
          r+       Okuma ve Yazma. Bu modda aciilmis bir dosyanin onceden var olmasi gerekir.
          w+     Okuma ve yazma.  Bu modda acilmis olan bir dosya var olsun veya olmasin yeniden olusturulur.
          a+      Okuma ve yazma.  Kayitli bir dosyanin sonuna veri eklemek icin acilir.


          Fonksiyon;

          fgetc()    dosyaya bir karakter okur
          fgets()    dosyaya bir karakter dizi okur
          fread()    dosyaya bir kayýt dizi veya karakteri ikili olarak okur
          fscanf()   dosyadaki verileri bicimlendirerek okur


          Dosyanin sonunun belirlenmesi feof()

          Dosyadan okuma islemleri yapilirken, cogu kez dosyanin sonunu denetlemek gerekecektir. Dosya gostergesinin
          dosyanin sonuna isaret edip etmedigini anlama icin feof fonksiyonu kullanilir.

          FILE *dosya;
          while(!feof(dosya)) //dosyanin sonuna gelinmedigi surece
          {
                fgetc(dosya));           Dosyanin sonuna gelinmedigi durece dosyadan karakter okur.
          }

          */




    return 0;
}
