#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[]="Hello";
    char str1[100];
    for(i=0;i<strlen(str);i++){
        str1[i]=str[i];
    }
    str[i]='\0';
    printf("%ld",strlen(str));

    return 0;
}
