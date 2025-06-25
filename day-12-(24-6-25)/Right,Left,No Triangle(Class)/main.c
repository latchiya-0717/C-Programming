#include <stdio.h>

int main()
{
    int n;
    //printf("Enter the ")
    scanf("%d",&n);
    int arr[n][n],val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        if(val==0){
            for(int j=0;j<i+1;j++){
                if(arr[i][j]!=0){
                    val=1;
                    break;
                }
            }
            if(val==1)
            i=0;
        }
        else if(val==1){
            for(int j=0;(i+j)>=n-1;j++){
                if(arr[i][j]!=0){
                    val=2;
                    break;
                }
            }
        }
    }
    if(val==0){
        printf("Its a right angle triangle");
    }
    else if(val==1){
        printf("Its a left angle triangle");
    }
    else{
        printf("Its not a triangle");
        
    }

    return 0;
}
