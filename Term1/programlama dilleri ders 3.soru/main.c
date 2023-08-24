#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='A';
    printf("Uppercase Alfabeth;\n");
    while(ch<='Z'){
        printf("%d\t\t%c\n",ch,ch);
        ch++;
    }
    ch='a';
    printf("lovercase alfabeth;\n");
    while(ch<='z'){
            printf("%d\t\t%c\n",ch,ch);
            ch++;

    }

    return 0;
}
