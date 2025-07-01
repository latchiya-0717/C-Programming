#include <stdio.h>

int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<i+1;j++){
                printf("%c ",j+65);
            }
        }
        else{
            for(int j=n-1;j>=(n-1)-i;j--){
                printf("%c ",j+65);
            }
        }
        printf("\n");
    }

    return 0;
}
