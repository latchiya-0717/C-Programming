#include <stdio.h>

int main()
{
    int n,left=1,right=1;
    printf("Enter the matrix:");
    scanf("%d",&n);
    int arr[n][n],val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(j<i+1 && arr[i][j]!=0)
           right=0;
           if((i+j)==n-1 && arr[i][j]!=0)
           left=0;
        }
    }
    if(right){
        printf("Its a right angle triangle");
    }
    else if(left){
        printf("Its a left angle triangle");
    }
    else{
        printf("Its not a triangle");
        
    }

    return 0;
}