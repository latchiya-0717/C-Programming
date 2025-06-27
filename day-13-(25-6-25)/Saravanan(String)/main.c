#include <stdio.h>
#include<string.h>
int main()
{
    char str[]="saravanan";
    int i=0;
    int arr[26]={0};
    for(int i=0;i<strlen(str);i++){
        arr[str[i]-'a']+=1;
    }
    for(int i=0;i<strlen(str);i++){
        if(arr[str[i]-'a']){
            printf("%c-%d\n",str[i],arr[str[i]-'a']);
            arr[str[i]-'a']=0;
        }
    }
    //Null will be the last one of the string
    // while(1){
    //     if(str[i]=='\0')
    //     break;
    //     printf("%c\n",str[i]);
    //     i++;
    // }

    return 0;
}