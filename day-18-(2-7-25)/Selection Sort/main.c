#include <stdio.h>

int main()
{
    int n=5,temp;
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<n-1;i++){
        int small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}