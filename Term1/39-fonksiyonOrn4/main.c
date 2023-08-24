#include <stdio.h>
#include <stdlib.h>
//Sicaklik birim degisimi (celcius-fahrenheit) yapan program
// celcius=              0------------------------100
//fahrenheit=       32------------------------212      F=(C*1,8)+32   C=(F-32)/1.8
float celcius(float fahrenheit){
    return (fahrenheit-32)/1.8; // int ya da float uzerinden fonksiyonu olusturmamizin nedeni return degerini paketlemek istememizden kaynaklaniyor.
}
float fahrenheit(float celcius){
    return celcius*1.8+32;
}

int main()
{   float celciusDerece;
    printf("Fahrenheit a cevirmek istediginiz celcius degerin giriniz....\n");
    scanf("%f", &celciusDerece);
    printf("%f\n", fahrenheit(celciusDerece));

printf("-------------------------------------\n");

    float fahrenheitDerece;
    printf("Celcius a cevirmek istediginiz fahrenheit degerin giriniz....\n");
    scanf("%f", &fahrenheitDerece);
    printf("%f\n", celcius(fahrenheitDerece));
    return 0;
}
