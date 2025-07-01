#include <stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0+i;j<n;j++){
            printf("%c",j+65);
        }
        printf("\n");
    }
    return 0;
}